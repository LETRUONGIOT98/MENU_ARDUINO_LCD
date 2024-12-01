
#define LEN 11
#define XUONG 10
#define tang 9
#define giam 8
#define RST 7
#include <EEPROM.h>
#include <Wire.h>   //Thư viện giao tiếp i2c
#include <LiquidCrystal_I2C.h>  //Thư viện màn hình
LiquidCrystal_I2C lcd(0x27, 20, 4);
int i=0,sp1=0,sp2=0,sp3=0,sp4=0,sp5=0,sp6=0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  lcd.init();                      // initialize the lcd
  lcd.backlight();
  pinMode(LEN, INPUT_PULLUP);
  pinMode(XUONG, INPUT_PULLUP);
  pinMode(tang, INPUT_PULLUP);
  pinMode(giam, INPUT_PULLUP);
  pinMode(RST, INPUT_PULLUP);
  delay(300);
  sp1 = EEPROM.read(1);
  sp2 = EEPROM.read(2);
  sp3 = EEPROM.read(3);
  sp4 = EEPROM.read(4);
  sp5 = EEPROM.read(5);
  sp6 = EEPROM.read(6);
  delay(300);
  lcd.setCursor(0, 0);
  lcd.print(">SP1:                ");
  lcd.setCursor(6, 0);
  lcd.print(sp1);

  lcd.setCursor(0, 1);
  lcd.print(" SP2:                ");
  lcd.setCursor(6, 1);
  lcd.print(sp2);
  
  lcd.setCursor(0, 2);
  lcd.print(" SP3:                ");
  lcd.setCursor(6, 3);
  lcd.print(sp3);
  
  lcd.setCursor(0, 3);
  lcd.print(" SP4:                ");
  lcd.setCursor(6, 3);
  lcd.print(sp4);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  if(digitalRead(XUONG) == 0){
    delay(300);
    i = i+1;
  }
  if(digitalRead(LEN) == 0){
    delay(300);
      if(i>=1){
    i = i-1;}
  }
  if(i > 6) i =0;
  Serial.println(i);
  hienthi(i);
}
void hienthi(int h){
  
  if(h == 0){
    if(digitalRead(RST)==0){
    sp1 = 0;
    EEPROM.write(1, 0);
  }
    if(digitalRead(tang) == 0){
    delay(300);
    sp1 = sp1+1;
    EEPROM.write(1, sp1);
  }
  if(digitalRead(giam) == 0){
    delay(300);
    
      if(sp1 >=1){
    sp1 = sp1-1;}
    EEPROM.write(1, sp1);
  }
  lcd.setCursor(0, 0);
  lcd.print(">SP1:                ");
  lcd.setCursor(6, 0);
  lcd.print(sp1);

  lcd.setCursor(0, 1);
  lcd.print(" SP2:                ");
  lcd.setCursor(6, 1);
  lcd.print(sp2);
  
  lcd.setCursor(0, 2);
  lcd.print(" SP3:                ");
  lcd.setCursor(6, 2);
  lcd.print(sp3);
  
  lcd.setCursor(0, 3);
  lcd.print(" SP4:                ");
  lcd.setCursor(6, 3);
  lcd.print(sp4);
  }

    if(h == 1){
      if(digitalRead(RST)==0){
    sp2= 0;
    EEPROM.write(2, 0);
    delay(5);
  }
    if(digitalRead(tang) == 0){
    delay(300);
    
    sp2 = sp2+1;
    EEPROM.write(2, sp2);
  }
  if(digitalRead(giam) == 0){
    delay(300);
    
      if(sp2 >=2){
    sp2 = sp2-1;}
    EEPROM.write(2, sp2);
  }
  lcd.setCursor(0, 0);
  lcd.print(" SP1:                ");
  lcd.setCursor(6, 0);
  lcd.print(sp1);

  lcd.setCursor(0, 1);
  lcd.print(">SP2:                ");
  lcd.setCursor(6, 1);
  lcd.print(sp2);
  
  lcd.setCursor(0, 2);
  lcd.print(" SP3:                ");
  lcd.setCursor(6, 2);
  lcd.print(sp3);
  
  lcd.setCursor(0, 3);
  lcd.print(" SP4:                ");
  lcd.setCursor(6, 3);
  lcd.print(sp4);
  }

    if(h == 2){
      if(digitalRead(RST)==0){
    sp3 = 0;
    EEPROM.write(3, 0);
    delay(5);
  }
    if(digitalRead(tang) == 0){
    delay(300);
    
    sp3 = sp3+1;
    EEPROM.write(3, sp3);
  }
  if(digitalRead(giam) == 0){
    delay(300);
    
      if(sp3 >=1){
    sp3 = sp3-1;}
    EEPROM.write(3, sp3);
  }
  lcd.setCursor(0, 0);
  lcd.print(" SP1:                ");
  lcd.setCursor(6, 0);
  lcd.print(sp1);

  lcd.setCursor(0, 1);
  lcd.print(" SP2:                ");
  lcd.setCursor(6, 1);
  lcd.print(sp2);
  
  lcd.setCursor(0, 2);
  lcd.print(">SP3:                ");
  lcd.setCursor(6, 2);
  lcd.print(sp3);
  
  lcd.setCursor(0, 3);
  lcd.print(" SP4:                ");
  lcd.setCursor(6, 3);
  lcd.print(sp4);
  }

    if(h == 3){
      if(digitalRead(RST)==0){
    sp4 = 0;
    EEPROM.write(4, 0);
    delay(5);
  }
    if(digitalRead(tang) == 0){
    delay(300);
    
    sp4 = sp4+1;
    EEPROM.write(4, sp4);
  }
  if(digitalRead(giam) == 0){
    delay(300);
    
      if(sp4 >=1){
    sp4 = sp4-1;}
    EEPROM.write(4, sp4);
  }
  lcd.setCursor(0, 0);
  lcd.print(" SP1:                ");
  lcd.setCursor(6, 0);
  lcd.print(sp1);

  lcd.setCursor(0, 1);
  lcd.print(" SP2:                ");
  lcd.setCursor(6, 1);
  lcd.print(sp2);
  
  lcd.setCursor(0, 2);
  lcd.print(" SP3:                ");
  lcd.setCursor(6, 2);
  lcd.print(sp3);
  
  lcd.setCursor(0, 3);
  lcd.print(">SP4:                ");
  lcd.setCursor(6, 3);
  lcd.print(sp4);
  }
 if(h == 4){
      if(digitalRead(RST)==0){
    sp5 = 0;
    EEPROM.write(5, 0);
    delay(5);
  }
    if(digitalRead(tang) == 0){
    delay(300);
    
    sp4 = sp4+1;
    EEPROM.write(4, sp4);
  }
  if(digitalRead(giam) == 0){
    delay(300);
    
      if(sp4 >=1){
    sp4 = sp4-1;}
    EEPROM.write(4, sp4);
  }
  lcd.setCursor(0, 0);
  lcd.print(" SP2:                ");
  lcd.setCursor(6, 0);
  lcd.print(sp2);

  lcd.setCursor(0, 1);
  lcd.print(" SP3:                ");
  lcd.setCursor(6, 1);
  lcd.print(sp3);
  
  lcd.setCursor(0, 2);
  lcd.print(" SP4:                ");
  lcd.setCursor(6, 2);
  lcd.print(sp4);
  
  lcd.setCursor(0, 3);
  lcd.print(">SP5:                ");
  lcd.setCursor(6, 3);
  lcd.print(sp5);
  }
    if(h == 5){
      if(digitalRead(RST)==0){
    sp6 = 0;
    EEPROM.write(6, 0);
    delay(5);
  }
    if(digitalRead(tang) == 0){
    delay(300);
    
    sp6 = sp6+1;
    EEPROM.write(6, sp6);
  }
  if(digitalRead(giam) == 0){
    delay(300);
      if(sp6 >=1){
    sp6 = sp6-1;}
    EEPROM.write(6, sp6);
  }
  lcd.setCursor(0, 0);
  lcd.print(" SP3:                ");
  lcd.setCursor(6, 0);
  lcd.print(sp3);
  
  lcd.setCursor(0, 1);
  lcd.print(" SP4:                ");
  lcd.setCursor(6, 1);
  lcd.print(sp4);

  lcd.setCursor(0, 2);
  lcd.print(" SP5:                ");
  lcd.setCursor(6, 2);
  lcd.print(sp5);


  lcd.setCursor(0, 3);
  lcd.print(">SP6:                ");
  lcd.setCursor(6, 3);
  lcd.print(sp6);
}
}

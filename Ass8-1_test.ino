#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

const int analogPin = 34;
int menuSelection = 1;
int sw = 18 ;
const int led[8] = {14, 16, 17, 26, 27, 23, 25, 4};
void setup() {
  pinMode(sw, INPUT_PULLUP);
  for (int i = 0; i < 8; i++)
  {
    pinMode (led[i], OUTPUT);
  }
  lcd.begin();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("Select Menu-Up");
}

void loop() {
  int vrValue = analogRead(analogPin);
  int switch1 = digitalRead(sw);

  menuSelection = map(vrValue, 0, 4095, 1, 3); // แปลงค่าจาก Vr เป็นเลือกเมนู
  switch (menuSelection) {
    case 1:
      lcd.setCursor(0, 1);
      lcd.print("1> Show Info ");
      if (!switch1) {
        {
          show_info();
          delay(500);
        }
      }
      break;
    case 2:
      lcd.setCursor(0, 1);
      lcd.print("2> Led Run   ");
      if (!switch1) {
        {
          show_LEDRUN();
          delay(500);
        }
      }
      break;
    case 3:
      lcd.setCursor(0, 1);
      lcd.print("3> Count-Up  ");
      if (!switch1) {
        {
          show_numcount();
          delay(500);
        }
      }

      break;
  }

  delay(100);
}
void show_info(void)
{
  for (int i = 0; i < 5; i++)
  {
    lcd.setCursor(0, 1);
    lcd.print("               ");
    delay(300);
    lcd.setCursor(4, 1);
    lcd.print(" Apisit");
    delay(300);
    lcd.setCursor(0, 1);
    lcd.print("               ");
    delay(300);
    lcd.setCursor(3, 1);
    lcd.print(" 64030322");
    delay(300);
  }
}
void show_LEDRUN(void) {
  int delay_time = 300;
  for (int i = 0; i < 1; i++)
  {
    digitalWrite (led[0], HIGH);
    digitalWrite (led[1], HIGH);
    digitalWrite (led[2], HIGH);
    digitalWrite (led[3], HIGH);
    digitalWrite (led[4], HIGH);
    digitalWrite (led[5], HIGH);
    digitalWrite (led[6], HIGH);
    digitalWrite (led[7], HIGH);
    delay (delay_time);

    digitalWrite (led[0], HIGH);
    digitalWrite (led[1], LOW);
    digitalWrite (led[2], LOW);
    digitalWrite (led[3], LOW);
    digitalWrite (led[4], LOW);
    digitalWrite (led[5], LOW);
    digitalWrite (led[6], LOW);
    digitalWrite (led[7], HIGH);
    delay (delay_time);

    digitalWrite (led[0], HIGH);
    digitalWrite (led[1], LOW);
    digitalWrite (led[2], HIGH);
    digitalWrite (led[3], LOW);
    digitalWrite (led[4], HIGH);
    digitalWrite (led[5], LOW);
    digitalWrite (led[6], HIGH);
    digitalWrite (led[7], LOW);
    delay (delay_time);

    digitalWrite (led[0], LOW);
    digitalWrite (led[1], HIGH);
    digitalWrite (led[2], HIGH);
    digitalWrite (led[3], HIGH);
    digitalWrite (led[4], HIGH);
    digitalWrite (led[5], HIGH);
    digitalWrite (led[6], HIGH);
    digitalWrite (led[7], LOW);
    delay (delay_time);

    digitalWrite (led[0], HIGH);
    digitalWrite (led[1], LOW);
    digitalWrite (led[2], LOW);
    digitalWrite (led[3], HIGH);
    digitalWrite (led[4], HIGH);
    digitalWrite (led[5], LOW);
    digitalWrite (led[6], LOW);
    digitalWrite (led[7], HIGH);
    delay (delay_time);

    digitalWrite (led[0], HIGH);
    digitalWrite (led[1], HIGH);
    digitalWrite (led[2], LOW);
    digitalWrite (led[3], LOW);
    digitalWrite (led[4], LOW);
    digitalWrite (led[5], LOW);
    digitalWrite (led[6], HIGH);
    digitalWrite (led[7], HIGH);
    delay (delay_time);

    digitalWrite (led[0], HIGH);
    digitalWrite (led[1], HIGH);
    digitalWrite (led[2], HIGH);
    digitalWrite (led[3], LOW);
    digitalWrite (led[4], LOW);
    digitalWrite (led[5], HIGH);
    digitalWrite (led[6], HIGH);
    digitalWrite (led[7], HIGH);
    delay (delay_time);

    digitalWrite (led[0], LOW);
    digitalWrite (led[1], LOW);
    digitalWrite (led[2], HIGH);
    digitalWrite (led[3], HIGH);
    digitalWrite (led[4], HIGH);
    digitalWrite (led[5], HIGH);
    digitalWrite (led[6], LOW);
    digitalWrite (led[7], HIGH); //8
    delay (delay_time);

    digitalWrite (led[0], LOW);
    digitalWrite (led[1], HIGH);
    digitalWrite (led[2], LOW);
    digitalWrite (led[3], HIGH);
    digitalWrite (led[4], LOW);
    digitalWrite (led[5], HIGH);
    digitalWrite (led[6], LOW);
    digitalWrite (led[7], HIGH);
    delay (delay_time);

    digitalWrite (led[0], LOW);
    digitalWrite (led[1], HIGH);
    digitalWrite (led[2], LOW);
    digitalWrite (led[3], LOW);
    digitalWrite (led[4], LOW);
    digitalWrite (led[5], HIGH);
    digitalWrite (led[6], LOW);
    digitalWrite (led[7], HIGH);
    delay (delay_time);

    digitalWrite (led[0], HIGH);
    digitalWrite (led[1], LOW);
    digitalWrite (led[2], LOW);
    digitalWrite (led[3], HIGH);
    digitalWrite (led[4], HIGH);
    digitalWrite (led[5], LOW);
    digitalWrite (led[6], LOW);
    digitalWrite (led[7], HIGH);
    delay (delay_time);

    digitalWrite (led[0], LOW);
    digitalWrite (led[1], HIGH);
    digitalWrite (led[2], LOW);
    digitalWrite (led[3], HIGH);
    digitalWrite (led[4], HIGH);
    digitalWrite (led[5], HIGH);
    digitalWrite (led[6], HIGH);
    digitalWrite (led[7], LOW);
    delay (delay_time);

    digitalWrite (led[0], HIGH);
    digitalWrite (led[1], LOW);
    digitalWrite (led[2], LOW);
    digitalWrite (led[3], HIGH);
    digitalWrite (led[4], HIGH);
    digitalWrite (led[5], LOW);
    digitalWrite (led[6], LOW);
    digitalWrite (led[7], HIGH);
    delay (delay_time);

    digitalWrite (led[0], HIGH);
    digitalWrite (led[1], LOW);
    digitalWrite (led[2], LOW);
    digitalWrite (led[3], LOW);
    digitalWrite (led[4], LOW);
    digitalWrite (led[5], LOW);
    digitalWrite (led[6], LOW);
    digitalWrite (led[7], HIGH);
    delay (delay_time);

    digitalWrite (led[0], LOW);
    digitalWrite (led[1], LOW);
    digitalWrite (led[2], LOW);
    digitalWrite (led[3], LOW);
    digitalWrite (led[4], LOW);
    digitalWrite (led[5], LOW);
    digitalWrite (led[6], LOW);
    digitalWrite (led[7], LOW);
    delay (delay_time);

    digitalWrite (led[0], LOW);
    digitalWrite (led[1], LOW);
    digitalWrite (led[2], HIGH);
    digitalWrite (led[3], HIGH);
    digitalWrite (led[4], HIGH);
    digitalWrite (led[5], HIGH);
    digitalWrite (led[6], LOW);
    digitalWrite (led[7], HIGH);
    delay (delay_time);       //16


    digitalWrite (led[0], HIGH);
    digitalWrite (led[1], HIGH);
    digitalWrite (led[2], HIGH);
    digitalWrite (led[3], HIGH);
    digitalWrite (led[4], HIGH);
    digitalWrite (led[5], HIGH);
    digitalWrite (led[6], HIGH);
    digitalWrite (led[7], HIGH);
    delay (delay_time);    //17


    digitalWrite (led[0], LOW); //ดับ
    digitalWrite (led[1], LOW);
    digitalWrite (led[2], LOW);
    digitalWrite (led[3], LOW);
    digitalWrite (led[4], LOW);
    digitalWrite (led[5], LOW);
    digitalWrite (led[6], LOW);
    digitalWrite (led[7], LOW);
    delay (delay_time);

    digitalWrite (led[0], HIGH);
    digitalWrite (led[1], HIGH);
    digitalWrite (led[2], HIGH);
    digitalWrite (led[3], HIGH);
    digitalWrite (led[4], HIGH);
    digitalWrite (led[5], HIGH);
    digitalWrite (led[6], HIGH);
    digitalWrite (led[7], HIGH);
    delay (delay_time);


    digitalWrite (led[0], LOW); //ดับ
    digitalWrite (led[1], LOW);
    digitalWrite (led[2], LOW);
    digitalWrite (led[3], LOW);
    digitalWrite (led[4], LOW);
    digitalWrite (led[5], LOW);
    digitalWrite (led[6], LOW);
    digitalWrite (led[7], LOW);
    delay (delay_time);

  }
}
void show_numcount(void) {
  lcd.setCursor(0, 1);
  lcd.print("Time :          ");
  for (int a = 0; a <= 23; a++) {
    lcd.setCursor(7, 1);
    lcd.print(a);
    delay(200);
  }
}

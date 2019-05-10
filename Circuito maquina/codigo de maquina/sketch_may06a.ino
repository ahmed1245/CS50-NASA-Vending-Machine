#include <Servo.h>
#include  <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
Servo servo1;
Servo servo2; 
Servo servo3;
Servo servo4;
int vel = 0;
int x;
void setup() 
 {
  lcd.begin(16, 2);
  lcd.home();
  lcd.print("     N A S A");
  // MOVER EL CURSOR A LA SEGUNDA LINEA (1) PRIMERA COLUMNA (0)
  lcd.setCursor ( 0, 1 );
  // IMPRIMIR OTRA CADENA EN ESTA POSICION
  lcd.print("Vending Machine");
  // ESPERAR UN SEGUNDO
  delay(1000);
  servo1.attach(7);
servo2.attach(8);
servo3.attach(9);
servo4.attach(10);
servo2.write(90);
servo3.write(90);
servo4.write(90);
servo1.write(90);
Serial.begin(9600);
x = 3;
}
 
void loop()
{
  int i;
 
  // DESPLAZAR LA PANTALLA A LA DERECHA 2 VECES
  for ( int i = 0; i < 3; i++ ) {
    lcd.scrollDisplayRight();
    delay (1000);
  }
    for ( int i = 0; i < 3; i++ ) {
    lcd.scrollDisplayLeft();
    delay (1000);
  }
  switch(x){
  
    case 1:
    servo2.write(90);
    servo3.write(90);
    servo4.write(90);
    servo1.write(26);
    delay (1040);
    lcd.clear();
    lcd.print("DESPACHANDO...");
    delay (1040);
    servo1.write(90);
    delay (1000);
    
    break;
    
    case 2:
    servo1.write(90);
    servo3.write(90);
    servo4.write(90);
    servo2.write(26);
    delay (1040);
    lcd.clear();
    lcd.print("DESPACHANDO...");
    delay (1040);
    servo2.write(90);
    delay (1000);
    break;
    
    case 3:
    servo2.write(90);
    servo1.write(90);
    servo4.write(90);
    servo3.write(26);
    delay (1040);
    lcd.clear();
    lcd.print("DESPACHANDO...");
    delay (1040);
    servo3.write(90);
    delay (1000);
    break;
    
    case 4:
    servo2.write(90);
    servo3.write(90);
    servo1.write(90);
    servo4.write(26);
    delay (1040);
    lcd.clear();
    lcd.print("Despachando...");
    delay (1040);
    servo4.write(90);
    delay (1000);
    break;
  }
  x=5;
}

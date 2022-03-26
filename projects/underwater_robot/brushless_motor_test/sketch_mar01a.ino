// подключение библиотеки
#include <Servo.h>
// создание объекта
Servo motor;
//Пин подключения мотора
int mot_pin = 4;

void setup()
{
  // инициализация мотора
  motor.attach(mot_pin);
}

void loop()
{
   // регулирование потенциометром
   int speed=map(analogRead(A2),1023,0,800,2300);
   motor.writeMicroseconds(speed);
   delay(20);
}

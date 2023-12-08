#include <Servo.h>

Servo myservo;  
int Angulo = 0;    
int VoltMusculo = analogRead(A0);
int Delay = 30;

void setup() {
  Serial.begin(9600);
  myservo.attach(9); 
  myservo.write(30); 
}

void loop() {
      Serial.println(VoltMusculo);
      if (VoltMusculo>=250 && Angulo<=150){
         myservo.write(Angulo);
         Angulo+=5;
        }
      if (VoltMusculo<=250 && Angulo>=30){
         myservo.write(Angulo);
         Angulo-=5;
        }
  delay(Delay);
  }
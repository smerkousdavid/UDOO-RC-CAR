#include <Servo.h>
int Direction = 12; //Set Direction of motor
int turnDir = 13;
int turnpower = 11;
int turnbrake = 8;
int Speed = 3; //Set speed of motor value of 0 to 255 analog
int Brake = 9; // Brake for motor usually unused so I always let sit 0
void setup(){
  Serial.begin(115200);
  pinMode(Direction, OUTPUT);
  pinMode(Speed, OUTPUT);
  pinMode(Brake, OUTPUT);
  pinMode(turnbrake, OUTPUT);
  pinMode(turnDir, OUTPUT);
  pinMode(turnpower, OUTPUT);
  digitalWrite(turnDir, LOW);
  digitalWrite(turnbrake, LOW);
  digitalWrite(Brake, LOW);
  analogWrite(Speed, 0);
  analogWrite(turnpower, 0);
  while(Serial.read() != '1'){
   delay(100); 
  }
}
void loop(){
 int a = Serial.read();
 if(a == '0'){
 digitalWrite(Direction, LOW);
 analogWrite(Speed, 0);
 digitalWrite(turnDir, HIGH);
 analogWrite(turnpower, 0);
 }if(a == '1'){
 digitalWrite(Direction, LOW);
 analogWrite(Speed, 75);
 }if(a == '2'){
 digitalWrite(Direction, LOW);
 analogWrite(Speed, 155);
 }if(a == '3'){
 digitalWrite(Direction, HIGH);
 analogWrite(Speed, 55);
 }if(a == '4'){
 digitalWrite(Direction, HIGH);
 analogWrite(Speed, 145);
 }if(a == '5'){
 digitalWrite(Direction, HIGH);
 analogWrite(Speed, 255);
 }if(a == '6'){
 digitalWrite(Direction, LOW);
 analogWrite(Speed, 255);
 }if(a == '7'){
 digitalWrite(turnDir, LOW);
 analogWrite(turnpower, 200);
 }if(a == '8'){
 digitalWrite(turnDir, HIGH);
 analogWrite(turnpower, 200);
 }
 delay(15);
}

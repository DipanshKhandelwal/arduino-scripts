int motorPin1 = 8;
int motorPin2 = 9;

int motorSpeed = 10;

void setup() {
pinMode(motorPin1, OUTPUT);
pinMode(motorPin2, OUTPUT);
}
void loop(){
ccw();
}
void ccw (){
digitalWrite(motorPin1, HIGH);
digitalWrite(motorPin2, LOW);
delay(motorSpeed);
digitalWrite(motorPin1, LOW);
digitalWrite(motorPin2, HIGH);
delay(motorSpeed);
}

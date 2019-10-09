/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int led1 = 9;
int led2 = 10;
int led3 = 11;
int bright_mode = 1;
int d = 0;
boolean up = true;
// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led1, OUTPUT);     
  pinMode(led2, OUTPUT); 
  pinMode(led3, OUTPUT); 
}

// the loop routine runs over and over again forever:
void loop() {
  if(bright_mode == 10){
    up = false;
  }
  if(bright_mode == 0){
  up = true;
  }
  analogWrite(led1, bright_mode * 5);   // turn the LED on (HIGH is the voltage level)
  //delay(50);               // wait for a second
  //analogWrite(led1, 30 - bright_mode * 5);    // turn the LED off by making the voltage LOW
  delay(d);    // wait for a second
  analogWrite(led2, bright_mode * 5 * 2);   // turn the LED on (HIGH is the voltage level)
  delay(d);               // wait for a second
  //analogWrite(led2, 30 - bright_mode * 5);    // turn the LED off by making the voltage LOW
  analogWrite(led3, bright_mode * 5);
  //delay(50);
   // turn the LED on (HIGH is the voltage level)
  delay(d);               // wait for a second
   // turn the LED off by making the voltage LOW
  delay(d);
  //analogWrite(led3, 30 - bright_mode * 5); 
  if(up){
    bright_mode += 1;
  }
   else{
     bright_mode -= 1;
   }
}

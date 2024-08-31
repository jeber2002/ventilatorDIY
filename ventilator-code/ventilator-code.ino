#include <Servo.h>
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
// Set the LCD address to 0x27 for a 16 chars and 2 line display
LiquidCrystal_I2C lcd(0x27, 16, 2);
Servo myservo;  // create servo object to control a servo
int potpin = 0;  // analog pin used to connect the potentiometer
int val;    // variable to read the value from the analog pin
float pos = 0;
void setup(){
lcd.begin(16,2);

  // Turn on the blacklight and print a message.
  lcd.backlight();
  myservo.attach(9);// attaches the servo on pin 9 to the servo object
   Serial.begin(9600);
   lcd.setCursor(0,0);           //sets the cursor at row 0 column 0
  lcd.print("Emergency Vent"); // prints 16x2 LCD MODULE
  lcd.setCursor(2,1);           //sets the cursor at row 1 column 2
lcd.print("JABER & DHIFEF");
delay(4000);
}

void loop() {
  val = analogRead(potpin);            // reads the value of the potentiometer (value between 0 and 1023)
  val = map(val, 0, 1023, 0, 180);     // scale it to use it with the servo (value between 0 and 180)
  myservo.write(val); // sets the servo position according to the scaled value
  Serial.println(val);
  delay(15); // waits for the servo to get there

 
if (val <=30 ) {
    lcd.setCursor(0,0);           //sets the cursor at row 0 column 0
  lcd.print("Spd:Fast Ang:100  "); // prints 16x2 LCD MODULE
  lcd.setCursor(0,1);           //sets the cursor at row 1 column 2
lcd.print("Breath cycle 4sec ");
   for (pos = 0; pos <= 100; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);
     }
  for (pos = 100; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);// waits 15ms for the servo to reach the position

   
  }}
  
  else if (val >=31 && val<=60  ) {
    lcd.setCursor(0,0);           //sets the cursor at row 0 column 0
  lcd.print("Spd:Fast Ang:110   "); // prints 16x2 LCD MODULE
  lcd.setCursor(0,1);           //sets the cursor at row 1 column 2
lcd.print("Breath cycle 4.43sec ");
   for (pos = 0; pos <= 110; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);
     }
  for (pos = 110; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);// waits 15ms for the servo to reach the position
         
  }}

 else if (val >=61 && val<=90  ) {
   lcd.setCursor(0,0);           //sets the cursor at row 0 column 0
  lcd.print("Spd:Fast Ang:120  "); // prints 16x2 LCD MODULE
  lcd.setCursor(0,1);           //sets the cursor at row 1 column 2
lcd.print("Breath cycle 3.53sec ");
   for (pos = 0; pos <= 120; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);
     }
  for (pos = 120; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);   
   
  }} 

 else if (val >=91 && val<=120  ) {
   lcd.setCursor(0,0);           //sets the cursor at row 0 column 0
  lcd.print("Spd:Slow Ang:100  "); // prints 16x2 LCD MODULE
  lcd.setCursor(0,1);           //sets the cursor at row 1 column 2
lcd.print("Breath cycle 5 sec ");
   for (pos = 0; pos <= 100; pos += 0.6) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);
     }
  for (pos = 100; pos >= 0; pos -= 0.6) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);  
  /// / waits 15ms for the servo to reach the position
  }} 

 else if (val >=121 && val<=150  ) {
  lcd.setCursor(0,0);           //sets the cursor at row 0 column 0
  lcd.print("Spd:Slow Ang:110  "); // prints 16x2 LCD MODULE
  lcd.setCursor(0,1);           //sets the cursor at row 1 column 2
lcd.print("Breath cycle 5.5sec ");
   for (pos = 0; pos <= 110; pos += 0.6) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);
     }
  for (pos = 110; pos >= 0; pos -= 0.6) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15); 
    // waits 15ms for the servo to reach the position
  }}
   
   else if (val >=151 && val<=180  ) {

    lcd.setCursor(0,0);           //sets the cursor at row 0 column 0
  lcd.print("Spd:Slow Ang:120  "); // prints 16x2 LCD MODULE
  lcd.setCursor(0,1);           //sets the cursor at row 1 column 2
lcd.print("Breath cycle 6 sec ");
    
   for (pos = 0; pos <= 120; pos += 0.6) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);
     }
  for (pos = 120; pos >= 0; pos -= 0.6) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);
    // waits 15ms for the servo to reach the position
  }} 

}

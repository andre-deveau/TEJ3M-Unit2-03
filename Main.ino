/*
  Created by: Andre Deveau
  Created on: Sept 2023
  
  Turns LED on and off after one second repeatedly.
*/

int pin5 = 5;

void setup()
{
  pinMode(pin5, OUTPUT);
}

void loop()
{
  digitalWrite(pin5, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(pin5, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}
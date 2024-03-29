/* ArduSensor Arcade Read

Reads the ArduSensor Arcade, and prints if it is pressed or not on the Serial
monitor

Qtechknow kits required:
  ArduSensor Arcade

made on 12 July 12
created by Quin
 */

int ArduSensorValue;   // variable to store the value of the ArduSensor Arcade

void setup() {
  Serial.begin(9600);  // start Serial communication at 9600 baud
}

void loop() {
  // assign the variable to the value of the ArduSensor Arcade
  ArduSensorValue=analogRead(0); 
  
  if(ArduSensorValue == 1023) {
    Serial.println("Pressed");  // print "Pressed" if the value was high
  }  
  if(ArduSensorValue == 0) {
    Serial.println("Not Pressed");  // print "Not Pressed" if the value was low
  }
  delay(100);
}

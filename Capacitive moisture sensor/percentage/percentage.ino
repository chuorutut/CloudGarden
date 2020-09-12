const int dry = 3583; // value for dry sensor
const int wet = 1680; // value for wet sensor

void setup()
{ 
  Serial.begin(9600);
}

void loop()
{
  int sensorVal = analogRead(15);

  // Sensor has a range of 1680 to 3583
  // We want to translate this to a scale or 0% to 100%
  // More info: https://www.arduino.cc/reference/en/language/functions/math/map/
  int percentageHumididy = map(sensorVal, wet, dry, 100, 0); 

  Serial.print(percentageHumididy);
  Serial.println("%");
  
  delay(100);
}

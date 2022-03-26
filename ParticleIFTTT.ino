int lightValue;
int photoresistor = A0;

void setup() {
    
  Particle.variable("lightValue", lightValue);
  Particle.variable("photoresistor", photoresistor);
 
    pinMode(photoresistor,INPUT);
    Serial.begin(9600);
   
}

void loop() {
    
    lightValue = analogRead(photoresistor);
    Serial.println(lightValue);
    Particle.publish("Light_Sensor",String(lightValue),30,PRIVATE);
    delay(10000);

}
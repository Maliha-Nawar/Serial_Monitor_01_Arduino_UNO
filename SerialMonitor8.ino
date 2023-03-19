       //8
       //Name: Maliha Nawar; ID:17.01.05.131
void setup() {
Serial.begin(9600);//initializing serial monitor
}
void loop() {
 
float c=35;
float f=c*9/5+32;//relationship between Celsius, Farenheit scale
Serial.println(f,3);delay(1000);
}

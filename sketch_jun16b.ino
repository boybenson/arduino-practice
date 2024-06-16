const int red_light = 7;
const int yellow_light = 6;
const int green_light = 5;

void setup() {
  pinMode(red_light, OUTPUT);
  pinMode(yellow_light, OUTPUT);
  pinMode(green_light, OUTPUT);
}

void loop() {
  digitalWrite(red_light, HIGH);
  digitalWrite(yellow_light, LOW);
  digitalWrite(green_light, LOW);
  delay(1000); 

 
  digitalWrite(red_light, LOW);
  digitalWrite(yellow_light, HIGH);
  digitalWrite(green_light, LOW);
  delay(1000); 

  digitalWrite(red_light, LOW);
  digitalWrite(yellow_light, LOW);
  digitalWrite(green_light, HIGH);
  delay(1000); 
}

int ledPin = 12;
int brightness = 0;
int fade = 4;
int buttonPin = 7;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);

}

void loop() {
  
  if(digitalRead(buttonPin) == HIGH){
    analogWrite(ledPin, brightness);
    brightness += fade;
  
    if(brightness <= 0 || brightness >= 255){
      fade = -fade;
    }
    delay(20);
  }
  else if(digitalRead(buttonPin) == LOW){
    digitalWrite(ledPin, HIGH);
    delay(1000);
    digitalWrite(ledPin, LOW);
    delay(1000);
  }

}

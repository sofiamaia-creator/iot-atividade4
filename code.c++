// C++ code
//

int led = 6;
int sensor = 7;

void setup()
{
  pinMode(led, OUTPUT);
  pinMode(sensor, INPUT);
}

void loop(){
  if (digitalRead(sensor) == HIGH) {
  	digitalWrite(led, HIGH);
    delay(5000);
  }else {
  	digitalWrite(led, LOW);
    delay(5000);
  }
}

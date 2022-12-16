// constants won't change
const int LIGHT_SENSOR_PIN = A0; // Arduino pin connected to light sensor's  pin
const int LED_PIN          = 3;  // Arduino pin connected to LED's pin
const int ANALOG_THRESHOLD_1 = 350;
const int ANALOG_THRESHOLD_2 = 400;
const int ANALOG_THRESHOLD_3 = 450;
const int ANALOG_THRESHOLD_4 = 500;
//const int ANALOG_THRESHOLD_1 = 10;
//const int ANALOG_THRESHOLD_2 = 25;
//const int ANALOG_THRESHOLD_3 = 55;
//const int ANALOG_THRESHOLD_4 = 100;

// variables will change:
int analogValue;

void setup() {
  pinMode(LED_PIN, OUTPUT); // set arduino pin to output modeia
  Serial.begin(9600);
}

void loop() {
  analogValue = analogRead(LIGHT_SENSOR_PIN); // read the input on analog pin

  Serial.println(analogValue);

  if(analogValue < ANALOG_THRESHOLD_1)
    digitalWrite(LED_PIN, 20); 
  else if (analogValue < ANALOG_THRESHOLD_2)
    digitalWrite(LED_PIN, 50);
  else if (analogValue < ANALOG_THRESHOLD_3)
    digitalWrite(LED_PIN, 110);
  else if (analogValue < ANALOG_THRESHOLD_4)
    digitalWrite(LED_PIN, 175);
  else
    digitalWrite(LED_PIN, 225);  // turn off LED
}
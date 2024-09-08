
// NeuralMesh Solution

const int led = 13;
const int sen = 8;
int detect;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(sen, INPUT);
  Serial.begin (9600);
}

void loop() {
  detect = digitalRead(sen);

  if (detect == 0) {
    digitalWrite(led, HIGH);
  } else {
    digitalWrite(led, LOW);
  }
}
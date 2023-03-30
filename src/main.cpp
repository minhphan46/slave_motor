
#include <AccelStepper.h>
#include <Wire.h>

int dirPin = 5;
int stepPin = 2;
int en = 8;
char receiveData = 'n';
int count = 0;

AccelStepper myStepper(1, stepPin, dirPin, en);

void turnLeft();
void turnRight();

void receiveEvent(int howMany) {
  char c = Wire.read();
  receiveData = c;
  Serial.println(receiveData);
}

void requestEvent() {
  Wire.write('d');
}

void setup() {
  // put your setup code here, to run once:
  Wire.begin(2);
  Serial.begin(115200);
  myStepper.setMaxSpeed(1000);
  pinMode(en, HIGH);
  pinMode(stepPin, OUTPUT);
  pinMode(dirPin, OUTPUT);
  myStepper.setCurrentPosition(0);
  Wire.onReceive(receiveEvent);
  Wire.onRequest(requestEvent);
  // Wire.onReceive(receiveEvent);
  // Wire.onRequest(requestEvent);
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(100);
  if (receiveData == 'l') {
    turnLeft();
    Serial.println("l");
  } else if (receiveData == 'r') {
    turnRight();
    Serial.println("l");
  } else {
    Serial.println("hehehehe");
  }
}

void turnLeft() {
  myStepper.setCurrentPosition(0);
  while (myStepper.currentPosition() != -68) {
    myStepper.setSpeed(-500);
    myStepper.runSpeed();
  }
  delay(1500);
  myStepper.setCurrentPosition(0);
  while (myStepper.currentPosition() != 68) {
    myStepper.setSpeed(500);
    myStepper.runSpeed();
  }
  // Serial.write('d');
  receiveData == 'n';
  delay(1500);
}

void turnRight() {
  myStepper.setCurrentPosition(0);
  while (myStepper.currentPosition() != 68) {
    myStepper.setSpeed(500);
    myStepper.runSpeed();
  }
  delay(1500);
  myStepper.setCurrentPosition(0);
  while (myStepper.currentPosition() != -68) {
    myStepper.setSpeed(-500);
    myStepper.runSpeed();
  }
  // Serial.write('d');
  receiveData == 'n';
  delay(1500);
}
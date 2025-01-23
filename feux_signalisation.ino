// Decommentez toutes les lignes commentées pour un feu de signalisation double voies

const int ledR1 = 2;
const int ledJ1 = 3;
const int ledV1 = 4;
// const int ledR2 = 7;
// const int ledJ2 = 6;
// const int ledV2 = 5;
void setup()
{
  pinMode(ledR1,OUTPUT);
  pinMode(ledJ1,OUTPUT);
  pinMode(ledV1,OUTPUT);
  // pinMode(ledR2,OUTPUT);
  // pinMode(ledJ2,OUTPUT);
  // pinMode(ledV2,OUTPUT);
  }

 void loop(){
  digitalWrite(ledR1, HIGH);
  digitalWrite(ledJ1, LOW);
  digitalWrite(ledV1, LOW);
  // digitalWrite(ledR2, LOW);
  // digitalWrite(ledJ2, LOW);
  // digitalWrite(ledV2, HIGH);
  delay(1000);
  digitalWrite(ledR1, LOW);
  digitalWrite(ledJ1, HIGH);
  digitalWrite(ledV1, LOW);
  // digitalWrite(ledR2, LOW);
  // digitalWrite(ledJ2, HIGH);
  // digitalWrite(ledV2, LOW);
  delay(1000);
  digitalWrite(ledR1, LOW);
  digitalWrite(ledJ1, LOW);
  digitalWrite(ledV1, HIGH);
  // digitalWrite(ledR2, HIGH);
  // digitalWrite(ledJ2, LOW);
  // digitalWrite(ledV2, LOW);
  delay(1000);
  digitalWrite(ledR1, LOW);
  digitalWrite(ledJ1, HIGH);
  digitalWrite(ledV1, LOW);
  // digitalWrite(ledR2, LOW);
  // digitalWrite(ledJ2, HIGH);
  // digitalWrite(ledV2, LOW);
  delay(1000);
  }
         

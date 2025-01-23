// Decommentez toutes les lignes commentées pour un feu de signalisation double voies

// Declaration des leds sur les différentes broches de la carte arduino
const int ledR1 = 2;
const int ledJ1 = 3;
const int ledV1 = 4;
// const int ledR2 = 7;
// const int ledJ2 = 6;
// const int ledV2 = 5;
void setup()
{
  // Definition des ces leds commes des sorties sur la carte arduino
  pinMode(ledR1,OUTPUT);
  pinMode(ledJ1,OUTPUT);
  pinMode(ledV1,OUTPUT);
  // pinMode(ledR2,OUTPUT);
  // pinMode(ledJ2,OUTPUT);
  // pinMode(ledV2,OUTPUT);
  }

  // delay(1000) represente un temps d'attente d'une seconde; 1000 msec = 1sec

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
         

int Sensor = 13; //sensor no pino 13
int Motor = 8;   //motor no pino 3
int Nosafer = 5; //Luz Nosafer
int Setup = 6;   //Luz Setup
int Safer = 7;  //Luz Safer
byte Estado;  //guardo o valor 0 ou 1 (HIGH ou LOW)

int luz1 = 9;
int luz2 = 10;
int luz3 = 11;
int luz4 = 12;
int luz5 = 4;



void setup(){
  pinMode(Sensor,INPUT);
  pinMode(Motor, OUTPUT);
  digitalWrite(Motor,HIGH);
  delay (10000);}

void loop(){


  switch (digitalRead(Sensor)){
    int estado = 1;
    do {
        delay(10);          // wait for sensors to stabilize
        estado = sensor;  // check the sensors
}   while (x < 100);

    for(Estado = 1; Estado < 6; Estado++) {

    case 0: {
      digitalWrite(Motor,HIGH);
      digitalWrite(Nosafer,LOW);
      digitalWrite(Safer,HIGH);
      digitalWrite(Setup,LOW);

      digitalWrite(luz1,LOW);
      digitalWrite(luz2,LOW);
      digitalWrite(luz3,LOW);
      digitalWrite(luz4,LOW);
      digitalWrite(luz5,LOW);
      Estado = 1;}

    break;

    case 1: {
      digitalWrite(Motor,LOW);
      digitalWrite(Nosafer,HIGH);
      digitalWrite(Safer,LOW);
      digitalWrite(Setup,LOW);}


    if (Estado == 1){ // 1� TENTATIVA
      digitalWrite(luz1,HIGH);
      delay (15000);
      digitalWrite(Motor,HIGH);
      delay (5000);}

    else if (Estado == 2){ // 2� TENTATIVA
      digitalWrite(luz2,HIGH);
      delay (3000);
      digitalWrite(Motor,HIGH);
      delay (5000);}

    else if (Estado == 3){ // 3� TENTATIVA
      digitalWrite(luz3,HIGH);
      delay (10000);
      digitalWrite(Motor,HIGH);
      delay (5000);}

    else if (Estado == 4){ // 4� TENTATIVA
      digitalWrite(luz4,HIGH);
      delay (10000);
      digitalWrite(Motor,HIGH);
      delay (5000);}


    else if (Estado == 5){ // 5� TENTATIVA
      digitalWrite(luz5,HIGH);
      delay (5000);
      digitalWrite(Motor,HIGH);
      delay (12000);}

    else {
      digitalWrite(Motor,LOW);
      digitalWrite(Nosafer,LOW);
      digitalWrite(Setup,LOW);
      delay (700);
      digitalWrite(Setup,HIGH);
      delay (700);
      }

    }
  }

}

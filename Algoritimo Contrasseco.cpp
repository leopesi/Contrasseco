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

  //Fluxo dágua normal
    case 0:
      digitalWrite(Motor,HIGH);
      digitalWrite(Nosafer,LOW);
      digitalWrite(Safer,HIGH);
      digitalWrite(Setup,LOW);

      digitalWrite(luz1,LOW);
      digitalWrite(luz2,LOW);
      digitalWrite(luz3,LOW);
      digitalWrite(luz4,LOW);
      digitalWrite(luz5,LOW);
      break;

  //Fluxo dágua interrompido
    case 1:


        for(Estado = 1; Estado >= 1; Estado++) {

            digitalWrite(Motor,LOW);
            digitalWrite(Nosafer,HIGH);
            digitalWrite(Safer,LOW);
            digitalWrite(Setup,LOW);

          // TENTATIVA 1
            if ( (Estado == 1) && (digitalRead(Sensor) == 1) ) { 
                digitalWrite(luz1,HIGH);
                delay (10000);
                digitalWrite(Motor,HIGH);
                delay (5000); }
          
          // TENTATIVA 2
            else if ( (Estado == 2) && (digitalRead(Sensor) == 1) ) { 
                digitalWrite(luz2,HIGH);
                delay (3000);
                digitalWrite(Motor,HIGH);
                delay (5000); }
          
          // TENTATIVA 3
            else if ( (Estado == 3) && (digitalRead(Sensor) == 1) ) { 
                digitalWrite(luz3,HIGH);
                delay (10000);
                digitalWrite(Motor,HIGH);
                delay (5000); }
          
          // TENTATIVA 4
            else if ( (Estado == 4) && (digitalRead(Sensor) == 1) ) { 
                digitalWrite(luz4,HIGH);
                delay (10000);
                digitalWrite(Motor,HIGH);
                delay (5000); }
          
			    // TENTATIVA 5
            else if ( (Estado == 5) && (digitalRead(Sensor) == 1) ) { 
                digitalWrite(luz5,HIGH);
                delay (5000);
                digitalWrite(Motor,HIGH);
                delay (12000); }
          
			// Luz Setup 
            else if ( (Estado > 5) && (digitalRead(Sensor) == 1) ){
                digitalWrite(Motor,LOW);
                digitalWrite(Nosafer,LOW);
                digitalWrite(Setup,LOW);
                delay (900);
                digitalWrite(Setup,HIGH);
                delay (900);}
          }     
  }
}
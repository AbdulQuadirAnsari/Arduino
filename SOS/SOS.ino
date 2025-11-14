
int pinNumber = 13;


void setup() {
  // put your setup code here, to run once:
pinMode(pinNumber, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  dit();
  dit();
  dit();

  daah();
  daah();
  daah();

  dit();
  dit();
  dit();

  delay(5000);
}

void dit(){
  int ditOn = 500;
  int ditOff = 500;

  digitalWrite(pinNumber, HIGH);
  delay(ditOn);
  digitalWrite(pinNumber,LOW);
  delay(ditOff);
}

void daah(){
  
  int daahOn = 2000;
  int daahOff = 500;

  digitalWrite(pinNumber, HIGH);
  delay(daahOn);
  digitalWrite(pinNumber,LOW);
  delay(daahOff);
}

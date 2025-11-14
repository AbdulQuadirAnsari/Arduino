int pin0 = 2, pin1 = 3, pin2 = 4, pin3 = 5;
int digForDisplay[4]= {0,0,0,0};

void setup() {
  // put your setup code here, to run once:
  pinMode(pin0, OUTPUT);
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
  pinMode(pin3, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  for(int i=1;i<=15;i++){
    calculateDigits(i);
    displayOn(digForDisplay[0],digForDisplay[1],digForDisplay[2],digForDisplay[3]);
    delay(2000);
    displayOff();
    delay(2000);
    setDigForDisplayToZero();
  }
    
}
void displayOn(int dig0, int dig1, int dig2, int dig3){

  digitalWrite(pin0, dig0);
  digitalWrite(pin1, dig1);
  digitalWrite(pin2, dig2);
  digitalWrite(pin3, dig3);
}

void displayOff(){

  digitalWrite(pin0, LOW);
  digitalWrite(pin1, LOW);
  digitalWrite(pin2, LOW);
  digitalWrite(pin3, LOW);
}

void setDigForDisplayToZero(){
  digForDisplay[0]= 0;
  digForDisplay[1]= 0;
  digForDisplay[2]= 0;
  digForDisplay[3]= 0;
}

void calculateDigits(int num){
  int quotient= num;
  int remainder;
  
  for(int i=0;i<=3;i++){
    
    if(quotient>=2){
      remainder = quotient%2;
      quotient = quotient/2;
      digForDisplay[i] = remainder;
    }else{
      digForDisplay[i] = quotient;
      break;
    }
  }

}
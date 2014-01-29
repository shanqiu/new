
const int lightPin=3;
int value;
void setup(){
   pinMode(9, OUTPUT);
   pinMode(10, OUTPUT); 
   pinMode(11, OUTPUT);
    pinMode(12, OUTPUT);
    //pinMode(lightPin,INPUT);
   // digitalWrite(2,);
   Serial.begin(9600);
}

void loop(){
  //BACK
  value=analogRead(lightPin);
  Serial.println(value);
  if(value>600){
  //RIGHT
  digitalWrite(9, LOW);
  //BACK
  digitalWrite(10,LOW);
  //LEFT
  digitalWrite(11, HIGH);
  digitalWrite(12,LOW);
  }else{
    //RIGHT
  digitalWrite(9, HIGH);
  //BACK
  digitalWrite(10,LOW);
  //LEFT
  digitalWrite(11, LOW);
  digitalWrite(12,LOW);
  }

 delay(100);
}

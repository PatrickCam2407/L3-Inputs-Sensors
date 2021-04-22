

void setup(){
  pinMode(A0 , INPUT);
  pinMode(10, OUTPUT);
  Serial.begin(9600);
  

}
void loop()
{
  int var = analogRead(A0);
  Serial.println(var);
  if(var < 20){
    digitalWrite(10,HIGH);
  }else{
    digitalWrite(10,LOW);
  }
  
  
  
  
}

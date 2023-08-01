int reading=0 ;

void setup() {
  for(int i =2;i<=10;i++){pinMode(i,OUTPUT);}
  pinMode(2,INPUT);
  Serial.begin(9600);
}
void loop() {
  
  Serial.println(reading);
  
  if (Serial.available() > 0){reading = Serial.read();}
  
  switch(reading){
  case 48:   
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);  //0
  digitalWrite(8, HIGH); 
  digitalWrite(9, HIGH);
  digitalWrite(10, LOW); break;
case 49:
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);   //1
  digitalWrite(8, LOW); 
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);break;
case 50:
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);  //2
  digitalWrite(8, HIGH); 
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);break;
case 51:
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);  //3 
  digitalWrite(8, LOW); 
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);break;
case 52:
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);   //4
  digitalWrite(8, LOW); 
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);break;
case 53:
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);  //5
  digitalWrite(8, LOW); 
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);break;
case 54:
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);  //6
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH); 
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);break;
case 55:
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);  //7
  digitalWrite(8, LOW); 
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);break;
case 56:
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);  //8
  digitalWrite(8, HIGH); 
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);break;
case 57:
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);  //9
  digitalWrite(8, LOW); 
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);break;

  }
      
}
   
    

int distance;
long duration;

void setup()
{ pinMode(2, INPUT);
  pinMode(3, OUTPUT);
  pinMode(A0, INPUT);
  pinMode(4, OUTPUT);
  Serial.begin(9600);
}

void loop()
{ int celsius = 0;
  celsius = map(((analogRead(A0) - 20) * 3.04), 0, 1023, -40, 125);
  if(celsius>40)
   digitalWrite(4, HIGH);
   delay(1000);
   digitalWrite(4, LOW);
  
  digitalWrite(3, LOW);
  delayMicroseconds(2);
  digitalWrite(3, HIGH);
  delayMicroseconds(10);
  digitalWrite(3, LOW);
  duration = pulseIn(2, HIGH);
  distance = duration * 0.034 / 2;
 
  if(distance>100) 
   digitalWrite(4, HIGH);
   delay(1000);
   digitalWrite(4, LOW);    
  
 delay(1000);
}

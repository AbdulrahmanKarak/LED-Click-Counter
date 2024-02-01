int button = 1;
int ledred = 2;
int ledgreen = 3;
int ledyellow = 4;
int Reading =  0;
int counter = 0;
void setup()
{
  pinMode(button,INPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop()
{
  Reading = digitalRead(button);
  if(Reading == HIGH )
   {
    counter++;
    if(counter== 1)
    {
      digitalWrite(2,HIGH);
    }
    else if (counter== 2)
    {
      digitalWrite(2,HIGH);
      digitalWrite(3,HIGH);
    }
    else if (counter== 3)
    {
      digitalWrite(2,HIGH);
      digitalWrite(3,HIGH);
      digitalWrite(4,HIGH);
    }
    else
    {
      digitalWrite(2,LOW);
      digitalWrite(3,LOW);
      digitalWrite(4,LOW);
      counter =0;
    }
     delay(350);
  }
    
    
      
}
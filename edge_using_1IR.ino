int e=8;
int l1=13;
int l2=12;
int r1=11;
int r2=10;

void setup()
{
    pinMode(e, INPUT);
    pinMode(l1, OUTPUT);
    pinMode(l2, OUTPUT);
    pinMode(r1, OUTPUT);
    pinMode(r2, OUTPUT);
}

void loop(){
    if(digitalRead(e) == LOW){
      forward();
    }
    else{
      back();
      delay(3000);
      left();
      delay(3000);
    }
}

void forward()
{
    digitalWrite(l1,HIGH);
    digitalWrite(l2,LOW);
    digitalWrite(r1,HIGH);
    digitalWrite(r2,LOW);
}

void left()
{
    digitalWrite(l1,LOW);
    digitalWrite(l2,HIGH);
    digitalWrite(r1,HIGH);
    digitalWrite(r2,LOW);
}

void right()
{
    digitalWrite(l1,HIGH);
    digitalWrite(l2,LOW);
    digitalWrite(r1,LOW);
    digitalWrite(r2,HIGH);
}

void back()
{
    digitalWrite(l1,LOW);
    digitalWrite(l2,HIGH);
    digitalWrite(r1,LOW);
    digitalWrite(r2,HIGH);;
}

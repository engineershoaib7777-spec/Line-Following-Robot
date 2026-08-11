int in1=7;
int in2=6;
int in3=5;
int in4=4;
int ena=9;
int enb=3;
int ir1=2;
int ir2=11;
void setup()
{
pinMode(ena,OUTPUT);
pinMode(enb,OUTPUT);
pinMode(in1,OUTPUT);
pinMode(in2,OUTPUT);
pinMode(in3,OUTPUT);
pinMode(in4,OUTPUT);
pinMode(ir1,INPUT);
pinMode(ir2,INPUT);
Serial.begin(9600);
}
void forward()
{
digitalWrite(in1,HIGH);
digitalWrite(in2,LOW);
digitalWrite(in3,LOW);
digitalWrite(in4,HIGH);
analogWrite(ena,180);
analogWrite(enb,180);
}
void right()
{
digitalWrite(in1,HIGH);
digitalWrite(in2,LOW);
digitalWrite(in3,LOW);
digitalWrite(in4,HIGH);
analogWrite(ena,120);
analogWrite(enb,180);
}
void left()
{
digitalWrite(in1,HIGH);
digitalWrite(in2,LOW);
digitalWrite(in3,LOW);
digitalWrite(in4,HIGH);
analogWrite(ena,180);
analogWrite(enb,120);
}
void stop()
{
digitalWrite(in1,LOW);
digitalWrite(in2,LOW);
digitalWrite(in3,LOW);
digitalWrite(in4,LOW);
analogWrite(ena,0);
analogWrite(enb,0);
}

void loop()
{
int i1=digitalRead(ir1);
int i2=digitalRead(ir2);
if(i1==1&&i2==1)
{
forward();
Serial.println("forward");
}
else if(i1==LOW&&i2==HIGH)
{
right();
Serial.println("right");
}
else if(i1==HIGH && i2==LOW)
{
left();
Serial.println("left");
}
else if(i1==0&&i2==0){
stop();
Serial.println("stop");
}
}
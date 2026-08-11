int in1=7;
int in2=6
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
}
void forward()
{
digitalWrite(in1,HIGH);
digitalWrite(in2,LOW);
digitalWrite(in3,LOW);
digitalWrite(in4,HIGH);
digitalWrite(ena,180);
digitalWrite(enb,180);
}
void right()
{
digitalWrite(in1,HIGH);
digitalWrite(in2,LOW);
digitalWrite(in3,LOW);
digitalWrite(in4,HIGH);
digitalWrite(ena,60);
digitalWrite(enb,180);
}
void left()
{
digitalWrite(in1,HIGH);
digitalWrite(in2,LOW);
digitalWrite(in3,LOW);
digitalWrite(in4,HIGH);
digitalWrite(ena,180);
digitalWrite(enb,60);
}
void stop()
{
digitalWrite(in1,HIGH);
digitalWrite(in2,LOW);
digitalWrite(in3,LOW);
digitalWrite(in4,HIGH);
digitalWrite(ena,0);
digitalWrite(enb,0);
}

void loop()
{
if(ir1==1&&ir2==1)
{
forward();
}
else if(ir1==1&&ir2==0)
{
left();
}
else if(ir2=0 && ir1=1)
{
right();
}
else
stop();

}
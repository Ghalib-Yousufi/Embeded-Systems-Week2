//www.elegoo.com
//2016.12.08

int buzzer = 12;//the pin of the active buzzer
void setup()
{
 pinMode(buzzer,OUTPUT);//initialize the buzzer pin as an output
}
void loop()
{
 unsigned char i;
 while(1)
 {
//  digitalWrite(buzzer,LOW);
//   //output an frequency
   for(i=0;i<500;i++)
   {
    digitalWrite(buzzer,LOW);
    delay(1000);//wait for 1ms
    digitalWrite(buzzer,LOW);
    delay(1000);//wait for 1ms
    }
//    //output another frequency
//     for(i=0;i<100;i++)
//      {
//        digitalWrite(buzzer,HIGH);
//        delay(2);//wait for 2ms
//        digitalWrite(buzzer,LOW);
//        delay(2);//wait for 2ms
//      }
  }
} 

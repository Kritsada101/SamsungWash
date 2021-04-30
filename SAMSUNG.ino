

int val11 ;
float val2 = 0;


int r1 = 7; // ควบคุม Relay ตัวที่ 1 ต่อขา 7
int r2 = 6; // ควบคุม Relay ตัวที่ 2 ต่อขา 6
int r3 = 5; // ควบคุม Relay ตัวที่ 3 ต่อขา 5
int r4 = 4; // ควบคุม Relay ตัวที่ 4 ต่อขา 4


void setup() {
  
Serial.begin(9600);
//------------------------------------ 
pinMode(r1, OUTPUT);
pinMode(r2, OUTPUT);
pinMode(r3, OUTPUT);
pinMode(r4, OUTPUT);
//------------------------------------
digitalWrite(r1,0);
digitalWrite(r2,0);
digitalWrite(r3,0);
digitalWrite(r4,0);
Serial.begin(9600);
//-----------------------------------
}



void loop() {
  
float temp;
val11=analogRead(1);
temp=val11/4.092;
val11=(int)temp;//
val2=((val11%100)/10.0);
Serial.println(val2);
delay(100);

if(val2 >= 1.90 ){
 //----ซักด่วน 30 นาที 30 องศา-----ทิก relay ตัวที่ 1 จำนวน 3 ครั้ง ------//
  Serial.println(val2);
  delay(5000);
  digitalWrite(r1,1);
  delay(1000);
  digitalWrite(r1,0);
  delay(1000);
  digitalWrite(r1,1);
  delay(1000);
  digitalWrite(r1,0);
  delay(1000);
  digitalWrite(r1,1);
  delay(1000);
  digitalWrite(r1,0);
  delay(5000);
//-----------------------------------//

//----------เริ่มซัก---------ทิก relay ตัวที่ 2 จำนวน 1 ครั้ง -----------//
  digitalWrite(r2,1); 
  delay(1000);
  digitalWrite(r2,0);
  delay(1000);
//------------------------------------// 
  
  Serial.println("กำลังซัก");
  val2--;
}


}

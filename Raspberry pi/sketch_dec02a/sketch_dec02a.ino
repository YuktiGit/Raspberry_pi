
int LED = 5;
int a=0,b;
int x = 0;
//int in1, in2, you;

void setup() {
  pinMode(LED, OUTPUT);
  
  Serial.begin(9600);   
  Serial.print("WELCOME TO THE PROGRAM \n");
  Serial.print("ENTER A NUMBER BETWEEN 1 TO 7 \n");
  Serial.print("1 FOR AND GATE \n");
  Serial.print("2 FOR OR GATE \n");
  Serial.print("3 FOR NOT GATE \n");
  Serial.print("4 FOR NOR GATE \n");
  Serial.print("5 FOR NAND GATE \n");
  Serial.print("6 FOR EX-OR GATE \n");
  Serial.print("7 FOR EX-NOR GATE \n");
}

void loop(){
  digitalWrite(LED,LOW);
  
  Serial.print("ENTER INPUT 1 \n");
  while (Serial.available()== 0)  {};
  a = Serial.parseInt();
  Serial.println(a);
  
  if (a!=1 || a!=2) {
    Serial.print("ERROR...ENTER 1 OR 2 \n");
    while (Serial.available()==0){};
    x = Serial.parseInt();
    a = x;
    }
}  

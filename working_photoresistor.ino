// initializing LDRs
int ldr_1 = A0 ;
int ldr_2 = A1 ;
int ldr_3 = A2 ;
int ldr_4 = A3 ;

// initializing LEDs
int led_1 = 31; 
int led_2 = 33; 
int led_3 = 35; 
int led_4 = 37; 

// initizlizing 'value' variable
int value_1 = 0;
int value_2 = 0;
int value_3 = 0;
int value_4 = 0;

void setup() {
  Serial.begin(9600);
  pinMode(ldr_1, INPUT);
  pinMode(led_1, OUTPUT);
  
  pinMode(ldr_2, INPUT);
  pinMode(led_2, OUTPUT);
  
  pinMode(ldr_3, INPUT);
  pinMode(led_3, OUTPUT);
  
  pinMode(ldr_4, INPUT);
  pinMode(led_4, OUTPUT);
}
void loop() {

  //LDR-LED Circuit1
  value_1 = analogRead(ldr_1);
  if (value_1 >= 300){
    digitalWrite(led_1, HIGH);
  }
  if (value_1 < 300){
    digitalWrite(led_1, LOW);
  }
  Serial.print("VALUE_1: ");
  Serial.println(value_1);

  //LDR-LED Circuit2
  value_2 = analogRead(ldr_2);
  if (value_2 >= 300){
    digitalWrite(led_2, HIGH);
  }
  if (value_2 < 300){
    digitalWrite(led_2, LOW);
  }
  Serial.print("VALUE_2: ");
  Serial.println(value_2);

  //LDR-LED Circuit3
  value_3 = analogRead(ldr_3);
  if (value_3 >= 300){
    digitalWrite(led_3, HIGH);
  }
  if (value_3 < 300){
    digitalWrite(led_3, LOW);
  }
  Serial.print("VALUE_3: ");
  Serial.println(value_3);

  //LDR-LED Circuit4
  value_4 = analogRead(ldr_4);
  if (value_4 >= 300){
    digitalWrite(led_4, HIGH);
  }
  if (value_4 < 300){
    digitalWrite(led_4, LOW);
  }
  Serial.print("VALUE_4: ");
  Serial.println(value_4);

  Serial.println("");
  
  delay(250);  
}


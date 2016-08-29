// initializing LDR
int ldr_1 = A12 ;

// initializing LED
int led_1 = 31; 

// initizlizing 'value' variable
int value_1 = 0;

void setup() {
  Serial.begin(9600);
  pinMode(ldr_1, INPUT);
  pinMode(led_1, OUTPUT);
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

  Serial.println("");
  
  delay(250);  
}


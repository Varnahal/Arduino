// Define os pinos
const int button = 12;   // Pino do Butão
const int led1 = 2;   // Pino do led1
const int led2 = 3;   // Pino do led2
const int led3 = 4;   // Pino do led3
const int led4 = 5;   // Pino do led4
const int led5 = 6;   // Pino do led5
const int led6 = 7;   // Pino do led6
const int led7 = 8;   // Pino do led7
int num = 0;

// Variável para armazenar o estado do botão

void setup() {
  // Define os modos dos pinos
  pinMode(button, INPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  Serial.begin(9600);
  randomSeed(analogRead(0));
}

void loop() {
  // Lê o estado atual do botão
  
  while(digitalRead(button) == HIGH){
    //reseta led
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led7,LOW);
    digitalWrite(led6,LOW);
    digitalWrite(led5,LOW);
    digitalWrite(led4,LOW);

    //acende led
    digitalWrite(led1,HIGH);
    delay(100);
    digitalWrite(led2,HIGH);
    delay(100);
    digitalWrite(led3,HIGH);
    delay(100);
    digitalWrite(led7,HIGH);
    delay(100);
    digitalWrite(led6,HIGH);
    delay(100);
    digitalWrite(led5,HIGH);
    delay(100);
    digitalWrite(led4,HIGH);
    delay(300);
    //apaga led
    digitalWrite(led4,LOW);
    delay(100);
    digitalWrite(led5,LOW);
    delay(100);
    digitalWrite(led6,LOW);
    delay(100);
    digitalWrite(led7,LOW);
    delay(100);
    digitalWrite(led3,LOW);
    delay(100);
    digitalWrite(led2,LOW);
    delay(100);
    digitalWrite(led1,LOW);
    delay(300);
    num = random(5);

    if(num == 0){
    digitalWrite(led7,HIGH);
    Serial.println("1");
  }
  if(num == 1){
    digitalWrite(led1,HIGH);
    digitalWrite(led6,HIGH);
    Serial.println("2");
  }
  if(num == 2){
    digitalWrite(led1,HIGH);
    digitalWrite(led7,HIGH);
    digitalWrite(led6,HIGH);
    Serial.println("3");
  }
  if(num == 3){
    digitalWrite(led1,HIGH);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,HIGH);
    digitalWrite(led6,HIGH);
    Serial.println("4");
  }
  if(num == 4){
    digitalWrite(led1,HIGH);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,HIGH);
    digitalWrite(led6,HIGH);
    digitalWrite(led7,HIGH);
    Serial.println("5");
  }
  if(num == 5){
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,HIGH);
    digitalWrite(led5,HIGH);
    digitalWrite(led6,HIGH);
    Serial.println("6");
  }

  }
  



    

  
}

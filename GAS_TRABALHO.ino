 //PINO DIGITAL UTILIZADO PELO LED
#define pinoSensor A1 //PINO DIGITAL UTILIZADO PELO SENSOR
#define pinoLed 7
 
void setup(){
  pinMode(pinoSensor, INPUT); //DEFINE O PINO COMO ENTRADA
   //DEFINE O PINO COMO SAÍDA
  pinMode(pinoLed, OUTPUT);
  digitalWrite(pinoLed, LOW);
  Serial.begin(9600);
}
 
void loop(){
  int valor;
  valor = analogRead(pinoSensor);
  if(valor > 500){
    digitalWrite(pinoLed, HIGH);
    delay(100);
    digitalWrite(pinoLed, LOW);
    delay(100);
    digitalWrite(pinoLed, HIGH);
    delay(100);
    digitalWrite(pinoLed, LOW);
    delay(100);
    digitalWrite(pinoLed, HIGH);
    } else{
      digitalWrite(pinoLed, LOW);
      }
  Serial.println(valor);
}

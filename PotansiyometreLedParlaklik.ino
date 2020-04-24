int potPin=A0; //Potansiyometre data pini Arduino bağlantı pini
int potDeger; //Potansiyometreden okunacak değer değişkeni
int ledPin=3; //Led'in bağlı olduğu pwm pini


void setup() {
pinMode(ledPin,OUTPUT); //3 numaralı pwm led pinini çıkış olarak ayarlıyoruz.  
Serial.begin (9600); //Seri haberleşme hızını belirtiyoruz. 
}
 
void loop() {
potDeger=map(analogRead(potPin),0,1023,0,255); //map fonksiyonu ile potansiyometre değerini, pwm sinyaline dönüştürüyoruz.
analogWrite(ledPin,potDeger); //Led'e potansiyometreden gelen analog değerin pwm sinyali karşılığını yazdırıyoruz.
Serial.println(potDeger); // Seri monitörde potansiyometreden okunan değeri görmek için 
}

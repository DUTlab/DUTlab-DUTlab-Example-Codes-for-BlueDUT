/*
DUTlab tarafından BlueDUT uygulaması 
için hazırlanan örnek bir koddur.
İletişim için:
DUTlab: https://dutlab.com
BlueDUT: https://bluedut.dutlab.com
Mail: iletisim.dutlab.com
*/
#include <SoftwareSerial.h>
SoftwareSerial iletisim(10,11); 
void setup() {
Serial.begin(9600);  
iletisim.begin(9600);
pinMode (13, OUTPUT);
digitalWrite (13, LOW);
}
void loop() {
  if(iletisim.available())
  {
    long veri=iletisim.read();
    Serial.println(veri);
 if (veri == 1){  
  digitalWrite (13, HIGH);
  }
  if (veri == 2){  
  digitalWrite (13, LOW);
  }
}
}

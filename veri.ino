/*
DUTlab tarafından BlueDUT uygulaması 
için hazırlanan örnek koddur.
İletişim için:
DUTlab: https://dutlab.com
BlueDUT: https://bluedut.dutlab.com
Mail: iletisim.dutlab.com
*/
#include <SoftwareSerial.h>
SoftwareSerial iletisim(10,11);
int saniye=1;
int dakika=0;
int saat=0;

void setup() {
  Serial.begin(9600);
  iletisim.begin(9600);
}
void loop() {
 if (iletisim.available()) {
   Serial.println("bağlandı");
   long veri=iletisim.read();
   if(saniye >= 60){
      dakika++;
      saniye = 0;
    }
    if(dakika >= 60){
      saat++;
      dakika = 0;
    }
    iletisim.print("GÖREV SÜRESİ= ");
    iletisim.print(saat);
    iletisim.print(":");
    iletisim.print(dakika);
    iletisim.print(":");
    iletisim.println(saniye);
    delay(1000);
    saniye++;
 }
}

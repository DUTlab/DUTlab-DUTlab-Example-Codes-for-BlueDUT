"""
DUTlab tarafından BlueDUT uygulaması 
için hazırlanan örnek koddur.
İletişim için:
DUTlab: https://dutlab.com
BlueDUT: https://bluedut.dutlab.com
Mail: iletisim.dutlab.com
"""
from machine import UART, Pin, utime
iletisim = UART(0, baudrate = 9600, tx=Pin(11), rx=Pin(12)) 
int saniye=1
int dakika=0
int saat=0
while True: 
    if iletisim.any() > 0:
        veri = iletisim.read(1)
        if(saniye >= 60)
           dakika++
           saniye = 0
        if(dakika >= 60)
           saat++
           dakika = 0
    iletisim.write("GÖREV SÜRESİ= ")
    iletisim.write(saat)
    iletisim.write(":")
    iletisim.write(dakika)
    iletisim.write(":")
    iletisim.write(saniye/n)
    utime.sleep(1)
    saniye++

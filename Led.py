"""
DUTlab tarafından BlueDUT uygulaması 
için hazırlanan örnek koddur.
İletişim için:
DUTlab: https://dutlab.com
BlueDUT: https://bluedut.dutlab.com
Mail: iletisim.dutlab.com
"""
from machine import UART, Pin
iletisim = UART(0, baudrate = 9600, tx=Pin(11), rx=Pin(12)) 
led = Pin(25, Pin.OUT) 
while True: 
    if iletisim.any() > 0:
        veri = iletisim.read(1)
    if "1" in veri: 
        led.value(0)
    elif "0" in veri:
        led.value(1)

Merhaba, BlueDUT başlangıç kılavuzuna hoş geldiniz !


Sizler için BlueDUT’un temel çalışma mantığından bahsedip popüler kontrolcü kartları için hazırladığımız örnek kodları inceleyeceğiz. Bu mantıktan yola çıkarak kendi çalışmalarınız için BlueDUT’u istediğiniz kontrolcü kartı ile elektronik projeleriniz için özelleştirebilirsiniz. Örnek kodlarımıza GitHub üzerinden de erişebilirsiniz.


BlueDut’u açtığımızda bizi 6 kontrolcü, bağlanma sayfası, seçenekler ve bağlantı durumu göstergesi karşılıyor. Bu kontrolcüler; Akıllı Araç Kontrolcüsü, Robotik Kol Kontrolcüsü, Konsol Kontrolcüsü, Led Kontrolcüsü, Akıllı Ev Kontrolcüsü ve Veri Aktarımı Kontrolcüsü.


Kullanıma geçmeden önce sağ üstte bulunan dişli butonu ile  seçenekler sayfasından dil seçeneğini değiştirebilir ve 4 farklı temadan istediğinizi seçebilirsiniz. Ayrıca alt taraftan ses ayarına ve hakkımızda sayfasına da ulaşabilirsiniz.


BlueDUT’u kullanmak için ilk önce bağlantı kurmalısınız. Bağlantı kurmak için ana sayfadan Bluetooth ikonuna tıklayarak karşınıza çıkan sayfadan telefonunuz ile daha önceden tanımlanmış bluetooth modüllerinden birini seçmelisiniz. Daha sonra bağlantı durumu ile ilgili bilgi mesajı gelecektir.


Bağlantı kurulduğunda “bağlantı başarılı”  bilgi mesajı geldiyse ve sağ üstte yer alan bağlantı durumu göstergesi yeşile döndüyse bağlantı başarıyla gerçekleşmiş demektir.
 
Buraya kadar nasıl bağlantı kuracağımızı ve genel ayarları ayarlamayı öğrendik. Şimdi ise “Led Kontrolcüsü” ve “Veri Aktrarımı Kontrolcüsü” ile popüler kontrolcüler üzerinden BlueDUT’u kullanmayı öğreneceğiz. 



Led Kontrolcüsü


Led Kontrolcüsünü kullanabilmek için kontrol edeceğimiz geliştirme kartına yazdığımız kodlar ile uyumlu olmalı. Bu örnekte kontrolcü kartın 13. pinine bağlı olan ledi yakıp söndürme işlemi yapacağız. Bunu önce Arduino IDE’si ile programlanabilen kartlar üzerinde örnekleyelim. Öncelikle kontrolcü Kartına görseldeki gibi “1” verisini aldığında ledin yanması, “2” verisini aldığında ise söndürmesi için gerekli kodları yazdık. 


Aynı çalışmayı MicroPython ile programlanabilen kontrolcü kartlar için örnekteki gibi düzenleyebiliriz.


Veri Aktarımı Kontrolcüsü


Veri Aktarımı Kontrolcüsü’ne geçmeden önce göndereceğimiz verileri inceleyelim. ArduinoÖrnek 

Bunu önce Arduino IDE’si ile programlanabilen kartlar üzerinde örnekleyelim. Öncelikle kontrolcü Kartına görseldeki gibi kodumuzda yazdığımız “görev süresi sayacı”nı bluetooth modülü üzerinden yazdırıyoruz.


Aynı çalışmayı MicroPython ile programlanabilen kontrolcü kartlar için örnekteki gibi düzenleyebiliriz.

Örnek kodumuzdaki veriyi BlueDUT ekranından görüntülemek için Veri Aktarımı Kontrolcüsü’ne giriş yapmamız yeterli.

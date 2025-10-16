<h1 align="center">🔷 Example Codes for BlueDUT</h1>
<p align="center">
  <em>Starter guide and sample controller codes for the BlueDUT platform</em><br>
  <em>BlueDUT başlangıç kılavuzu ve kontrolcü örnek kodları</em>
</p>

<hr>

<h2>🧠 Summary</h2>
<p>
 EN || BlueDUT enables wireless communication between your smartphone and development boards, making prototyping faster and easier.  
  With modular controllers such as LED and Data Transfer, users can build scalable electronic systems without writing complex connection layers.
</p>

<p>
  TR || BlueDUT, akıllı telefon ile geliştirme kartları arasında kablosuz iletişim kurmayı sağlayarak prototipleme sürecini hızlandırır.  
  LED ve Veri Aktarımı gibi modüler kontrolcüler sayesinde kullanıcılar, karmaşık bağlantı kodları yazmadan ölçeklenebilir elektronik sistemler oluşturabilirler.
</p>

<hr>



<h2>🎯 Purpose & Scope</h2>
<p>
  EN || This repository provides example codes and usage guidance for <strong>BlueDUT</strong> — a multifunctional Bluetooth-based control platform developed by <a href="https://dutlab.com" target="_blank"><strong>DUTlab</strong></a>.  
  It helps users understand BlueDUT’s core working logic and apply it to various controller boards such as Arduino or MicroPython-based systems.
</p>

<p>
  TR || Bu depo, <a href="https://dutlab.com" target="_blank"><strong>DUTlab</strong></a> tarafından geliştirilen çok amaçlı Bluetooth tabanlı kontrol platformu <strong>BlueDUT</strong> için örnek kodlar ve kullanım kılavuzları içerir.  
  Kullanıcıların BlueDUT’un temel çalışma mantığını kavrayarak Arduino veya MicroPython tabanlı kartlar üzerinde uygulamalar geliştirmesine yardımcı olur.
</p>

<ul>
  <li>Connect BlueDUT to different microcontrollers.</li>
  <li>Control LEDs, motors, sensors, and data channels wirelessly.</li>
  <li>Test and visualize data through the BlueDUT interface.</li>
  <li>Explore 6 main controller modules for different applications.</li>
</ul>

<hr>

<h2>🧩 BlueDUT Overview</h2>
<p>
  When you open BlueDUT, you are greeted by 6 main controllers and a connection interface:
</p>

<ol>
  <li>Vehicle Controller</li>
  <li>Robotic Arm Controller</li>
  <li>Console Controller</li>
  <li>LED Controller</li>
  <li>Smart Home Controller</li>
  <li>Data Transfer Controller</li>
</ol>

<p>
  BlueDUT includes options for <strong>language selection</strong>, <strong>theme customization (4 themes)</strong>, <strong>sound control</strong>, and <strong>About Us</strong> page access.  
  Connection is established via the Bluetooth icon on the main screen, selecting a predefined module, and confirming connection success through a green indicator.
</p>

<hr>

<h2>💡 Example Controllers</h2>

<h3>• LED Controller</h3>
<p>
  The LED Controller allows toggling an LED on pin <code>13</code> of a connected controller board.  
  For Arduino-based boards, the program listens for “1” (turn ON) and “2” (turn OFF) data over Bluetooth.  
  Equivalent logic can be implemented for MicroPython boards.
</p>

<h3>• Data Transfer Controller</h3>
<p>
  This controller displays real-time data transmitted from your microcontroller, such as a <strong>duty time counter</strong> or other sensor outputs.  
  Data is sent via Bluetooth and visualized directly on BlueDUT’s Data Transfer panel.
</p>

<hr>

<h2>📁 Project Structure</h2>

<pre>
📁 DUTlab-DUTlab-Example-Codes-for-BlueDUT/
│
├── Arduino/                → Example codes for Arduino boards
├── MicroPython/            → Example codes for MicroPython boards
├── Images/                 → App and controller screenshots
├── README.md               → This documentation file
└── LICENSE                 → Project license information
</pre>

<hr>

<h2>⚙️ Installation & Usage</h2>

<ol>
  <li>Download or clone this repository:
    <pre><code>git clone https://github.com/DUTlab/DUTlab-DUTlab-Example-Codes-for-BlueDUT.git</code></pre>
  </li>
  <li>Open the folder for your development environment (<code>Arduino</code> or <code>MicroPython</code>).</li>
  <li>Upload the example code to your controller board.</li>
  <li>Pair your board’s Bluetooth module with your phone.</li>
  <li>Open <a href="https://bluedut.dutlab.com" target="_blank">BlueDUT</a> and select the correct module.</li>
  <li>Control LEDs or view transmitted data via the BlueDUT interface.</li>
</ol>

<hr>

<h2>🌐 Resources</h2>
<ul>
  <li>🔗 <a href="https://bluedut.dutlab.com" target="_blank">BlueDUT Official Website</a></li>
  <li>🔗 <a href="https://dutlab.com" target="_blank">DUTlab Main Page</a></li>
  <li>📘 Example Codes → Included for Arduino and MicroPython</li>
</ul>

<hr>

<h2 align="center </h2>

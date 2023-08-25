Hello, welcome to the BlueDUT starter guide! 

We will talk about the basic working logic of BlueDUT and examine the sample codes we have prepared for popular controller cards for you. Based on this logic, you can customize BlueDUT for your own work. You can also access our sample codes on GitHub.

When we open BlueDut, 6 controllers, connection page, options and connection status indicator welcome us. These controllers; Vehicle Controller, Robotic Arm Controller, Console Controller, Led Controller, Smart Home Controller and Data Transfer Controller.

Before using it, you can change the language option from the options page with the gear button at the top right and choose the one you want from 4 different themes. You can also access the volume setting and the about us page at the bottom.

To use BlueDUT, you must first establish a connection. To establish a connection, you must click on the Bluetooth icon from the main page and select the one from previously defined bluetooth modules with your phone from the page that appears. Then an information message about the connection status will appear.

If the "connection is successful" information message is displayed when the connection is established and the connection status indicator in the upper right turns green, it means that the connection has been successful.

So far we have learned how to establish a connection and adjust general settings. Now we will learn to use BlueDUT over popular controllers with "Led Controller" and "Data Transfer Controller".


Led Controller

In order to use the Led Controller, it must be compatible with the codes we wrote on the controller cards we will control. In this example, we will flash the LED connected to the 13th pin of the controller card. Let's first exemplify this on boards that can be programmed with the Arduino IDE. First of all, we wrote the necessary codes on the Controller Card for the led to turn on when it receives the "1" data as in the image, and to turn it off when it receives the "2" data.

We can arrange the same as in the example for the controller cards that can be programmed with MicroPython.


Data Transfer Controller

Before moving on to the Data Transfer Controller, let's examine the data we will send. 

Let's first exemplify this on boards that can be programmed with the Arduino IDE. First of all, we print the "duty time counter", which we wrote in our code, via the bluetooth module.

We can arrange the same as in the example for the controller cards that can be programmed with MicroPython.

To view the data in our sample code from the BlueDUT screen, we just need to enter the Data Transfer Controller.

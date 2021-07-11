# Bosch-XDK-Sensordata-Stream-To-SAP-Business-App


## 1.Bosch XDK Overview

The Bosch XDK is a Cross-Development-Kit to make any device an IoT device. 

The hardware comes with 8 Sensors:
* Accelerometer
* Gyroscope
* Magnetometer
* Humidity
* Pressure
* Temperature
* Ambient Noise
* Ambient Light

and has a gateway to extend the functionality by own sensors and hardware.
The XDK Workbench is the development environment that comes with the development kit.

For further information, see: \
https://developer.bosch.com/products-and-services/sdks/xdk/develop/c/technical-information \
https://www.youtube.com/watch?v=FAlyjBO0-7g

## 2.Bosch XDK and IOTA

"IOTA is an open-source distributed ledger and cryptocurrency designed for the Internet of things (IoT). It uses a directed acyclic graph to store transactions on its ledger, motivated by a potentially higher scalability over blockchain based distributed ledgers. IOTA does not use miners to validate transactions, instead, nodes that issue a new transaction on the network must approve two previous transactions. Transactions can therefore be issued without fees, facilitating microtransactions." (Wikipedia, 2021, https://en.wikipedia.org/wiki/IOTA_(technology))

The Bosch XDK can even get used to offer data on the IOTA Marketplace. The XDKs can collect an trade data in real-time between connected devices. That means, in a connected world, the XDK sensor can offer any kind of services and get paid for it. It opens the door for a machine to machine economy. The possibilities are endless.
For further information about IOTA and the XDK, see: \
https://www.iota.org \
https://www.youtube.com/watch?v=h09z2N0MtuQ

## 3.Bosch XDK SAP Connector

To make the Bosch XDK run do the following steps:
* Download and install the XDK Workbench
* Create a new C++ project
* clone my code from this repo
* enter your network details, hostname and port of your REST API endpoint which is listening to the sensordata
* build code and flash the XDK
* the sensor sends now every second a post request with a "true" if the lightsensor is covered and a "false" if not

I used the Bosch XDK to stream sensordata to an SAP business application. 
In my simple proof of concept it detects if a bin or a container is full and needs to get cleared.

To see, how to build or just download and run the corresponding SAP business application, check my blog post: \
https://blogs.sap.com/?p=1365029&preview=true

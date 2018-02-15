# noisegen
## Create annoying noises using piezo disc and Particle Photon
### The parts:

Particle Photon: https://www.amazon.ca/Particle-PHOTON-Comprehensive-Development-Access/dp/B016YNU1A0/ref=sr_1_1?ie=UTF8&qid=1518670030&sr=8-1&keywords=particle+photon

128x64 OLED: https://www.amazon.ca/Display-Arduino-128x64-SSD1306-Library/dp/B077D4RQG1/ref=sr_1_4?ie=UTF8&qid=1518670436&sr=8-4&keywords=128x64+oled

Piezo buzzer (10 pack): https://www.amazon.ca/Elements-buzzer-Sounder-Sensor-Trigger/dp/B073RK8KM3/ref=sr_1_7?s=electronics&ie=UTF8&qid=1518670475&sr=1-7&keywords=piezo+buzzer

----------------------------------------------------------
### The hookups:

#### With screen:

Center disc of buzzer to D3

Outer disc of buzzer to GND

Screen SCL to D1

Screen SDA to D0

Screen 5V to 3V3 (no need for resistors this way)

Screen GND to GND

------------
#### Without screen:

Center disc of buzzer to D3

Outer disc of buzzer to GND


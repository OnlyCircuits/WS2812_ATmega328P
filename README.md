# WS2812_ATmega328P

Controlling NeoPixels with the ATmega328P (AVR Code).

## Authors

- [@OnlyCircuits](https://github.com/OnlyCircuits)

## Demo

[Video Demostration](https://www.instagram.com/reel/ClolbDcte5M/?utm_source=ig_web_copy_link)

## Lesson

- Install Microchip Studio 
- Acknowledgements of C/C++ Programming and Microcontrollers
- Configure the AVR fuses
- Build the circuit on the breadboard
- Upload the code 
- Enjoy the project

## Documentation

[ATmega328p Datasheet](https://ww1.microchip.com/downloads/en/DeviceDoc/Atmel-7810-Automotive-Microcontrollers-ATmega328P_Datasheet.pdf)

[WS2812 Datasheet](https://cdn-shop.adafruit.com/datasheets/WS2812.pdf)


## Code Notes

Set the color and the number of the NeoPixel

```
fill(int led, int _r, int _g, int _b);

```

Enable the NeoPixel

```
write();

```

<hr>

For (n) NeoPixels

```
int leds [255][3];

```
For only one NeoPixel

```
int leds [3];

```

## Materials

- Breadboard
- Jumpers
- ATmega328P
- WS2812 8 strip
## Circuit Diagram

![WS2812_ATmega328p](https://user-images.githubusercontent.com/105074465/206517376-f95f6839-0153-4cc9-80e1-7a9221117cea.png)

## License

[MIT](https://choosealicense.com/licenses/mit/)


## Support

For support, email onlycircuits321@gmail.com or join my channel.

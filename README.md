# EmbeddedSystems
Embedded systems

## LED blinks
Example 1

## Code - Example 1

<pre>

<font color="#00979c">void</font> <font color="#5e6d03">setup</font><font color="#000000">(</font><font color="#000000">)</font>
<font color="#000000">{</font>
 &nbsp;<font color="#d35400">pinMode</font><font color="#000000">(</font><font color="#000000">12</font><font color="#434f54">,</font> <font color="#00979c">OUTPUT</font><font color="#000000">)</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47;define pino 12 como saída digital</font>
<font color="#000000">}</font>
<font color="#00979c">void</font> <font color="#5e6d03">loop</font><font color="#000000">(</font><font color="#000000">)</font>
<font color="#000000">{</font>
 &nbsp;<font color="#434f54">&#47;&#47;deixa pino 12 em nível alto (+5V) durante 1000ms (=1s)</font>
 &nbsp;<font color="#d35400">digitalWrite</font><font color="#000000">(</font><font color="#000000">12</font><font color="#434f54">,</font> <font color="#000000">1</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#d35400">delay</font><font color="#000000">(</font><font color="#000000">1000</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#434f54">&#47;&#47;deixa pino 12 em nível baixo (0V) durante 1000ms (=1s)</font>
 &nbsp;<font color="#d35400">digitalWrite</font><font color="#000000">(</font><font color="#000000">12</font><font color="#434f54">,</font> <font color="#000000">0</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#d35400">delay</font><font color="#000000">(</font><font color="#000000">1000</font><font color="#000000">)</font><font color="#000000">;</font>
<font color="#000000">}</font>

</pre>

## Video - Example 1

[![Watch the video](https://img.youtube.com/vi/ZSkYLrklfog/maxresdefault.jpg)](https://youtu.be/ZSkYLrklfog)

## Requirements for led blinks
- Arduino Uno R3
- Resistor 330 ohms
- 2 x Jumpers
- Breadboard
- USB cable
- IDE Arduino 1.8.9

## button & LED
Example 2

## Code - Example 2


<pre>
<font color="#00979c">int</font> <font color="#000000">ledPin</font> <font color="#434f54">=</font> <font color="#000000">9</font><font color="#000000">;</font>
<font color="#00979c">int</font> <font color="#000000">buttonPin</font> <font color="#434f54">=</font> <font color="#000000">7</font><font color="#000000">;</font>

<font color="#00979c">void</font> <font color="#5e6d03">setup</font><font color="#000000">(</font><font color="#000000">)</font>
<font color="#000000">{</font>
 &nbsp;<font color="#d35400">pinMode</font><font color="#000000">(</font><font color="#000000">ledPin</font><font color="#434f54">,</font> <font color="#00979c">OUTPUT</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#d35400">pinMode</font><font color="#000000">(</font><font color="#000000">buttonPin</font><font color="#434f54">,</font> <font color="#00979c">INPUT</font><font color="#000000">)</font><font color="#000000">;</font>
<font color="#000000">}</font>

<font color="#00979c">void</font> <font color="#5e6d03">loop</font><font color="#000000">(</font><font color="#000000">)</font>
<font color="#000000">{</font>
 &nbsp;<font color="#434f54">&#47;&#47; read from the button pin</font>
 &nbsp;<font color="#00979c">int</font> <font color="#000000">button</font> <font color="#434f54">=</font> <font color="#d35400">digitalRead</font><font color="#000000">(</font><font color="#000000">buttonPin</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#5e6d03">if</font> <font color="#000000">(</font><font color="#000000">button</font> <font color="#434f54">==</font> <font color="#00979c">HIGH</font><font color="#000000">)</font>
 &nbsp;<font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;<font color="#d35400">digitalWrite</font><font color="#000000">(</font><font color="#000000">ledPin</font><font color="#434f54">,</font> <font color="#00979c">HIGH</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#000000">}</font>
 &nbsp;<font color="#5e6d03">else</font>
 &nbsp;<font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;<font color="#d35400">digitalWrite</font><font color="#000000">(</font><font color="#000000">ledPin</font><font color="#434f54">,</font> <font color="#00979c">LOW</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#000000">}</font>
<font color="#000000">}</font>

</pre>
## Video - Example 2

[![Watch the video](https://img.youtube.com/vi/ZSkYLrklfog/maxresdefault.jpg)](https://youtu.be/51ukQ1h5KwI)

## Requirements for push button & LED

- Arduino Uno R3
- Resistor 330 ohms
- Resistor 10 Kohms
- 4 x Jumpers
- Breadboard
- USB cable
- IDE Arduino 1.8.9

## Four LEDs
Example 3

## Code - Example 3

<pre>
<font color="#00979c">int</font> <font color="#000000">ledPin</font><font color="#000000">[</font><font color="#000000">]</font> <font color="#434f54">=</font> <font color="#000000">{</font><font color="#000000">7</font><font color="#434f54">,</font> <font color="#000000">8</font><font color="#434f54">,</font> <font color="#000000">9</font><font color="#434f54">,</font> <font color="#000000">10</font><font color="#000000">}</font><font color="#000000">;</font>

<font color="#00979c">void</font> <font color="#5e6d03">setup</font><font color="#000000">(</font><font color="#000000">)</font>
<font color="#000000">{</font>
 &nbsp;<font color="#5e6d03">for</font> <font color="#000000">(</font><font color="#00979c">int</font> <font color="#000000">i</font> <font color="#434f54">=</font> <font color="#000000">0</font><font color="#000000">;</font> <font color="#000000">i</font> <font color="#434f54">&lt;</font> <font color="#000000">4</font><font color="#000000">;</font> <font color="#000000">i</font><font color="#434f54">++</font><font color="#000000">)</font>
 &nbsp;<font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;<font color="#d35400">pinMode</font><font color="#000000">(</font><font color="#000000">ledPin</font><font color="#000000">[</font><font color="#000000">i</font><font color="#000000">]</font><font color="#434f54">,</font> <font color="#00979c">OUTPUT</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#000000">}</font>
<font color="#000000">}</font>

<font color="#00979c">void</font> <font color="#5e6d03">loop</font><font color="#000000">(</font><font color="#000000">)</font>
<font color="#000000">{</font>
 &nbsp;<font color="#5e6d03">for</font> <font color="#000000">(</font><font color="#00979c">int</font> <font color="#000000">i</font> <font color="#434f54">=</font> <font color="#000000">0</font><font color="#000000">;</font> <font color="#000000">i</font> <font color="#434f54">&lt;</font> <font color="#000000">4</font><font color="#000000">;</font> <font color="#000000">i</font><font color="#434f54">++</font><font color="#000000">)</font>
 &nbsp;<font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;<font color="#d35400">digitalWrite</font><font color="#000000">(</font><font color="#000000">ledPin</font><font color="#000000">[</font><font color="#000000">i</font><font color="#000000">]</font><font color="#434f54">,</font> <font color="#00979c">HIGH</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#000000">}</font>
<font color="#000000">}</font>

</pre>

## Video - Example 3

[![Watch the video](https://img.youtube.com/vi/9Vkd2mXqn00/maxresdefault.jpg)](https://youtu.be/9Vkd2mXqn00)

## Requirements to light 4 LEDs

- Arduino Uno R3
- 4 X Resistor 330 ohms
- 5 x Jumpers
- 4 x LEDs
- Breadboard
- USB cable
- IDE Arduino 1.8.9

## Representing Binary Numbers
Example 4

## Code - Example 4

<pre>
<font color="#00979c">int</font> <font color="#000000">ledPin</font><font color="#000000">[</font><font color="#000000">]</font> <font color="#434f54">=</font> <font color="#000000">{</font><font color="#000000">7</font><font color="#434f54">,</font> <font color="#000000">8</font><font color="#434f54">,</font> <font color="#000000">9</font><font color="#434f54">,</font> <font color="#000000">10</font><font color="#000000">}</font><font color="#000000">;</font>

<font color="#00979c">void</font> <font color="#5e6d03">setup</font><font color="#000000">(</font><font color="#000000">)</font>
<font color="#000000">{</font>
 &nbsp;<font color="#5e6d03">for</font> <font color="#000000">(</font><font color="#00979c">int</font> <font color="#000000">i</font> <font color="#434f54">=</font> <font color="#000000">0</font><font color="#000000">;</font> <font color="#000000">i</font> <font color="#434f54">&lt;</font> <font color="#000000">4</font><font color="#000000">;</font> <font color="#000000">i</font><font color="#434f54">++</font><font color="#000000">)</font>
 &nbsp;<font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;<font color="#d35400">pinMode</font><font color="#000000">(</font><font color="#000000">ledPin</font><font color="#000000">[</font><font color="#000000">i</font><font color="#000000">]</font><font color="#434f54">,</font> <font color="#00979c">OUTPUT</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#000000">}</font>
<font color="#000000">}</font>

<font color="#00979c">void</font> <font color="#5e6d03">loop</font><font color="#000000">(</font><font color="#000000">)</font>
<font color="#000000">{</font>
 &nbsp;<font color="#5e6d03">for</font> <font color="#000000">(</font><font color="#00979c">byte</font> <font color="#000000">counter</font> <font color="#434f54">=</font> <font color="#000000">0</font><font color="#000000">;</font> <font color="#000000">counter</font> <font color="#434f54">&lt;=</font> <font color="#000000">15</font><font color="#000000">;</font> <font color="#000000">counter</font><font color="#434f54">++</font><font color="#000000">)</font>
 &nbsp;<font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;<font color="#000000">displayBinary</font><font color="#000000">(</font><font color="#000000">counter</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;<font color="#d35400">delay</font><font color="#000000">(</font><font color="#000000">500</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#000000">}</font>
<font color="#000000">}</font>

<font color="#00979c">void</font> <font color="#000000">displayBinary</font><font color="#000000">(</font><font color="#00979c">byte</font> <font color="#000000">numToShow</font><font color="#000000">)</font>
<font color="#000000">{</font>
 &nbsp;<font color="#5e6d03">for</font> <font color="#000000">(</font><font color="#00979c">int</font> <font color="#000000">i</font> <font color="#434f54">=</font> <font color="#000000">0</font><font color="#000000">;</font> <font color="#000000">i</font> <font color="#434f54">&lt;</font> <font color="#000000">4</font><font color="#000000">;</font> <font color="#000000">i</font><font color="#434f54">++</font><font color="#000000">)</font>
 &nbsp;<font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;<font color="#5e6d03">if</font> <font color="#000000">(</font><font color="#d35400">bitRead</font><font color="#000000">(</font><font color="#000000">numToShow</font><font color="#434f54">,</font> <font color="#000000">i</font><font color="#000000">)</font> <font color="#434f54">==</font> <font color="#000000">1</font><font color="#000000">)</font>
 &nbsp;&nbsp;&nbsp;<font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#d35400">digitalWrite</font><font color="#000000">(</font><font color="#000000">ledPin</font><font color="#000000">[</font><font color="#000000">i</font><font color="#000000">]</font><font color="#434f54">,</font> <font color="#00979c">HIGH</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;<font color="#000000">}</font>
 &nbsp;&nbsp;&nbsp;<font color="#5e6d03">else</font>
 &nbsp;&nbsp;&nbsp;<font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#d35400">digitalWrite</font><font color="#000000">(</font><font color="#000000">ledPin</font><font color="#000000">[</font><font color="#000000">i</font><font color="#000000">]</font><font color="#434f54">,</font> <font color="#00979c">LOW</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;<font color="#000000">}</font>
 &nbsp;<font color="#000000">}</font>

<font color="#000000">}</font>

</pre>

## Video - Example 4

[![Watch the video](https://img.youtube.com/vi/jPpSLFP2DZ8/maxresdefault.jpg)](https://youtu.be/jPpSLFP2DZ8)

## Requirements for binary representation from 0 to 15

- Arduino Uno R3
- 4 X Resistor 330 ohms
- 5 x Jumpers
- 4 x LEDs
- Breadboard
- USB cable
- IDE Arduino 1.8.9

## References

[1] 01 – PISCA LED, uel, http://www.uel.br/pessoal/ernesto/arduino/01_pisca_led.pdf, May 21, 2019

[2] MultiWingSpan, http://www.multiwingspan.co.uk/, May 23, 2019

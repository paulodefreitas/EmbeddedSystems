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
Here is the code you will need for the basic control of this circuit, when you upload this program to the Arduino, you will notice that the LED starts on. When you press the button, the LED should switch off. The double equals (==) in the IF statement is not a mistake - it is the operator for comparison in most languages from the C family..

You may also have noticed that the value we read from the pushbutton, HIGH or LOW is the value we are writing to the LED pin. The following code achieves the same effect without requiring the use of the IF statement.

Another thing to notice with this setup is that we have made a button which turns the light off when we press it. This means that the circuit is complete until we press the button. In other words, we can say that the button is push-to-break.

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
In this code, we have a new procedure to display the binary number we want to show. Numbers in the programming language are actually stored in binary even when we set their values using denary. We can take advantage of that fact to avoid having to write code to do the conversion (although we could). In this code, a for loop is used to read the values of the first four bits of the number sent to the procedure. The bitRead function tells us whether there is a 1 or 0 at a given place value. If we find a 1, we turn that LED on, if we find a zero, we turn the LED for that position off.

Test this code with all of the different numbers from 0 to 15. You can also put in values up to 255. Numbers in this range need 8 place value columns to be represented. Since our code ignores the last 4 place values, the LEDs will only be on if that number has a 1 in one or more of the first 4 place value columns. All odd numbers will have the first place value lit up, all even numbers will mean it is not lit.

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

## Traffic light
Traffic light

## Code - Example 5

<pre>
<font color="#434f54">&#47;&#47; variables</font>
<font color="#00979c">int</font> <font color="#000000">GREEN</font> <font color="#434f54">=</font> <font color="#000000">2</font><font color="#000000">;</font>
<font color="#00979c">int</font> <font color="#000000">YELLOW</font> <font color="#434f54">=</font> <font color="#000000">3</font><font color="#000000">;</font>
<font color="#00979c">int</font> <font color="#000000">RED</font> <font color="#434f54">=</font> <font color="#000000">4</font><font color="#000000">;</font>
<font color="#00979c">int</font> <font color="#000000">DELAY_GREEN</font> <font color="#434f54">=</font> <font color="#000000">5000</font><font color="#000000">;</font>
<font color="#00979c">int</font> <font color="#000000">DELAY_YELLOW</font> <font color="#434f54">=</font> <font color="#000000">2000</font><font color="#000000">;</font>
<font color="#00979c">int</font> <font color="#000000">DELAY_RED</font> <font color="#434f54">=</font> <font color="#000000">5000</font><font color="#000000">;</font>


<font color="#434f54">&#47;&#47; basic functions</font>
<font color="#00979c">void</font> <font color="#5e6d03">setup</font><font color="#000000">(</font><font color="#000000">)</font>
<font color="#000000">{</font>
 &nbsp;<font color="#d35400">pinMode</font><font color="#000000">(</font><font color="#000000">GREEN</font><font color="#434f54">,</font> <font color="#00979c">OUTPUT</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#d35400">pinMode</font><font color="#000000">(</font><font color="#000000">YELLOW</font><font color="#434f54">,</font> <font color="#00979c">OUTPUT</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#d35400">pinMode</font><font color="#000000">(</font><font color="#000000">RED</font><font color="#434f54">,</font> <font color="#00979c">OUTPUT</font><font color="#000000">)</font><font color="#000000">;</font>
<font color="#000000">}</font>

<font color="#00979c">void</font> <font color="#5e6d03">loop</font><font color="#000000">(</font><font color="#000000">)</font>
<font color="#000000">{</font>
 &nbsp;<font color="#000000">green_light</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#d35400">delay</font><font color="#000000">(</font><font color="#000000">DELAY_GREEN</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#000000">yellow_light</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#d35400">delay</font><font color="#000000">(</font><font color="#000000">DELAY_YELLOW</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#000000">red_light</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#d35400">delay</font><font color="#000000">(</font><font color="#000000">DELAY_RED</font><font color="#000000">)</font><font color="#000000">;</font>
<font color="#000000">}</font>

<font color="#00979c">void</font> <font color="#000000">green_light</font><font color="#000000">(</font><font color="#000000">)</font>
<font color="#000000">{</font>
 &nbsp;<font color="#d35400">digitalWrite</font><font color="#000000">(</font><font color="#000000">GREEN</font><font color="#434f54">,</font> <font color="#00979c">HIGH</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#d35400">digitalWrite</font><font color="#000000">(</font><font color="#000000">YELLOW</font><font color="#434f54">,</font> <font color="#00979c">LOW</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#d35400">digitalWrite</font><font color="#000000">(</font><font color="#000000">RED</font><font color="#434f54">,</font> <font color="#00979c">LOW</font><font color="#000000">)</font><font color="#000000">;</font>
<font color="#000000">}</font>

<font color="#00979c">void</font> <font color="#000000">yellow_light</font><font color="#000000">(</font><font color="#000000">)</font>
<font color="#000000">{</font>
 &nbsp;<font color="#d35400">digitalWrite</font><font color="#000000">(</font><font color="#000000">GREEN</font><font color="#434f54">,</font> <font color="#00979c">LOW</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#d35400">digitalWrite</font><font color="#000000">(</font><font color="#000000">YELLOW</font><font color="#434f54">,</font> <font color="#00979c">HIGH</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#d35400">digitalWrite</font><font color="#000000">(</font><font color="#000000">RED</font><font color="#434f54">,</font> <font color="#00979c">LOW</font><font color="#000000">)</font><font color="#000000">;</font>
<font color="#000000">}</font>

<font color="#00979c">void</font> <font color="#000000">red_light</font><font color="#000000">(</font><font color="#000000">)</font>
<font color="#000000">{</font>
 &nbsp;<font color="#d35400">digitalWrite</font><font color="#000000">(</font><font color="#000000">GREEN</font><font color="#434f54">,</font> <font color="#00979c">LOW</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#d35400">digitalWrite</font><font color="#000000">(</font><font color="#000000">YELLOW</font><font color="#434f54">,</font> <font color="#00979c">LOW</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#d35400">digitalWrite</font><font color="#000000">(</font><font color="#000000">RED</font><font color="#434f54">,</font> <font color="#00979c">HIGH</font><font color="#000000">)</font><font color="#000000">;</font>
<font color="#000000">}</font>

</pre>

## Video - Example 5

[![Watch the video](https://img.youtube.com/vi/-RUi5HXznco/maxresdefault.jpg)](https://youtu.be/-RUi5HXznco)

## Requirements for Traffic light

- Arduino Uno R3
- 3 X Resistor 330 ohms
- 4 x Jumpers
- 3 x LEDs
- Breadboard
- USB cable
- IDE Arduino 1.8.9

## Simulating Logic Gates
This project is a simple way of using the Arduino to simulate the behaviour of logic gates.

## Code - Example 6

<pre>
<font color="#00979c">int</font> <font color="#000000">pinOut</font> <font color="#434f54">=</font> <font color="#000000">7</font><font color="#000000">;</font>
<font color="#00979c">int</font> <font color="#000000">pinA</font> <font color="#434f54">=</font> <font color="#000000">8</font><font color="#000000">;</font>
<font color="#00979c">int</font> <font color="#000000">pinB</font> <font color="#434f54">=</font> <font color="#000000">9</font><font color="#000000">;</font>

<font color="#00979c">void</font> <font color="#5e6d03">setup</font><font color="#000000">(</font><font color="#000000">)</font>
<font color="#000000">{</font>
 &nbsp;<font color="#d35400">pinMode</font><font color="#000000">(</font><font color="#000000">pinOut</font><font color="#434f54">,</font> <font color="#00979c">OUTPUT</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#d35400">pinMode</font><font color="#000000">(</font><font color="#000000">pinA</font><font color="#434f54">,</font> <font color="#00979c">INPUT</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#d35400">pinMode</font><font color="#000000">(</font><font color="#000000">pinB</font><font color="#434f54">,</font> <font color="#00979c">INPUT</font><font color="#000000">)</font><font color="#000000">;</font>
<font color="#000000">}</font>
<font color="#00979c">void</font> <font color="#5e6d03">loop</font><font color="#000000">(</font><font color="#000000">)</font>
<font color="#000000">{</font>
 &nbsp;<font color="#00979c">boolean</font> <font color="#000000">pinAState</font> <font color="#434f54">=</font> <font color="#d35400">digitalRead</font><font color="#000000">(</font><font color="#000000">pinA</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#00979c">boolean</font> <font color="#000000">pinBState</font> <font color="#434f54">=</font> <font color="#d35400">digitalRead</font><font color="#000000">(</font><font color="#000000">pinB</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#00979c">boolean</font> <font color="#000000">pinOutState</font><font color="#000000">;</font>
 &nbsp;<font color="#95a5a6">&#47;*</font>
<font color="#95a5a6"> &nbsp;&nbsp;&nbsp;&#47;&#47;or</font>
<font color="#95a5a6"> &nbsp;&nbsp;&nbsp;pinOutState = pinAState | pinBState;</font>
<font color="#95a5a6"></font>
<font color="#95a5a6"> &nbsp;&nbsp;&nbsp;&#47;&#47; not</font>
<font color="#95a5a6"> &nbsp;&nbsp;&nbsp;pinOutState = !pinAState;</font>
<font color="#95a5a6"></font>
<font color="#95a5a6"> &nbsp;&nbsp;&nbsp;&#47;&#47; XOR</font>
<font color="#95a5a6"> &nbsp;&nbsp;&nbsp;pinOutState = pinAState ^ pinBState;</font>
<font color="#95a5a6"></font>
<font color="#95a5a6"> &nbsp;&nbsp;&nbsp;&#47;&#47;NAND</font>
<font color="#95a5a6"> &nbsp;&nbsp;&nbsp;pinOutState = !(pinAState &amp; pinBState);</font>
<font color="#95a5a6"></font>
<font color="#95a5a6"> &nbsp;&nbsp;&nbsp;&#47;&#47;NOR</font>
<font color="#95a5a6"> &nbsp;&nbsp;&nbsp;pinOutState = !(pinAState | pinBState);</font>
<font color="#95a5a6"> &nbsp;*&#47;</font>
 &nbsp;<font color="#434f54">&#47;&#47; and</font>
 &nbsp;<font color="#000000">pinOutState</font> <font color="#434f54">=</font> <font color="#000000">pinAState</font> <font color="#434f54">&amp;</font> <font color="#000000">pinBState</font><font color="#000000">;</font>
 &nbsp;<font color="#d35400">digitalWrite</font><font color="#000000">(</font><font color="#000000">pinOut</font><font color="#434f54">,</font> <font color="#000000">pinOutState</font><font color="#000000">)</font><font color="#000000">;</font>
<font color="#000000">}</font>

</pre>

## Video - Example 6

[![Watch the video](https://img.youtube.com/vi/Xi3fJnjWo5A/maxresdefault.jpg)](https://youtu.be/Xi3fJnjWo5A)

## Requirements for simulating logic gates

- Arduino Uno R3
- USB cable
- Breadboard
- 1 x LEDs Yellow
- 2 x LED Red
- 3 x 330 Ohm Resistors
- 2 x 10 KOhm Resistors
- 2 x Pushbuttons
- IDE Arduino 1.8.9
- 10 Jumpers

## Playing A Tune
C4 is middle C. The large number of lines at the beginning of the code define the frequencies of different notes. n_C4 is middle C - you have a few octaves either side of that to play with. The song is defined in 3 variables. The first is an array of the notes. That is matched with the beats for each note. The numbers you use depend on the tune you play and the mixture of note lengths it has. You also have a variable defining the length of the tune.

## Code - Example 7

<pre>
<font color="#434f54">&#47;&#47; constants for notes - C4 is middle C.</font>
<font color="#00979c">const</font> <font color="#00979c">int</font> <font color="#000000">n_C3</font> <font color="#434f54">=</font> <font color="#000000">131</font><font color="#000000">;</font>
<font color="#00979c">const</font> <font color="#00979c">int</font> <font color="#000000">n_CS3</font> <font color="#434f54">=</font> <font color="#000000">139</font><font color="#000000">;</font>
<font color="#00979c">const</font> <font color="#00979c">int</font> <font color="#000000">n_D3</font> <font color="#434f54">=</font> <font color="#000000">147</font><font color="#000000">;</font>
<font color="#00979c">const</font> <font color="#00979c">int</font> <font color="#000000">n_DS3</font> <font color="#434f54">=</font> <font color="#000000">156</font><font color="#000000">;</font>
<font color="#00979c">const</font> <font color="#00979c">int</font> <font color="#000000">n_E3</font> <font color="#434f54">=</font> <font color="#000000">165</font><font color="#000000">;</font>
<font color="#00979c">const</font> <font color="#00979c">int</font> <font color="#000000">n_F3</font> <font color="#434f54">=</font> <font color="#000000">175</font><font color="#000000">;</font>
<font color="#00979c">const</font> <font color="#00979c">int</font> <font color="#000000">n_FS3</font> <font color="#434f54">=</font> <font color="#000000">185</font><font color="#000000">;</font>
<font color="#00979c">const</font> <font color="#00979c">int</font> <font color="#000000">n_G3</font> <font color="#434f54">=</font> <font color="#000000">196</font><font color="#000000">;</font>
<font color="#00979c">const</font> <font color="#00979c">int</font> <font color="#000000">n_GS3</font> <font color="#434f54">=</font> <font color="#000000">208</font><font color="#000000">;</font>
<font color="#00979c">const</font> <font color="#00979c">int</font> <font color="#000000">n_A3</font> <font color="#434f54">=</font> <font color="#000000">220</font><font color="#000000">;</font>
<font color="#00979c">const</font> <font color="#00979c">int</font> <font color="#000000">n_AS3</font> <font color="#434f54">=</font> <font color="#000000">233</font><font color="#000000">;</font>
<font color="#00979c">const</font> <font color="#00979c">int</font> <font color="#000000">n_B3</font> <font color="#434f54">=</font> <font color="#000000">247</font><font color="#000000">;</font>
<font color="#00979c">const</font> <font color="#00979c">int</font> <font color="#000000">n_C4</font> <font color="#434f54">=</font> <font color="#000000">262</font><font color="#000000">;</font>
<font color="#00979c">const</font> <font color="#00979c">int</font> <font color="#000000">n_CS4</font> <font color="#434f54">=</font> <font color="#000000">277</font><font color="#000000">;</font>
<font color="#00979c">const</font> <font color="#00979c">int</font> <font color="#000000">n_D4</font> <font color="#434f54">=</font> <font color="#000000">294</font><font color="#000000">;</font>
<font color="#00979c">const</font> <font color="#00979c">int</font> <font color="#000000">n_DS4</font> <font color="#434f54">=</font> <font color="#000000">311</font><font color="#000000">;</font>
<font color="#00979c">const</font> <font color="#00979c">int</font> <font color="#000000">n_E4</font> <font color="#434f54">=</font> <font color="#000000">330</font><font color="#000000">;</font>
<font color="#00979c">const</font> <font color="#00979c">int</font> <font color="#000000">n_F4</font> <font color="#434f54">=</font> <font color="#000000">349</font><font color="#000000">;</font>
<font color="#00979c">const</font> <font color="#00979c">int</font> <font color="#000000">n_FS4</font> <font color="#434f54">=</font> <font color="#000000">370</font><font color="#000000">;</font>
<font color="#00979c">const</font> <font color="#00979c">int</font> <font color="#000000">n_G4</font> <font color="#434f54">=</font> <font color="#000000">392</font><font color="#000000">;</font>
<font color="#00979c">const</font> <font color="#00979c">int</font> <font color="#000000">n_GS4</font> <font color="#434f54">=</font> <font color="#000000">415</font><font color="#000000">;</font>
<font color="#00979c">const</font> <font color="#00979c">int</font> <font color="#000000">n_A4</font> <font color="#434f54">=</font> <font color="#000000">440</font><font color="#000000">;</font>
<font color="#00979c">const</font> <font color="#00979c">int</font> <font color="#000000">n_AS4</font> <font color="#434f54">=</font> <font color="#000000">466</font><font color="#000000">;</font>
<font color="#00979c">const</font> <font color="#00979c">int</font> <font color="#000000">n_B4</font> <font color="#434f54">=</font> <font color="#000000">494</font><font color="#000000">;</font>
<font color="#00979c">const</font> <font color="#00979c">int</font> <font color="#000000">n_C5</font> <font color="#434f54">=</font> <font color="#000000">523</font><font color="#000000">;</font>
<font color="#00979c">const</font> <font color="#00979c">int</font> <font color="#000000">n_CS5</font> <font color="#434f54">=</font> <font color="#000000">554</font><font color="#000000">;</font>
<font color="#00979c">const</font> <font color="#00979c">int</font> <font color="#000000">n_D5</font> <font color="#434f54">=</font> <font color="#000000">587</font><font color="#000000">;</font>
<font color="#00979c">const</font> <font color="#00979c">int</font> <font color="#000000">n_DS5</font> <font color="#434f54">=</font> <font color="#000000">622</font><font color="#000000">;</font>
<font color="#00979c">const</font> <font color="#00979c">int</font> <font color="#000000">n_E5</font> <font color="#434f54">=</font> <font color="#000000">659</font><font color="#000000">;</font>
<font color="#00979c">const</font> <font color="#00979c">int</font> <font color="#000000">n_F5</font> <font color="#434f54">=</font> <font color="#000000">698</font><font color="#000000">;</font>
<font color="#00979c">const</font> <font color="#00979c">int</font> <font color="#000000">n_FS5</font> <font color="#434f54">=</font> <font color="#000000">740</font><font color="#000000">;</font>
<font color="#00979c">const</font> <font color="#00979c">int</font> <font color="#000000">n_G5</font> <font color="#434f54">=</font> <font color="#000000">784</font><font color="#000000">;</font>
<font color="#00979c">const</font> <font color="#00979c">int</font> <font color="#000000">n_GS5</font> <font color="#434f54">=</font> <font color="#000000">831</font><font color="#000000">;</font>
<font color="#00979c">const</font> <font color="#00979c">int</font> <font color="#000000">n_A5</font> <font color="#434f54">=</font> <font color="#000000">880</font><font color="#000000">;</font>
<font color="#00979c">const</font> <font color="#00979c">int</font> <font color="#000000">n_AS5</font> <font color="#434f54">=</font> <font color="#000000">932</font><font color="#000000">;</font>
<font color="#00979c">const</font> <font color="#00979c">int</font> <font color="#000000">n_B5</font> <font color="#434f54">=</font> <font color="#000000">988</font><font color="#000000">;</font>
<font color="#00979c">const</font> <font color="#00979c">int</font> <font color="#000000">n_C6</font> <font color="#434f54">=</font> <font color="#000000">1047</font><font color="#000000">;</font>
<font color="#00979c">const</font> <font color="#00979c">int</font> <font color="#000000">n_CS6</font> <font color="#434f54">=</font> <font color="#000000">1109</font><font color="#000000">;</font>
<font color="#00979c">const</font> <font color="#00979c">int</font> <font color="#000000">n_D6</font> <font color="#434f54">=</font> <font color="#000000">1175</font><font color="#000000">;</font>
<font color="#00979c">const</font> <font color="#00979c">int</font> <font color="#000000">n_DS6</font> <font color="#434f54">=</font> <font color="#000000">1245</font><font color="#000000">;</font>
<font color="#00979c">const</font> <font color="#00979c">int</font> <font color="#000000">n_E6</font> <font color="#434f54">=</font> <font color="#000000">1319</font><font color="#000000">;</font>
<font color="#00979c">const</font> <font color="#00979c">int</font> <font color="#000000">n_F6</font> <font color="#434f54">=</font> <font color="#000000">1397</font><font color="#000000">;</font>
<font color="#00979c">const</font> <font color="#00979c">int</font> <font color="#000000">n_FS6</font> <font color="#434f54">=</font> <font color="#000000">1480</font><font color="#000000">;</font>
<font color="#00979c">const</font> <font color="#00979c">int</font> <font color="#000000">n_G6</font> <font color="#434f54">=</font> <font color="#000000">1568</font><font color="#000000">;</font>
<font color="#00979c">const</font> <font color="#00979c">int</font> <font color="#000000">n_GS6</font> <font color="#434f54">=</font> <font color="#000000">1661</font><font color="#000000">;</font>
<font color="#00979c">const</font> <font color="#00979c">int</font> <font color="#000000">n_A6</font> <font color="#434f54">=</font> <font color="#000000">1760</font><font color="#000000">;</font>
<font color="#00979c">const</font> <font color="#00979c">int</font> <font color="#000000">n_AS6</font> <font color="#434f54">=</font> <font color="#000000">1865</font><font color="#000000">;</font>
<font color="#00979c">const</font> <font color="#00979c">int</font> <font color="#000000">n_B6</font> <font color="#434f54">=</font> <font color="#000000">1976</font><font color="#000000">;</font>

<font color="#00979c">const</font> <font color="#00979c">int</font> <font color="#000000">rest</font> <font color="#434f54">=</font> <font color="#000000">0</font><font color="#000000">;</font>
<font color="#00979c">const</font> <font color="#00979c">int</font> <font color="#000000">buzzerPin</font> <font color="#434f54">=</font> <font color="#000000">9</font><font color="#000000">;</font>
<font color="#00979c">int</font> <font color="#000000">tempo</font> <font color="#434f54">=</font> <font color="#000000">150</font><font color="#000000">;</font>



<font color="#00979c">int</font> <font color="#000000">tune</font><font color="#000000">[</font><font color="#000000">]</font> <font color="#434f54">=</font> <font color="#000000">{</font><font color="#000000">n_C4</font><font color="#434f54">,</font> <font color="#000000">n_C4</font><font color="#434f54">,</font> <font color="#000000">n_G4</font><font color="#434f54">,</font> <font color="#000000">n_G4</font><font color="#434f54">,</font> <font color="#000000">n_A4</font><font color="#434f54">,</font> <font color="#000000">n_A4</font><font color="#434f54">,</font> <font color="#000000">n_G4</font><font color="#434f54">,</font> <font color="#000000">n_F4</font><font color="#434f54">,</font> <font color="#000000">n_F4</font><font color="#434f54">,</font> <font color="#000000">n_E4</font><font color="#434f54">,</font> <font color="#000000">n_E4</font><font color="#434f54">,</font> <font color="#000000">n_D4</font><font color="#434f54">,</font> <font color="#000000">n_D4</font><font color="#434f54">,</font> <font color="#000000">n_C4</font><font color="#000000">}</font><font color="#000000">;</font>
<font color="#00979c">int</font> <font color="#000000">beats</font><font color="#000000">[</font><font color="#000000">]</font> <font color="#434f54">=</font> <font color="#000000">{</font> <font color="#000000">1</font><font color="#434f54">,</font> <font color="#000000">1</font><font color="#434f54">,</font> <font color="#000000">1</font><font color="#434f54">,</font> <font color="#000000">1</font><font color="#434f54">,</font> <font color="#000000">1</font><font color="#434f54">,</font> <font color="#000000">1</font><font color="#434f54">,</font> <font color="#000000">2</font><font color="#434f54">,</font> <font color="#000000">1</font><font color="#434f54">,</font> <font color="#000000">1</font><font color="#434f54">,</font> <font color="#000000">1</font><font color="#434f54">,</font> <font color="#000000">1</font><font color="#434f54">,</font> <font color="#000000">1</font><font color="#434f54">,</font> <font color="#000000">1</font><font color="#434f54">,</font> <font color="#000000">2</font> <font color="#000000">}</font><font color="#000000">;</font>
<font color="#00979c">int</font> <font color="#000000">tunelength</font> <font color="#434f54">=</font> <font color="#000000">14</font><font color="#000000">;</font>

<font color="#00979c">void</font> <font color="#5e6d03">setup</font><font color="#000000">(</font><font color="#000000">)</font>
<font color="#000000">{</font>
 &nbsp;<font color="#d35400">pinMode</font><font color="#000000">(</font><font color="#000000">buzzerPin</font><font color="#434f54">,</font> <font color="#00979c">OUTPUT</font><font color="#000000">)</font><font color="#000000">;</font>

<font color="#000000">}</font>

<font color="#00979c">void</font> <font color="#5e6d03">loop</font><font color="#000000">(</font><font color="#000000">)</font>
<font color="#000000">{</font>
 &nbsp;<font color="#5e6d03">for</font> <font color="#000000">(</font><font color="#00979c">int</font> <font color="#000000">i</font> <font color="#434f54">=</font> <font color="#000000">0</font><font color="#000000">;</font> <font color="#000000">i</font> <font color="#434f54">&lt;</font> <font color="#000000">tunelength</font><font color="#000000">;</font> <font color="#000000">i</font><font color="#434f54">++</font><font color="#000000">)</font>
 &nbsp;<font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;<font color="#5e6d03">if</font> <font color="#000000">(</font><font color="#000000">tune</font><font color="#000000">[</font><font color="#000000">i</font><font color="#000000">]</font> <font color="#434f54">==</font> <font color="#000000">rest</font><font color="#000000">)</font>
 &nbsp;&nbsp;&nbsp;<font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#d35400">delay</font><font color="#000000">(</font><font color="#000000">beats</font><font color="#000000">[</font><font color="#000000">i</font><font color="#000000">]</font><font color="#434f54">*</font><font color="#000000">tempo</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;<font color="#000000">}</font>
 &nbsp;&nbsp;&nbsp;<font color="#5e6d03">else</font>
 &nbsp;&nbsp;&nbsp;<font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#d35400">tone</font><font color="#000000">(</font><font color="#000000">buzzerPin</font><font color="#434f54">,</font> <font color="#000000">tune</font><font color="#000000">[</font><font color="#000000">i</font><font color="#000000">]</font><font color="#434f54">,</font> <font color="#000000">beats</font><font color="#000000">[</font><font color="#000000">i</font><font color="#000000">]</font><font color="#434f54">*</font><font color="#000000">tempo</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#d35400">delay</font><font color="#000000">(</font><font color="#000000">beats</font><font color="#000000">[</font><font color="#000000">i</font><font color="#000000">]</font><font color="#434f54">*</font><font color="#000000">tempo</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;<font color="#000000">}</font>
 &nbsp;&nbsp;&nbsp;<font color="#d35400">delay</font><font color="#000000">(</font><font color="#000000">tempo</font> <font color="#434f54">&#47;</font> <font color="#000000">10</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#000000">}</font>
 &nbsp;<font color="#5e6d03">while</font> <font color="#000000">(</font><font color="#00979c">true</font><font color="#000000">)</font> <font color="#000000">{</font><font color="#000000">}</font>
<font color="#000000">}</font>

</pre>

## Video - Example 7

[![Watch the video](https://img.youtube.com/vi/4WrbrDq0Dwo/maxresdefault.jpg)](https://youtu.be/4WrbrDq0Dwo)

## Requirements for Playing A Tune

- Arduino Uno R3
- 1 X Buzzer
- 3 x Jumpers
- Breadboard
- USB cable
- IDE Arduino 1.8.9

## Morse Code - Sounder
In this project, you make a circuit that you can use to play around with Morse Code. It uses a buzzer and an LED which sound and light when a button is pressed.

## Code - Example 8

<pre>
<font color="#00979c">int</font> <font color="#000000">buzzerPin</font> <font color="#434f54">=</font> <font color="#000000">9</font><font color="#000000">;</font>
<font color="#00979c">int</font> <font color="#000000">buttonPin</font> <font color="#434f54">=</font> <font color="#000000">7</font><font color="#000000">;</font>
<font color="#00979c">int</font> <font color="#000000">ledPin</font> <font color="#434f54">=</font> <font color="#000000">6</font><font color="#000000">;</font>
<font color="#00979c">const</font> <font color="#00979c">int</font> <font color="#000000">toneFreq</font> <font color="#434f54">=</font> <font color="#000000">523</font><font color="#000000">;</font>

<font color="#00979c">void</font> <font color="#5e6d03">setup</font><font color="#000000">(</font><font color="#000000">)</font>
<font color="#000000">{</font>
 &nbsp;<font color="#d35400">pinMode</font><font color="#000000">(</font><font color="#000000">buzzerPin</font><font color="#434f54">,</font> <font color="#00979c">OUTPUT</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#d35400">pinMode</font><font color="#000000">(</font><font color="#000000">ledPin</font><font color="#434f54">,</font> <font color="#00979c">OUTPUT</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#d35400">pinMode</font><font color="#000000">(</font><font color="#000000">buttonPin</font><font color="#434f54">,</font> <font color="#00979c">INPUT</font><font color="#000000">)</font><font color="#000000">;</font>
<font color="#000000">}</font>

<font color="#00979c">void</font> <font color="#5e6d03">loop</font><font color="#000000">(</font><font color="#000000">)</font>
<font color="#000000">{</font>
 &nbsp;<font color="#00979c">int</font> <font color="#000000">buttonState</font> <font color="#434f54">=</font> <font color="#d35400">digitalRead</font><font color="#000000">(</font><font color="#000000">buttonPin</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#5e6d03">if</font> <font color="#000000">(</font><font color="#000000">buttonState</font> <font color="#434f54">==</font> <font color="#00979c">LOW</font><font color="#000000">)</font>
 &nbsp;<font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;<font color="#d35400">digitalWrite</font><font color="#000000">(</font><font color="#000000">ledPin</font><font color="#434f54">,</font> <font color="#00979c">HIGH</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;<font color="#d35400">tone</font><font color="#000000">(</font><font color="#000000">buzzerPin</font><font color="#434f54">,</font> <font color="#000000">toneFreq</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#000000">}</font>
 &nbsp;<font color="#5e6d03">else</font>
 &nbsp;<font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;<font color="#d35400">digitalWrite</font><font color="#000000">(</font><font color="#000000">ledPin</font><font color="#434f54">,</font> <font color="#00979c">LOW</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;<font color="#d35400">noTone</font><font color="#000000">(</font><font color="#000000">buzzerPin</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#000000">}</font>
<font color="#000000">}</font>

</pre>

## Video - Example 8

[![Watch the video](https://img.youtube.com/vi/7WLJn-1XN9s/maxresdefault.jpg)](https://youtu.be/7WLJn-1XN9s)

## Requirements for Morse Code

- Arduino Uno R3
- IDE Arduino 1.8.9
- 1 X Resistor 330 ohms
- 1 X Resistor 10 Kohms
- 7 x Jumpers
- 1 x Pushbutton
- 1 X Breadboard
- 1 X USB cable

## Morse Code - Encoder
Morse Code - Encoder

## Code - Example 9

<pre>
<font color="#00979c">const</font> <font color="#00979c">int</font> <font color="#000000">buzzerPin</font> <font color="#434f54">=</font> <font color="#000000">9</font><font color="#000000">;</font>
<font color="#434f54">&#47;&#47; tone frequency C</font>
<font color="#00979c">const</font> <font color="#00979c">int</font> <font color="#000000">tonefreq</font> <font color="#434f54">=</font> <font color="#000000">523</font><font color="#000000">;</font>

<font color="#434f54">&#47;&#47; constants for tone and rest durations</font>
<font color="#00979c">const</font> <font color="#00979c">int</font> <font color="#000000">dotlength</font> <font color="#434f54">=</font> <font color="#000000">100</font><font color="#000000">;</font>
<font color="#00979c">const</font> <font color="#00979c">int</font> <font color="#000000">dashlength</font> <font color="#434f54">=</font> <font color="#000000">dotlength</font> <font color="#434f54">*</font> <font color="#000000">3</font><font color="#000000">;</font>
<font color="#434f54">&#47;&#47; inter-element gap - between each dot or dash of a letter</font>
<font color="#00979c">const</font> <font color="#00979c">int</font> <font color="#000000">inter</font> <font color="#434f54">=</font> <font color="#000000">dotlength</font><font color="#000000">;</font>
<font color="#434f54">&#47;&#47; letter gap is 3 dots - the inter gap is always added - so this is one fewer</font>
<font color="#00979c">const</font> <font color="#00979c">int</font> <font color="#000000">lgap</font> <font color="#434f54">=</font> <font color="#000000">dotlength</font> <font color="#434f54">*</font> <font color="#000000">2</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47; inter-letter gap</font>
<font color="#434f54">&#47;&#47; word gap is 7 dots - with letter and inter gap already counted, this is -1</font>
<font color="#00979c">const</font> <font color="#00979c">int</font> <font color="#000000">wgap</font> <font color="#434f54">=</font> <font color="#000000">dotlength</font> <font color="#434f54">*</font> <font color="#000000">4</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47;inter-word gap</font>


<font color="#00979c">void</font> <font color="#5e6d03">setup</font><font color="#000000">(</font><font color="#000000">)</font>
<font color="#000000">{</font>
 &nbsp;<font color="#d35400">pinMode</font><font color="#000000">(</font><font color="#000000">buzzerPin</font><font color="#434f54">,</font> <font color="#00979c">OUTPUT</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<b><font color="#d35400">Serial</font></b><font color="#434f54">.</font><font color="#d35400">begin</font><font color="#000000">(</font><font color="#000000">9600</font><font color="#000000">)</font><font color="#000000">;</font>
<font color="#000000">}</font>

<font color="#00979c">void</font> <font color="#5e6d03">loop</font><font color="#000000">(</font><font color="#000000">)</font>
<font color="#000000">{</font>
 &nbsp;<font color="#00979c">char</font> <font color="#000000">thischar</font><font color="#000000">;</font>
 &nbsp;<font color="#5e6d03">if</font> <font color="#000000">(</font><b><font color="#d35400">Serial</font></b><font color="#434f54">.</font><font color="#d35400">available</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">)</font>
 &nbsp;<font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47; read a single character</font>
 &nbsp;&nbsp;&nbsp;<font color="#000000">thischar</font> <font color="#434f54">=</font> <b><font color="#d35400">Serial</font></b><font color="#434f54">.</font><font color="#d35400">read</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;<font color="#5e6d03">if</font> <font color="#000000">(</font><font color="#000000">thischar</font> <font color="#434f54">&gt;=</font> <font color="#00979c">&#39;a&#39;</font> <font color="#434f54">&amp;&amp;</font> <font color="#000000">thischar</font> <font color="#434f54">&lt;=</font> <font color="#00979c">&#39;z&#39;</font><font color="#000000">)</font>
 &nbsp;&nbsp;&nbsp;<font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47; convert to upper case</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">thischar</font> <font color="#434f54">=</font> <font color="#000000">thischar</font> <font color="#434f54">-</font> <font color="#000000">32</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;<font color="#000000">}</font>
 &nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47; swap for a space if not in A-Z</font>
 &nbsp;&nbsp;&nbsp;<font color="#5e6d03">if</font> <font color="#000000">(</font><font color="#000000">thischar</font> <font color="#434f54">&lt;</font> <font color="#000000">65</font> <font color="#434f54">||</font> <font color="#000000">thischar</font> <font color="#434f54">&gt;</font> <font color="#000000">90</font><font color="#000000">)</font>
 &nbsp;&nbsp;&nbsp;<font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">thischar</font> <font color="#434f54">=</font> <font color="#00979c">&#39; &#39;</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;<font color="#000000">}</font>
 &nbsp;&nbsp;&nbsp;<font color="#000000">soundLetter</font><font color="#000000">(</font><font color="#000000">thischar</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;<font color="#d35400">delay</font><font color="#000000">(</font><font color="#000000">lgap</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#000000">}</font>
<font color="#000000">}</font>

<font color="#00979c">void</font> <font color="#000000">dot</font><font color="#000000">(</font><font color="#000000">)</font>
<font color="#000000">{</font>
 &nbsp;<font color="#434f54">&#47;&#47; play a dot</font>
 &nbsp;<font color="#d35400">tone</font><font color="#000000">(</font><font color="#000000">buzzerPin</font><font color="#434f54">,</font> <font color="#000000">tonefreq</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#d35400">delay</font><font color="#000000">(</font><font color="#000000">dotlength</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#d35400">noTone</font><font color="#000000">(</font><font color="#000000">buzzerPin</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#d35400">delay</font><font color="#000000">(</font><font color="#000000">inter</font><font color="#000000">)</font><font color="#000000">;</font>
<font color="#000000">}</font>

<font color="#00979c">void</font> <font color="#000000">dash</font><font color="#000000">(</font><font color="#000000">)</font>
<font color="#000000">{</font>
 &nbsp;<font color="#434f54">&#47;&#47; play a dash</font>
 &nbsp;<font color="#d35400">tone</font><font color="#000000">(</font><font color="#000000">buzzerPin</font><font color="#434f54">,</font> <font color="#000000">tonefreq</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#d35400">delay</font><font color="#000000">(</font><font color="#000000">dashlength</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#d35400">noTone</font><font color="#000000">(</font><font color="#000000">buzzerPin</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#d35400">delay</font><font color="#000000">(</font><font color="#000000">inter</font><font color="#000000">)</font><font color="#000000">;</font>
<font color="#000000">}</font>

<font color="#00979c">void</font> <font color="#000000">soundLetter</font><font color="#000000">(</font><font color="#00979c">char</font> <font color="#000000">letter</font><font color="#000000">)</font>
<font color="#000000">{</font>
 &nbsp;<font color="#434f54">&#47;&#47; letters are in order of frequency</font>
 &nbsp;<font color="#5e6d03">switch</font> <font color="#000000">(</font><font color="#000000">letter</font><font color="#000000">)</font>
 &nbsp;<font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;<font color="#5e6d03">case</font> <font color="#00979c">&#39;E&#39;</font><font color="#434f54">:</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">dot</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#5e6d03">return</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;<font color="#5e6d03">case</font> <font color="#00979c">&#39;T&#39;</font><font color="#434f54">:</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">dash</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#5e6d03">return</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;<font color="#5e6d03">case</font> <font color="#00979c">&#39;A&#39;</font><font color="#434f54">:</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">dot</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">dash</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#5e6d03">return</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;<font color="#5e6d03">case</font> <font color="#00979c">&#39;O&#39;</font><font color="#434f54">:</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">dash</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">dash</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">dash</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#5e6d03">return</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;<font color="#5e6d03">case</font> <font color="#00979c">&#39;I&#39;</font><font color="#434f54">:</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">dot</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">dot</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#5e6d03">return</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;<font color="#5e6d03">case</font> <font color="#00979c">&#39;N&#39;</font><font color="#434f54">:</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">dash</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">dot</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#5e6d03">return</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;<font color="#5e6d03">case</font> <font color="#00979c">&#39;S&#39;</font><font color="#434f54">:</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">dot</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">dot</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">dot</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#5e6d03">return</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;<font color="#5e6d03">case</font> <font color="#00979c">&#39;H&#39;</font><font color="#434f54">:</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">dot</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">dot</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">dot</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">dot</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#5e6d03">return</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;<font color="#5e6d03">case</font> <font color="#00979c">&#39;R&#39;</font><font color="#434f54">:</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">dot</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">dash</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">dot</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#5e6d03">return</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;<font color="#5e6d03">case</font> <font color="#00979c">&#39;D&#39;</font><font color="#434f54">:</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">dash</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">dot</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">dot</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#5e6d03">return</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;<font color="#5e6d03">case</font> <font color="#00979c">&#39;L&#39;</font><font color="#434f54">:</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">dot</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">dash</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">dot</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">dot</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#5e6d03">return</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;<font color="#5e6d03">case</font> <font color="#00979c">&#39;C&#39;</font><font color="#434f54">:</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">dash</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">dot</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">dash</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">dot</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#5e6d03">return</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;<font color="#5e6d03">case</font> <font color="#00979c">&#39;U&#39;</font><font color="#434f54">:</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">dot</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">dot</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">dash</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#5e6d03">return</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;<font color="#5e6d03">case</font> <font color="#00979c">&#39;M&#39;</font><font color="#434f54">:</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">dash</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">dash</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#5e6d03">return</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;<font color="#5e6d03">case</font> <font color="#00979c">&#39;W&#39;</font><font color="#434f54">:</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">dot</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">dash</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">dash</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#5e6d03">return</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;<font color="#5e6d03">case</font> <font color="#00979c">&#39;F&#39;</font><font color="#434f54">:</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">dot</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">dot</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">dash</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">dot</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#5e6d03">return</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;<font color="#5e6d03">case</font> <font color="#00979c">&#39;G&#39;</font><font color="#434f54">:</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">dash</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">dash</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">dot</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#5e6d03">return</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;<font color="#5e6d03">case</font> <font color="#00979c">&#39;Y&#39;</font><font color="#434f54">:</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">dash</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">dot</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">dash</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">dash</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#5e6d03">return</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;<font color="#5e6d03">case</font> <font color="#00979c">&#39;P&#39;</font><font color="#434f54">:</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">dot</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">dash</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">dash</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">dot</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#5e6d03">return</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;<font color="#5e6d03">case</font> <font color="#00979c">&#39;B&#39;</font><font color="#434f54">:</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">dash</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">dot</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">dot</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">dot</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#5e6d03">return</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;<font color="#5e6d03">case</font> <font color="#00979c">&#39;V&#39;</font><font color="#434f54">:</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">dot</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">dot</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">dot</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">dash</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#5e6d03">return</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;<font color="#5e6d03">case</font> <font color="#00979c">&#39;K&#39;</font><font color="#434f54">:</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">dash</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">dot</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">dash</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#5e6d03">return</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;<font color="#5e6d03">case</font> <font color="#00979c">&#39;J&#39;</font><font color="#434f54">:</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">dot</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">dash</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">dash</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">dash</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#5e6d03">return</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;<font color="#5e6d03">case</font> <font color="#00979c">&#39;X&#39;</font><font color="#434f54">:</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">dash</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">dot</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">dot</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">dash</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#5e6d03">return</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;<font color="#5e6d03">case</font> <font color="#00979c">&#39;Q&#39;</font><font color="#434f54">:</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">dash</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">dash</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">dot</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">dash</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#5e6d03">return</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;<font color="#5e6d03">case</font> <font color="#00979c">&#39;Z&#39;</font><font color="#434f54">:</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">dash</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">dash</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">dot</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">dot</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#5e6d03">return</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;<font color="#5e6d03">case</font> <font color="#00979c">&#39; &#39;</font><font color="#434f54">:</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#d35400">delay</font><font color="#000000">(</font><font color="#000000">wgap</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#5e6d03">return</font><font color="#000000">;</font>
 &nbsp;<font color="#000000">}</font>
<font color="#000000">}</font>

</pre>

## Video - Example 9

[![Watch the video](https://img.youtube.com/vi/FHYAkZ3gY0g/maxresdefault.jpg)](https://youtu.be/FHYAkZ3gY0g)

## Requirements for Morse Code Encoder

- Arduino Uno R3
- IDE Arduino 1.8.9
- 1 X Buzzer
- 4 x Jumpers
- 1 X Breadboard
- 1 X USB cable

## Brightness control
Brightness control

## Code - Example 10

<pre>
<font color="#434f54">&#47;&#47;Controls the brightness of an LED at the frequency induced by the potentiometer.</font>
<font color="#00979c">int</font> <font color="#000000">pot</font> <font color="#434f54">=</font> <font color="#000000">1</font><font color="#000000">;</font>
<font color="#00979c">int</font> <font color="#000000">led</font> <font color="#434f54">=</font> <font color="#000000">9</font><font color="#000000">;</font>
<font color="#00979c">int</font> <font color="#000000">valor</font> <font color="#434f54">=</font> <font color="#000000">0</font><font color="#000000">;</font>
<font color="#00979c">void</font> <font color="#5e6d03">setup</font><font color="#000000">(</font><font color="#000000">)</font> <font color="#000000">{</font>
 &nbsp;<b><font color="#d35400">Serial</font></b><font color="#434f54">.</font><font color="#d35400">begin</font><font color="#000000">(</font><font color="#000000">9600</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#d35400">pinMode</font><font color="#000000">(</font><font color="#000000">led</font><font color="#434f54">,</font> <font color="#00979c">OUTPUT</font><font color="#000000">)</font><font color="#000000">;</font>
<font color="#000000">}</font>
<font color="#00979c">void</font> <font color="#5e6d03">loop</font><font color="#000000">(</font><font color="#000000">)</font> <font color="#000000">{</font>
 &nbsp;<font color="#000000">valor</font> <font color="#434f54">=</font> <font color="#d35400">analogRead</font><font color="#000000">(</font><font color="#000000">pot</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<b><font color="#d35400">Serial</font></b><font color="#434f54">.</font><font color="#d35400">println</font><font color="#000000">(</font><font color="#000000">valor</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#5e6d03">if</font> <font color="#000000">(</font><font color="#000000">valor</font> <font color="#434f54">&gt;</font> <font color="#000000">0</font><font color="#000000">)</font> <font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;<font color="#d35400">analogWrite</font><font color="#000000">(</font><font color="#000000">led</font><font color="#434f54">,</font> <font color="#000000">(</font><font color="#000000">valor</font> <font color="#434f54">&#47;</font> <font color="#000000">4</font><font color="#000000">)</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#000000">}</font>
<font color="#000000">}</font>

</pre>

## Video - Example 10

[![Watch the video](https://img.youtube.com/vi/XoKmqiFpmNY/maxresdefault.jpg)](https://youtu.be/XoKmqiFpmNY)

## Requirements for brightness control

- Arduino Uno R3
- IDE Arduino 1.8.9
- 1 X Potentiometer 10 KOhms
- 5 x Jumpers
- 1 X Breadboard
- 1 X USB cable

## References

[1] 01 – PISCA LED, uel, http://www.uel.br/pessoal/ernesto/arduino/01_pisca_led.pdf, May 21, 2019

[2] MultiWingSpan, http://www.multiwingspan.co.uk/arduino.php, May 23, 2019

[3] Potenciômetro, Prof. Cláudio Oliveira and Prof. Humberto Zanetti, Fatec Jundiaí, http://www.fatecjd.edu.br/fatecino/arq_projetos/04-Projeto-2-Potenciometro.pdf, May 29, 2019

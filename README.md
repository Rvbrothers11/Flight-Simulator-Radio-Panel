# Flight-Simulator-Radio-Panel


**Short Description:**
The flight simulator radio panel is a product based on the radio panels that are integrated in real world aircrafts todday. The radio panel is controlled using an Arduino Nano which gets input from the cherry MX switches and rotary encoder and sends it to the online simulator (Microsoft Flight Simulator 2024) via USB.

**How to use:**
Using the radio panel is very simple. Just connect the arduino nano to the laptop via USB which already has the code imported and run the simulator. The simulator will then detect the radio panel as a flight sim hardware and then you will be able to edit which button on the radio panel does what. The rotary encoder helps changing frequency in the radio panel which helps pilots connect to different air traffic controllers across the globe. The buttons help switch between the 2 radios as a method for selecting 1 as the main frequency and the other as a back up or transfer frequency. 

**Why I made the project:**
From the age of 10 I have been flying planes on simulators. From mobile phones to roblox to Xplane 11 and even motion simulators. Unfortunately, I do not have access to motion simulators on a daily basis which is why I want to enhance my in home flight experience. To do this I wish to make my own flight simulator hardware which brings out the engineer in me and gives me more motivation and satisfaction in the flying I do in the sim. 


A USB connected radio panel for flight simulators such as MSFS, X-Plane, Prepar 3D
<img width="1431" height="994" alt="image" src="https://github.com/user-attachments/assets/5a17e3d7-ba86-422c-b553-a3560ce51adc" />
<img width="2000" height="1250" alt="image" src="https://github.com/user-attachments/assets/4adfde2b-1554-49a9-a97a-96bf1bc2683d" />
<img width="1072" height="518" alt="image" src="https://github.com/user-attachments/assets/5442154b-316a-43ef-a898-3ffd693c92aa" />
<img width="1425" height="767" alt="image" src="https://github.com/user-attachments/assets/1d8be592-bdc6-4123-9d74-a2e3f825e4ae" />
<img width="1395" height="884" alt="image" src="https://github.com/user-attachments/assets/09458dbc-6d3e-4ac2-828d-86904834023f" />

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>BOM Table</title>
    <style>
        table { border-collapse: collapse; width: 100%; font-family: sans-serif; }
        th, td { border: 1px solid #ccc; padding: 8px; text-align: left; }
        th { background-color: #f2f2f2; }
        .highlight-total { font-weight: bold; background-color: #e8f4f8; }
    </style>
</head>
<body>

<table>
  <caption>Bill of Materials (BOM)</caption>
  <thead>
    <tr>
      <th>Items</th>
      <th>Amount</th>
      <th>Single Unit Cost</th>
      <th>Total Cost (₹)</th>
      <th>Total Cost ($)</th>
      <th>Links</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td>4 Digit - 7 segment Display</td>
      <td>2</td>
      <td>₹58</td>
      <td>₹116</td>
      <td>-</td>
      <td><a href="https://robu.in/product/0-56-inch-red-4-digit-7-segment-led-display-cc-12pin/" target="_blank">Link</a></td>
    </tr>
    <tr>
      <td>1 Digit - 7 segment Display</td>
      <td>2</td>
      <td>₹10</td>
      <td>₹20</td>
      <td>-</td>
      <td><a href="https://robu.in/product/0-56-inch-red-1-digit-7-segment-led-display-10pin/" target="_blank">Link</a></td>
    </tr>
    <tr>
      <td>Rotary Encoder</td>
      <td>1</td>
      <td>₹50</td>
      <td>₹50</td>
      <td>-</td>
      <td><a href="https://robu.in/product/m274-360-degree-rotary-encoder-module-brick-sensor/" target="_blank">Link</a></td>
    </tr>
    <tr>
      <td>Cherry Low Profile MX Switches + Keycap</td>
      <td>1 set</td>
      <td>-</td>
      <td>Already Obtained</td>
      <td>-</td>
      <td>-</td>
    </tr>
    <tr>
      <td>Arduino Nano + Cable</td>
      <td>1</td>
      <td>₹273</td>
      <td>₹273</td>
      <td>-</td>
      <td><a href="https://robu.in/product/arduino-nano-board-r3-ch340-chip-with-usb-cable-solderedarduino-nano-r3-usb-cable/" target="_blank">Link</a></td>
    </tr>
    <tr>
      <td>3D Printing Shipping</td>
      <td>1</td>
      <td>$7.00</td>
      <td>-</td>
      <td>$7.00</td>
      <td>-</td>
    </tr>
    <tr class="highlight-total">
      <td colspan="3" style="text-align: right;"><strong>Estimated Total:</strong></td>
      <td><strong>₹782</strong></td>
      <td><strong>~$5 + $7.00 = $12</strong></td>
      <td></td>
    </tr>
  </tbody>
</table>

</body>
</html>

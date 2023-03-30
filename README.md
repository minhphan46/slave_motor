# slave_motor

## Equipment used:

- Arduino Uno R3 Board + CNC Shield V3
- Step motor driver - A8825

## Building the system:

- Slave - Arduino Uno R3 + CNC Shield V3:
- After receiving the signal to classify garbage, the circuit will process and control the motor to rotate in the correct direction to put the garbage into the bin.
- After the process is completed, it will respond to the ESP8266 to notify that a new process can be started.

## Libraries used:

- AccelStepper
- Wire

## IDE Platform:

- PlatformIO
- Arduino IDE

## Installation guide:

- For the Arduino Uno R3 + CNC Shield V3 circuit, download the code, download the appropriate libraries, and then upload the code, adjust the current to match the motor on the A8825 driver.

## NOTE:

- When uploading code, remove the SDA and SCL pins, and after the code is uploaded, they can be plugged back in.
- Connect the motor to the circuit before powering on the CNC Shield V3.

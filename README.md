**# Smart-Elevator-Gate-System**
This project is a smart elevator gate system that automatically opens and closes the door when a person is detected using a PIR sensor. It includes visual (LED) and audio (buzzer) alerts for safety and status indication.
How It Works
PIR Sensor Detection – When a person is detected, the system triggers the door to open.

LED & Buzzer Feedback

🔴 Red LED ON → Door is moving (opening/closing) + Buzzer sounds.
🟢 Green LED ON → Door is fully open + Buzzer turns OFF.
🔴 Red LED ON again → Door is closing + Buzzer sounds.
Both LEDs OFF → Door is fully closed + Buzzer turns OFF.

Servo-Controlled Door – A servo motor opens the door, keeps it open for a set time (e.g., 5 seconds), then closes it automatically.

**Features**
✔ Fully Automatic – No manual button needed.
✔ Safety Alerts – Buzzer warns when the door is moving.
✔ Visual Status (LEDs) – Red (moving) & Green (open) for clear indication.
✔ Adjustable Timing – Door open duration can be modified in the code.
✔ Smooth Servo Control – Ensures smooth door movement.

**Components Used**
PIR Sensor (for motion detection)
Servo Motor (controls the door)
Buzzer (audio alert)
Red & Green LEDs (visual status)
Arduino (or similar microcontroller)

**Ideal For**
Home automation
Smart elevators
Access control systems
Safety-conscious environments

**🔧 Easy to customize & expand!**

**📌 Check out the code, wiring diagram, and setup instructions in the repository!**

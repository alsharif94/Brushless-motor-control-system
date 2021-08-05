# Brushless-motor-control-system
Control the speed and direction of the brushless DC motor by using QS-909 Motor Driver






Problem definition 


In this project, I will deal with a new type of motor, which is brushless motors. We will use this type of motor due to its high torque and high rotational speed compared to brushed motors. In this project I will use QS-909 motor drive to control of the speed and direction of the brushless motor. The motor will be installed on the axis of the tire, which in turn will be at the base of the robot to move it and I will program the Arduino to do this task. 

Required Task 

•	Program the Arduino to control the speed and direction of the brushless DC motor by using QS-909 motor drive 




Literature review

Brushless DC motor 
A brushless motor is a synchronous motor that uses an electronic commutator instead of the mechanical commutator found in brushed motors. Brushless motors, compared to the same brushes, have several advantages, such as higher efficiency, lower use of electrical energy, longer life, and other advantages. but a microcontroller and other electronic circuit must be used for the motor to function properly.


![image](https://user-images.githubusercontent.com/85449693/128339530-857d30dd-7cc8-4f3e-b3bc-b12019be87d8.png)


Brushless DC motor control 

•	Three Phase Bridge 


Since brushless motors do not have a mechanical commutator that allows them to change the direct voltage to an alternating voltage, we must use three phase bridge that allows us to do this, which is a power electronic circuit called an inverter and the circuit is connected to the microcontroller that sends PWM signal to the bridge. In the commercial markets, there are many ready-made driver modules that enable us to control the speed and direction of the brushless DC motors. 

![image](https://user-images.githubusercontent.com/85449693/128339879-50e0abaf-79c2-4b2e-aca7-9dda32007849.png)


•	Electronic Speed Control (ESC) 


![image](https://user-images.githubusercontent.com/85449693/128339959-e1a6651c-d4b5-4a3a-b814-99d00fcb2df3.png)

![image](https://user-images.githubusercontent.com/85449693/128339989-13330b25-2942-4b88-a02a-d20b6bbaed85.png)


•	DC 5V-12V Brushless driver board control 


![image](https://user-images.githubusercontent.com/85449693/128340074-834b408e-ee08-4c07-9d46-d4a201db027b.png)


•	QS-909 BLDC Motor Driver 

![image](https://user-images.githubusercontent.com/85449693/128340121-1a0badc2-f1f2-4974-95bc-f3f33231b9d8.png)


Features and specifications

1.	Low cost
2.	Used to control the speed and direction of the BLDC motor
3.	Easy to program and implement
4.	Contains heat sink
5.	12V to 36V, 500W
6.	It comes in two different types: Motor Hall sensor input and sensor less 


QS-909 Motor Driver with hall sensor input 

![image](https://user-images.githubusercontent.com/85449693/128340266-66057e6a-3ee3-48f7-bd96-4f04214df6d4.png)

QS-909 Motor Driver Sensorless  


![image](https://user-images.githubusercontent.com/85449693/128340307-d35cb656-24d6-43fa-8077-f7f0aee69501.png)

Schematic diagrams of QS-909 

![image](https://user-images.githubusercontent.com/85449693/128340361-ba4ad5f5-dc85-42e6-a7f1-05db71fde0d4.png)

![image](https://user-images.githubusercontent.com/85449693/128340385-0b7e4b28-82b7-456a-af46-a3de2d4bbeb9.png)



QS-909 Pinout


![image](https://user-images.githubusercontent.com/85449693/128340430-5525eebf-5627-4809-a675-b7f864df797d.png)


![image](https://user-images.githubusercontent.com/85449693/128340531-93915c07-5504-4881-afa2-c05912b16ce9.png)


Work plan and Implementation


The connection 


![image](https://user-images.githubusercontent.com/85449693/128340629-82946008-7ab7-4404-8b3f-9d67612d48bb.png)


Basic tools
1.	QS-909 BLDC motor Driver
2.	Microcontroller (Arduino Uno) 
3.	 Battery (24V or 36V)
4.	Jumper wires 
5.	Hoverboard wheel
6.	Potentiometer(20KΩ) 

implementation steps

1.	Connect the electrical circuit as shown in the previous picture
2.	Connect the hoverboard wheel wires to the driver as shown in the table of pinout of QS-909
3.	Connect the potentiometer to VR pin of QS-909 to control the BLDC motor speed
4.	Program the Arduino with the code







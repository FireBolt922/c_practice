# Project Description
- In this project STM32 will generate pwm signal and it will capture using STM32 only and then it will display on OLED display and also it will have buttons for menu and enter choice

| Peripheral | Name | pin number | description |
| :---: | :---: | :---: | :---: |
| GPIO Input |	B1	| PC13		
||	Menu	|PB10		
||	Enter|	PB4		
||	Up	|PB5		
||	Down	|PB3		
| I2C |	I2C1_SDA	| PB9		
||I2C1_SCL	|PB8		
|ADC|	ADC1_INI|	PA0		|		
|TIM2	|Timer channel 1|	PA15|	it will generate PWM signal|			
|TIM3|	timer channel 3|	PA4	|Input capture signal	rising
||	timer channel 2	|PC5	|to read PWM	falling

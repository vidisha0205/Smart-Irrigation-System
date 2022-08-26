# Smart-Farm-System
This project stimulates a smart and labour-free method to water plants, and fill water in wells from reservoirs using sensors, actuators and Arduino software. It makes use 4 sensors: Soil Moisture sensor, DHT(Humidity and Temperature) sensor, Raindrop sensor and Water Level sensor. Each of these are connected to an Arduino UNO board, along with the appropriate actuators(relays, buzzers, water pumps). The following codes are run using Arduino Software. 
Components used: Soil Moisture sensor, DHT(Humidity and Temperature) sensor, Raindrop sensor ,Water Level sensor, Arduino UNO Board, jumper wires, water pumps, relays for water pumps, buzzers to act as actuators for temperature(DHT) and Raindrop sensor.
Input-Output Sequence: 1). Soil Moisture Sensor- Input recieved from soil; incase of low soil moisture, water pump would begin pumping water into farm.
2). DHT Sensor: Input recieved from air; buzzer would ring at a certain frequency and count if the temperature crossed 25 degrees Celsius.
3). Raindrop Sensor: Input recieved from a drops of water on sensor(rain), and output is observed as a buzzer(distinct from the previous one) would buzz in a certain frequency(distinct from the previous one) incase of rainfall.
4). Water Level Sensor: Input recieved via water level in well; if water level was observed to be low, the connected water pump would automatically pump water into the well.

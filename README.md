# Capacitive-V1.2-Moisture-Sensor-Testing-ESP8266

The project reads the moisture level from a Capacitive V1.2 Soil Sensor and prints both the raw analog value and the converted moisture percentage to the Serial Monitor using NodeMCU ESP8266 in Arduino IDE (C++).



# 🔌  Connections
| Capacitive Sensor  | ESP8266       |      
| ------------------ |:-------------:|
| VCC                | VIN (or 3.3V) |
| GND                | GND           |
| AOUT               | A0            |



# 🔧 Considerations
• `dryValue` and `wetValue` are dependent based on one's sensor's calibration.

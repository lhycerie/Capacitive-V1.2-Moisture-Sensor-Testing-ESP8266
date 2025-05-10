//Made by lhycerie

const int soilMoisturePin = A0;

// Values are based on own sensor's calibration
const int dryValue = 725; // Dry analog value
const int wetValue = 369; // Wet analog value

void setup() {
  Serial.begin(9600); // Set baud rate
  delay(1500); // Time for Serial Monitor to initialize
}

void loop() {
  // Read the raw analog value
  int sensorValue = analogRead(soilMoisturePin);

  // Map the value to a percentage (100% = wet, 0% = dry)
  int moisturePercent = map(sensorValue, dryValue, wetValue, 0, 100);
  moisturePercent = constrain(moisturePercent, 0, 100);

  // Display raw and percent values
  Serial.print("Raw Analog Reading: ");
  Serial.print(sensorValue);
  Serial.print(" | Soil Moisture: ");
  Serial.print(moisturePercent);
  Serial.println("%");

  delay(1000); // 1 second interval per reading
}

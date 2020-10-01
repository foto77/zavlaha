#include <ESP8266WiFi.h>
const short int BUILTIN_LED1 = 2; //GPIO2

void setup()
{
  Serial.begin(115200);
  Serial.println();
  pinMode(BUILTIN_LED1, OUTPUT); // Initialize the BUILTIN_LED1 pin as an output

  WiFi.begin("MICINA", "chycenejcert");

  Serial.print("Connecting");
  while (WiFi.status() != WL_CONNECTED)
  {
    delay(500);
    Serial.print(".");
  }
  Serial.println();

  Serial.print("Connected, IP address: ");
  Serial.println(WiFi.localIP());
}

void loop() {
  digitalWrite(BUILTIN_LED1, LOW); // Turn the LED ON by making the voltage LOW
  delay(1000); // Wait for a second
  digitalWrite(BUILTIN_LED1, HIGH); // Turn the LED off by making the voltage HIGH
  delay(1 000); // Wait for a second
  }

#include <ESP8266WiFi.h>
#include <FirebaseArduino.h>

#define FIREBASE_HOST ""
#define FIREBASE_AUTH "7zewRdB4eZRQnajMtvyEX6RD3eIS1DFa3dNaQhUz"
#define WIFI_SSID "R-HOME"
#define WIFI_PASSWORD "IshaAdrit07"

bool button_app_tapped;

void setup() {
  Serial.begin(115200);

  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  Serial.print("connecting");
  while (WiFi.status() != WL_CONNECTED)
      {
    Serial.print(".");
    delay(500);
      }
  Serial.println();
  Serial.print("connected: ");
  Serial.println(WiFi.localIP());
  
  Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH);
}

void loop() {
  button_app_tapped = Firebase.getBool("communication/button_app_tapped")
  if button_app_tapped == true {
    Serial.println("button_app_tapped is true");
  } else {
    Serial.println("button_app_tapped is false");
  }
}

#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 64 // OLED display height, in pixels

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

void setup() {
  // initialize OLED with I2C addr 0x3C
  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("SSD1306 allocation failed"));
    for (;;); // Don't proceed, loop forever
  }
  display.clearDisplay();
}

void loop() {
  display.clearDisplay();
  
  display.setTextSize(2); // Increase the font size
  display.setTextColor(WHITE); // Set the font color

  display.setCursor(0,0); // Start at the top left
  display.println("Hayt");
  
  int random_value = random(0, 1023);   // create a random value
  display.print("Value: ");
  display.println(random_value);
  
  display.display(); // Actually display all of the above changes
  delay(1000);
}
In this code, we set up the OLED display in the setup() function and then in the loop() function we clear the display, set the font size and color, print your name and a random value, and finally call display.display() to update the OLED display with the new


Stop generatin
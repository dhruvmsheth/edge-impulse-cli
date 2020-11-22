#include <Arduino_APDS9960.h>


int r, g, b, c, p;
float sum;


void setup()
{
    Serial.begin(115200);
    while(!Serial);

    if(!APDS.begin()) {
        Serial.println("Could not init APDS9960");
        while(1);
    }

}

void loop()
{
  if(!APDS.colorAvailable() || !APDS.proximityAvailable()){}
  else {
    APDS.readColor(r, g, b, c);
    sum = r + g + b;
    p = APDS.readProximity();
  }
    float rr = r / sum, gr = g / sum, br = b / sum;
    Serial.printf("%1.3f,%1.3f,%1.3f\n", rr, gr, br);
}
   

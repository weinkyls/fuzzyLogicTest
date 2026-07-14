#include <stdio.h>
#include <stdint.h>
#include "currentLim.h"
#include "currentLim_terminate.h"
#include "rt_nonfinite.h"

int main(int argc, char **argv)
{
(void)argc;
(void)argv;

// eventually from sensors
uint16_t current_temp = 45;
uint16_t motor_rpm = 5000;
float energy_margin = 0.85f;


float limit = currentLim(current_temp, motor_rpm, energy_margin);
// print to test
printf("Calculated Current Limit: %f\n", limit);

currentLim_terminate();
return 0;
}
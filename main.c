#include <stdio.h>
#include <stdint.h>
#include "currentLim.h"
#include "currentLim_terminate.h"
#include "rt_nonfinite.h"

int main(int argc, char **argv)
{
(void)argc;
(void)argv;

// 1. Define your real variables (eventually from sensors) */
uint16_t current_temp = 45; // e.g., 45.0 degrees
uint16_t motor_rpm = 5000;
float energy_margin = 0.85f;

// 2. Call the entry-point 'getCurrentLim' */
float limit = currentLim(current_temp, motor_rpm, energy_margin);
// Print to verify it works
printf("Calculated Current Limit: %f\n", limit);

// 3. Terminate the application
currentLim_terminate();
return 0;
}
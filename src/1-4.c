#include <stdio.h>

/* print Celsius-Fahrenheit table
    for celsius = -17.8, -6.7, ..., 148.7 */
main()
{
  float fahr, celsius;
  float lower, upper, step;
  lower = -17.8; /* lower limit of temperature scale */
  upper = 148.9; /* upper limit */
  step = 11.1; /* step size */
  celsius = lower;
  while (celsius <= upper) {
    fahr = (celsius * 9.0/5.0) + 32.0;
    printf("%6.1f %3.0f\n", celsius, fahr);

    celsius = celsius + step;
  }
}

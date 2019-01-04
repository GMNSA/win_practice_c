#include <stdio.h>

int main(void)
{
    const int ZERO = 0;     
    const int LOWER = 0;    // lower limit of temperature scale
    const int UPPER = 300;  // upper litim
    const int STEP = 20;

    float fahr = LOWER;
    float celsius = ZERO;

    while (fahr <= UPPER) {
        celsius = 5.0 * (fahr - 32.0) / 9.0;
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr += STEP;
    } 

    return 0;
}

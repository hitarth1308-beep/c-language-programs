#include <stdio.h>
#include <conio.h>
int main()
{
    float celcius, fahrenhit;
    printf("how many celcius: ");
    scanf("%f", &celcius);
    fahrenhit = (9.0 / 5.0 * celcius) + 32.0;
    printf("%.2f celcius is equal to %.2f fahrenhit.", celcius, fahrenhit);
    return 0;
}

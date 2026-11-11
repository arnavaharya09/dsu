#include<stdio.h>
int main()
{
    float temperature = 28.5;
    float humidity = 65.2;
    float *tempPtr = &temperature;
    float *humidityPtr = &humidity;

    printf("Temperature: %.2f °C\n", *tempPtr);
    printf("Humidity: %.2f%%\n", *humidityPtr);

    return 0;
}
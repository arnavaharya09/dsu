#include <stdio.h>
#include <stdlib.h>
int main()
{
    int sensors, readings;
    int i, j;
    printf("Enter number of sensors: ");
    scanf("%d", &sensors);
    printf("Enter readings per sensor: ");
    scanf("%d", &readings);
    // Double pointer for
    // dynamic 2D array
    int **sensorData;
    sensorData = (int **)malloc(sensors * sizeof(int *));
    for (i = 0; i < sensors; i++)
        sensorData[i] = (int *)malloc(readings * sizeof(int));
    // Input sensor readings
    printf("Enter sensor readings:\n");
    for (i = 0; i < sensors; i++)
    {
        printf("Sensor %d readings: ", i + 1);
        for (j = 0; j < readings; j++)
        {
            printf("Reading %d: ", j + 1);
            scanf("%d", &sensorData[i][j]);
        }
    }
    // Display sensor readings
    printf("\nSensor Data:\n");
    for (i = 0; i < sensors; i++)
    {
        printf("Sensor %d readings: ", i + 1);
        for (j = 0; j < readings; j++)
        {
            printf("%d ", sensorData[i][j]);
        }
        printf("\n");
    }
    // Free allocated memory
    for (i = 0; i < sensors; i++)
        free(sensorData[i]);
    free(sensorData);
    return 0;
}
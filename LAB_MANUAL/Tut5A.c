#include <stdio.h>
union Measurement 
{
    float length;      
    float weight;      
    float temperature; 
};
void printMeasurement(union Measurement m, char type) 
{
    switch (type) 
    {
        case 'L': 
            printf("Length: %.2f meters\n", m.length);
            break;
        case 'W': 
            printf("Weight: %.2f kilograms\n", m.weight);
            break;
        case 'T': 
            printf("Temperature: %.2f Celsius\n", m.temperature);
            break;
        default:
            printf("Invalid type\n");
    }
}

int main() 
{
    union Measurement m;
    char type;
    float value;
    printf("Enter the type of measurement (L for Length, W for Weight, T for Temperature): ");
    scanf(" %c", &type);
    switch (type) 
    {
        case 'L':
            printf("Enter length in meters: ");
            scanf("%f", &value);
            m.length = value;
            break;
        case 'W':
            printf("Enter weight in kilograms: ");
            scanf("%f", &value);
            m.weight = value;
            break;
        case 'T':
            printf("Enter temperature in Celsius: ");
            scanf("%f", &value);
            m.temperature = value;
            break;
        default:
            printf("Invalid type entered.\n");
            return 1; 
    }
    printMeasurement(m, type);
    return 0;
}
/*Output:
Enter the type of measurement (L for Length, W for Weight, T for Temperature): L
Enter length in meters: 154
Length: 154.00 meters*/

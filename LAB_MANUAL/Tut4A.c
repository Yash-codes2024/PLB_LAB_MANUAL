#include <stdio.h>
#define MAX_CARS 3
#define MAX_MODEL_LEN 20
struct car 
{
    int id;
    char model[MAX_MODEL_LEN];
    float rent;
};
int main() 
{
    struct car cars[MAX_CARS];
    int days[MAX_CARS];
    float totalRent[MAX_CARS];
    for (int i = 0; i < MAX_CARS; i++) 
    {
        printf("Enter car id for car %d: ", i + 1);
        scanf("%d", &cars[i].id);

        printf("Enter car model for car %d: ", i + 1);
        scanf("%s", cars[i].model);

        printf("Enter car rent per day for car %d: ", i + 1);
        scanf("%f", &cars[i].rent);
    }
    for (int i = 0; i < MAX_CARS; i++) 
    {
        printf("Enter number of days for car %d: ", i + 1);
        scanf("%d", &days[i]);

        totalRent[i] = days[i] * cars[i].rent;
        printf("Total rent for car %d (%s) for %d days is: %.2f\n", 
                i + 1, cars[i].model, days[i], totalRent[i]);
    }
    return 0;
}
/*
Output:
Enter car id for car 1: 123
Enter car model for car 1: honda
Enter car rent per day for car 1: 100
Enter car id for car 2: 456
Enter car model for car 2: maruthi
Enter car rent per day for car 2: 200
Enter car id for car 3: 789
Enter car model for car 3: audi
Enter car rent per day for car 3: 900
Enter number of days for car 1: 30
Total rent for car 1 (honda) for 30 days is: 3000.00
Enter number of days for car 2: 25
Total rent for car 2 (maruthi) for 25 days is: 5000.00
Enter number of days for car 3: 20
Total rent for car 3 (audi) for 20 days is: 18000.00
*/

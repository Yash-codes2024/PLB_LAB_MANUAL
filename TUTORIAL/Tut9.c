#include <stdio.h>
#include <stdlib.h>

struct Employee 
{
    char name[50];
    int id;
    float salary;
};

int main() 
{
    FILE *file;
    struct Employee emp;
    int n, i;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    file = fopen("employee_records.dat", "wb");
    if(file == NULL) 
    {
        printf("Error opening file.\n");
        return 1;
    }

    for(i = 0; i < n; i++) 
    {
        printf("\nEnter name of employee %d: ", i + 1);
        scanf("%s", emp.name);
        printf("Enter id of employee %d: ", i + 1);
        scanf("%d", &emp.id);
        printf("Enter salary of employee %d: ", i + 1);
        scanf("%f", &emp.salary);

        fwrite(&emp, sizeof(struct Employee), 1, file);
    }

    fclose(file);

    file = fopen("employee_records.dat", "rb");
    if(file == NULL) 
    {
        printf("Error opening file.\n");
        return 1;
    }

    printf("\nEmployee Records:\n");
    while(fread(&emp, sizeof(struct Employee), 1, file)) 
    {
        printf("\nName: %s\n", emp.name);
        printf("ID: %d\n", emp.id);
        printf("Salary: %.2f\n", emp.salary);
    }

    fclose(file);

    return 0;
}

/*Output:
Enter number of employees: 2

Enter name of employee 1: Akash
Enter id of employee 1: 101
Enter salary of employee 1: 50000

Enter name of employee 2: Rakesh
Enter id of employee 2: 102
Enter salary of employee 2: 55000

Employee Records:

Name: Akash
ID: 101
Salary: 50000.00

Name: Rakesh
ID: 102
Salary: 55000.00*/

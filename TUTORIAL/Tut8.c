#include <stdio.h>
#include <string.h>

// Define the structure for a student
struct Student 
{
    char name[50];
    int age;
    char grade[5];
};

int main() 
{
    int n;

    // Ask the user for the number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Declare an array of structures
    struct Student students[n];

    // Input student details
    for (int i = 0; i < n; i++) 
    {
        printf("\nEnter details for student %d:\n", i + 1);

        printf("Name: ");
        scanf(" %[^\n]", students[i].name); // %[^\n] to take string with spaces

        printf("Age: ");
        scanf("%d", &students[i].age);

        printf("Grade: ");
        scanf(" %s", students[i].grade);
    }

    // Display student details
    printf("\n--- Student Information ---\n");
    for (int i = 0; i < n; i++) 
    {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Grade: %s\n", students[i].grade);
    }

    return 0;
}

/*Output : 
Enter the number of students: 4

Enter details for student 1:
Name: Shreyash
Age: 18
Grade: A

Enter details for student 2:
Name: Gaurav
Age: 18
Grade: A

Enter details for student 3:
Name: Vinit
Age: 18
Grade: A

Enter details for student 4:
Name: Sarthak
Age: 18
Grade: A

--- Student Information ---

Student 1:
Name: Shreyash
Age: 18
Grade: A

Student 2:
Name: Gaurav
Age: 18
Grade: A

Student 3:
Name: Vinit
Age: 18
Grade: A

Student 4:
Name: Sarthak
Age: 18
Grade: A
*/
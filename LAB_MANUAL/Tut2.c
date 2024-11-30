#include <stdio.h>
int main()
{
   int age,nationality;
   printf("Enter your age: \n");
   scanf("%d", &age);
   printf("Enter nationality (1 for Indian, 0 for Non-Indian): \n");
   scanf(" %d", &nationality);
   if ((age >= 18) && (nationality == 1))
   {
       printf("Eligible for voting \n");
   }
    else
   {
       printf("Not eligible for voting \n");
   }
   return 0;
}

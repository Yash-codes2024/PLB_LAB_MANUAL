#include<stdio.h>
int main()
{
   int Arithmetics , A , B;
   printf("Enter number 1 for addition \n");
   printf("Enter number 2 for subtraction \n");
   printf("Enter number 3 for multiplication \n");
   printf("Enter number 4 for division \n");
   scanf("%d" , &Arithmetics);
   printf("Enter value of A \n");
   scanf("%d" , &A);
   printf("Enter value of B \n");
   scanf("%d" , &B);
   switch(Arithmetics)
   {
       case 1:
       printf("Addition of 2 numbers is=%d \n" , A+B);
       break;
       case 2:
       printf("Subtraction of 2 numbers=%d \n" , A-B);
       break;
       case 3:
       printf("Multiplication of 2 numbers=%d \n" , A*B);
       break;
       case 4:
       printf("Division of 2 numbers= %d \n" , A/B);
       break;
       default :
       printf("Enter valid number \n");
   }
return 0;  
}

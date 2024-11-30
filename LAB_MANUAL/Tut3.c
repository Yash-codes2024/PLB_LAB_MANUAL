#include<stdio.h>
int main()
{
    float phy , ele , plb , per  ;
   printf("Enter marks for phy \n");
   scanf("%f" , &phy);
   printf("Enter marks for ele \n");
   scanf("%f" , &ele);
   printf("Enter marks for plb \n");
   scanf("%f" , &plb);
   per=(phy + ele + plb )*100/300;
   printf("Percentage = %.2f \n" , per);
   if(per>= 90)
   {
       printf("A \n");
   }
   else if(per>= 80)
   {
       printf("B \n");
   }
   else if(per>=70)
   {
       printf("C \n");
   }
   else if(per>=60)
   {
       printf("D \n");
   }
   else if(per>=40)
   {
       printf("E \n");
   }
   else if(per<=40)
   {
       printf("F \n");
   }
   else
   {
       printf("Failed \n");
   }
   return 0;
}

#include<stdio.h>
int main()
{
   int i , n;
   int ans = 1;
   printf("Enter the number\n");
   scanf("%d",&n);
   if(n<0)
   {
       printf("Error\n");
   }
   else
   {
       for(i=1;i<=n;++i)
   {
       ans *= i;
   }
   printf("Factorial of  %d=%d",n, ans);
   }
   return 0;
}
/*Output:
Enter the number
5
Factorial of  5=120*/
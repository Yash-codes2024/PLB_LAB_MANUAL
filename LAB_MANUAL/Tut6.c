#include <stdio.h>
int main()
{
 int r, c, a[100][100], b[100][100], sum[100][100],  mul[100][100],  i, j;
 printf("Enter the number of rows (between 1 and 100): ");
 scanf("%d", &r);
 printf("Enter the number of columns (between 1 and 100): ");
 scanf("%d", &c);
 printf("\nEnter elements of 1st matrix:\n");
 for (i = 0; i < r; ++i)
       for (j = 0; j < c; ++j)
       {
           printf("Enter element a%d%d: ", i + 1, j + 1);
           scanf("%d", &a[i][j]);
       }
 printf("Enter elements of 2nd matrix:\n");
 for (i = 0; i < r; ++i)
       for (j = 0; j < c; ++j)
        {
            printf("Enter element b%d%d: ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
 for (i = 0; i < r; ++i)
   for (j = 0; j < c; ++j)
       {
           sum[i][j] = a[i][j] + b[i][j];
       }
 for (i = 0; i < r; ++i)
   for (j = 0; j < c; ++j)
       {
           mul[i][j] = a[i][j] * b[i][j];
       }
 printf("\nSum of two matrices: \n");
 for (i = 0; i < r; ++i)
   for (j = 0; j < c; ++j)
   {
       printf("%d   ", sum[i][j]);
       if (j == c - 1) 
       {
       printf("\n\n");
       }
   }
    printf("\n Multiplication of two matrices: \n");
 for (i = 0; i < r; ++i)
   for (j = 0; j < c; ++j)
   {
       printf("%d   ", mul[i][j]);
       if (j == c - 1) 
       {
       printf("\n\n");
       }
   }
 return 0;
}
/*Output:
Enter the number of rows (between 1 and 100): 2
Enter the number of columns (between 1 and 100): 2
Enter elements of 1st matrix:
Enter element a11: 1
Enter element a12: 2
Enter element a21: 3
Enter element a22: 4
Enter elements of 2nd matrix:
Enter element b11: 5
Enter element b12: 6
Enter element b21: 7
Enter element b22: 8
Sum of two matrices: 
6   8   
10   12   
Multiplication of two matrices: 
5   12   
21   32   */

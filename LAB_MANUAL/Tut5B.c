#include<stdio.h>
int main()
{
    int i;
    int arr[5]={1,2,3,4,5};
    int *(ptr)[5];
    for(i=0;i<5;i++)
    {
        printf("Value at arr[%d] is  %d \n",i,arr[i]);
    }
    return 0; 
}
/*Output:
Value at arr[0] is  1 
Value at arr[1] is  2 
Value at arr[2] is  3 
Value at arr[3] is  4 
Value at arr[4] is  5 */

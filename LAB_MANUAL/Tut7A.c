#include <stdio.h>
int reverseNumber(int num, int rev) 
{
    if (num == 0)
        return rev;
    return reverseNumber(num / 10, rev * 10 + num % 10);
}
int isPalindrome(int num) 
{
    if (num < 0) num = -num; 
    return num == reverseNumber(num, 0);
}
int main()
 {
    int number;    
    printf("Enter a number: ");
    scanf("%d", &number);
    if (isPalindrome(number)) {
        printf("%d is a palindrome.\n", number);
    } 
    else 
    {
        printf("%d is not a palindrome.\n", number);
    }

    return 0;
}
/*Output:
Enter a number: 1863
1863 is not a palindrome.*/



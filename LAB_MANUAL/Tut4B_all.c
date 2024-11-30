#include <stdio.h>
#include <ctype.h>
#include <string.h> // Used only for strcspn, not for string comparison
void countVowelsConsonants(const char *str);
void compareStrings(const char *str1, const char *str2);
void countWords(const char *str);
void printReverse(const char *str);
int main() 
{
    char str[100], str1[100], str2[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    if (strlen(str) == 0) 
    {
        printf("Input string is empty! Please provide valid input.\n");
        return 1;
    }
    printf("\n1. Count Vowels and Consonants\n");
    countVowelsConsonants(str);
    printf("\n2. Compare Two Strings\n");
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; 
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';
    compareStrings(str1, str2);
    printf("\n3. Count Total Number of Words\n");
    countWords(str);
    printf("\n4. Print Characters in Reverse Order\n");
    printReverse(str);

    return 0;
}
void countVowelsConsonants(const char *str) 
{
    int vowels = 0, consonants = 0;
    for (int i = 0; str[i] != '\0'; i++) 
    {
        char ch = tolower(str[i]);
        if (ch >= 'a' && ch <= 'z') 
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') 
            {
                vowels++;
            } 
            else 
            {
                consonants++;
            }
        }
    }

    printf("Vowels: %d\nConsonants: %d\n", vowels, consonants);
}
void compareStrings(const char *str1, const char *str2) 
{
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') 
    {
        if (str1[i] != str2[i]) 
        {
            printf("Strings are not equal.\n");
            return;
        }
        i++;
    }
    if (str1[i] == '\0' && str2[i] == '\0') 
    {
        printf("Strings are equal.\n");
    } else 
    {
        printf("Strings are not equal.\n");
    }
}
void countWords(const char *str) 
{
    int count = 0, inWord = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n') {
            inWord = 0;
        } 
        else if (!inWord) 
        {
            inWord = 1;
            count++;
        }
    }

    printf("Total words: %d\n", count);
}
void printReverse(const char *str) 
{
    int length = 0;
    while (str[length] != '\0') 
    {
        length++;
    }
    printf("Reverse: ");
    for (int i = length - 1; i >= 0; i--) 
    {
        printf("%c", str[i]);
    }
    printf("\n");
}
/*Output:
Enter a string: Myself shreyash from IT department
1. Count Vowels and Consonants
Vowels: 8
Consonants: 22
2. Compare Two Strings
Enter first string: Shreyash
Enter second string: Mandlapure
Strings are not equal.
3. Count Total Number of Words
Total words: 5
4. Print Characters in Reverse Order
Reverse: tnemtraped TI morf hsayerhs flesyM*/
#include <stdio.h>
union Data 
{
    int i;
    float f;
    char str[20];
};

int main() 
{
    union Data data;

    data.i = 10;
    printf("Integer value: %d\n", data.i);

    data.f = 3.14;
    printf("Float value: %.2f\n", data.f);

    snprintf(data.str, sizeof(data.str), "Hello");
    printf("String value: %s\n", data.str);

    return 0;
}

/*Output:
Integer value: 10
Float value: 3.14
String value: Hello*/

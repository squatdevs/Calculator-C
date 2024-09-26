#include <stdio.h>


int main()
{
    int sayi1, sayi2;
    char process;
    printf("please choose(+,-,*,/)\n");
    scanf("%c",&process);

    switch (process)
    {
    case '+':
    printf("first number: ");
    scanf("%d",&sayi1);
    printf("second number: ");
    scanf("%d",&sayi2);
    printf("Total: %d",sayi1+sayi2);
        break;
        case '-':
    printf("first number: ");
    scanf("%d",&sayi1);
    printf("second number: ");
    scanf("%d",&sayi2);
    printf("Total: %d",sayi1-sayi2);
        break;
        case '*':
    printf("first number: ");
    scanf("%d",&sayi1);
    printf("second number: ");
    scanf("%d",&sayi2);
    printf("Total: %d",sayi1*sayi2);
        break;
        case '/':
    printf("first number: ");
    scanf("%d",&sayi1);
    printf("second number: ");
    scanf("%d",&sayi2);
    printf("Total: %d",sayi1/sayi2);
        break;
    
    default:
    printf("please enter valid arguments!\n");
        break;
    }
    return 0;
}

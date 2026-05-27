// Input : a     Ouput: A
//Input D        output: d

#include<stdio.h>

void DisplayConvert(char cValue)
{
    if(cValue>='a' && cValue<='z')
    {
        printf("%c",cValue -32);
    }
    else if (cValue>='A' && cValue <= 'Z')
    {
        printf("%c",cValue +32);
    }
    else
    {
        printf("Enter valid input...");
    }
}


int main()
{
    char cValue='\0';
    printf("Enter the character : ");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return 0;
}
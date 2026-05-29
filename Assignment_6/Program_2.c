/*
Input:9
Output:Nine

Input:-3
Output:Three

Input:12
Output:Invalid Number
*/

#include<stdio.h>

void Display(int iNo)
{
    char *name[]={"","one","two","three","four","five",
        "six","seven","eight","nine","ten"};
    if (iNo<0)
    {
        iNo=-iNo;
    }
    
    if(iNo<=10)
        {
            printf("%s\t",name[iNo]);
        }
        else
        {
            printf("Number Invalid");
        }
}

int main()
{
    int iValue=0;
    printf("Enter Number:");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}
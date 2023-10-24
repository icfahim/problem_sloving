#include <stdio.h>
int main()
{
    char A;
    scanf("%c",&A);
    if(A>='0' && A<='9')
    {
        printf("IS DIGIT\n");
    }
    else
    {
        printf("ALPHA\n");
        if(A>='a' && A<='z')
        {
            printf("IS SMALL\n");
        }
        else
        {
            printf("IS CAPITAL\n");
        }
    }
    return 0;
}
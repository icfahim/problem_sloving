#include <stdio.h>
#include <string.h>

int main()
{
    char a[100001];
    int cc = 0;

    scanf("%s", a);

    for (int i = 0; a[i] != '\0'; i++) 
    {
        if (strchr("bcdfghjklmnpqrstvwxyz", a[i])) 
        {
            cc++;
        }
    }

    printf("%d\n", cc);

    return 0;
}
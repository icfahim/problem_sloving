#include <stdio.h>
#include <string.h>
int main()
{
    char a[100],b[100];
    scanf("%s %s",a,b);
    int s=strlen(a);
    int t=strlen(b);
    printf("%d %d\n",s,t);
    printf("%s %s",a,b);
    return 0;
}
#include <stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1; i<=12; i++)
    {
        int x;
        x=n*i;
        printf("%d * %d = %d\n",n,i,x);
    }
    return 0;
}
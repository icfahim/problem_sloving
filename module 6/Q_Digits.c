#include <stdio.h>
int main()
{
    int i,t;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
    int n;
    scanf("%d",&n);
    do
    {
        printf("%d ",n%10);
        n=n/10;
    }
    
    }
    return 0;
}
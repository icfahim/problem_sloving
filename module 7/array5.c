#include <stdio.h>
int main()
{
    int sum=0;
    int n;
    scanf("%d",&n);
    int ar[n];
    for (int i=0; i<n; i++)
    {
        scanf("%d",&ar[i]);
    }
    for (int i=0; i<n; i++)
    {
        sum=sum+ar[i];
    }
    printf("%d ",sum);
    return 0;
}
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a;
    int ev=0, od=0, po=0, ng=0;
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&a);
        {
            if(a%2==0)
            {
                ev++;
            }
            else
            {
                od++;
            }   
            if (a>0)
            {
                po++;
            }
            else if (a<0)
            {
                ng++;
            }
        }
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n",ev,od,po,ng);
    return 0;
}
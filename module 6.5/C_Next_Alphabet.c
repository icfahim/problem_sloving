#include <stdio.h>
int main()
{
    int ans;
    ans=97;
    char a;
    scanf("%c",&a);
    if (a>=97 && a<=122)
    {
        while(ans<=122);
        ans=ans+1;
        printf("%c",ans);
    }
    return 0;
}
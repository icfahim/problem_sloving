#include <stdio.h>

int main() 
{
    int a;
    scanf("%d", &a); 

    while (a--) 
    {
        int m1, m2, d;
        scanf("%d %d %d", &m1, &m2, &d); 

        int w = m1*d; 
        int nd = w/(m1+m2); 
        int ds = d - nd; 
        printf("%d\n", ds); 
    }

    return 0;
}
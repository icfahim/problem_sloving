#include <stdio.h>

int main() {
    int a; 
    scanf("%d", &a);

    while (a--) 
    {
        int b;
        scanf("%d", &b);

        int ar[10001]; 
        for (int i = 0; i < b; i++) 
        {
            scanf("%d", &ar[i]);
        }
        int d; 
        scanf("%d", &d);
        int f = 0;
        for (int i = 0; i < b; i++) 
        {
            if (ar[i] == d) 
            {
                f = 1;
                break; 
            }
        }


        if (f) 
        {
            printf("YES\n");
        } 
        else 
        {
            printf("NO\n");
        }
    }

    return 0;
}
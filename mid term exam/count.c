#include <stdio.h>

int main() 
{
    int N;
    scanf("%d", &N);
    int ar[N];
    
    for (int i = 0; i < N; i++) {
        scanf("%d", &ar[i]);
    }

    int count_2 = 0;
    int count_3 = 0;

    for (int i = 0; i < N; i++) 
    {
        if (ar[i] % 2 == 0) {
            count_2++;
        }
        if (ar[i] % 3 == 0 && a[i] % 2 != 0) 
        {
            count_3++;
        }
    }

    printf("%d %d\n", count_2, count_3);

    return 0;
}
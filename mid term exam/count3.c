#include <stdio.h>
int main() 
{
    int a; 
    scanf("%d", &a);

    while (a--) 
    {
        char a[10001]; 
        scanf("%s", a);

        int count_c= 0;
        int count_s= 0;
        int count_d= 0;

        for (int i = 0; a[i] != '\0'; i++) 
        {
            if (a[i] >= 65 && a[i] <= 90) 
            {
                count_c++;
            } 
            else if (a[i] >= 97 && a[i] <= 122) 
            {
                count_s++;
            } 
            else if (a[i] >= 48 && a[i] <= 57)
            {
                count_d++;
            }
        }

        printf("%d %d %d\n", count_c, count_s, count_d);
    }

    return 0;
}
#include <stdio.h>
int main()
{
    //char a[5]; segmentation fault in linux, run time error in online compiler 
    
    //scanf("%s",a); 

    char a[6];
    scanf("%s",a);
    printf("%s\n",a);
    return 0;
}
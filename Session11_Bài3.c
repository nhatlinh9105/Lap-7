#include<stdio.h>

int main()
{
    int a[5];
    
    for(int i=0; i<5; i++)
    {
        printf("Nhập số: ");
        scanf("%d", &a[i]);
    }
    
    printf("Dãy số đảo ngược là: ");
    for(int i=4; i>=0; i--)
    {
        printf("%d\t", a[i]);
    }
    
}

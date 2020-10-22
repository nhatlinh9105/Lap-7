#include <stdio.h>

int main()
{
    char s[100];
    int vowels = 0;
    
    
    printf("Nhập chuỗi: ");
    gets(s);
    
    for(int i=0; i < 100; i++)
    {
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' )
        {
            vowels++;
        }
    }
   printf("Chuỗi \"%s\" có chứa: %d nguyên âm.", s, vowels);

   return 0;
}

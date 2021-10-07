#include <stdio.h>
#include <string.h>

void  encrypt(char *msg,int how)
{
    
    for(int i = how;i>0;i--)
    {
        while(*msg != '\0')
        {
            *msg = *msg + i;
             msg++;
         }
    }

}

void  decrypt(char *msg,int how)
{
    
    for(int i = how;i>0;i--)
    {
        while(*msg != '\0')
        {
            *msg = *msg - i;
             msg++;
         }
    }

}
int main()
{
    char a[100];
    printf("Enter Your message : \n>> ");
    scanf("%[^\n]s",a);
    encrypt(a,251);
    printf("\nAfter Encrypt Your Message...\n>> ");
    printf("%s\n",a);
    printf("\nAfter Decrypt Your Message...\n>> ");
    decrypt(a,251);
    printf("%s",a);
    return 0;
}

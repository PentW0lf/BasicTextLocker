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
    char a[] = "Ali Meri Jaan";
    encrypt(a,500);
    printf("%s\n",a);
    decrypt(a,500);
    printf("%s",a);
    return 0;
}

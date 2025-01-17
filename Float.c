#include<stdio.h>
#include<conio.h>
int main()
{
int a;
for(a=1; a<=120; a+=30);
{
    a++;
    if(a<=30)
    {
        printf("%d",a);
        a=a+20;
    }
}

}

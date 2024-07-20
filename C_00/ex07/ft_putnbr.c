#include <stdio.h>
#include <unistd.h>



void ft_putnbr (int n)
{
    char x=48,br=10;
    int m=100000,y=n;
    if(n==0) write(1,&x,1);
    else
    {
    while (m>=1)
    {
        if(y>=m)
        {
        x=x+(n/m);
        write(1,&x,1);
        n=n-(n/m)*m;
        x=48;
        }
        m=m/10;
    }
    }
   write(1,&br,1);
}
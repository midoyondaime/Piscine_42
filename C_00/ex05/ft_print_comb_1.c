#include <stdio.h>
#include <unistd.h>

void ft_print_comb (void)
{
    int i=0,j=0,k=0;
    char a=48,b=48,c=48,x=44;

    while(i<=7)
    {
        while(j<=9)
        {

            while(k<=9)
            {
                write(1,&a,1);
                write(1,&b,1);
                write(1,&c,1);
                write(1,&x,1);
                k=k+1;
                c=c+1;
            }
            k=0;
            c=48;
            j=j+1;
            b=b+1;
     
        }
        k=0;
        c=48;
        b=48;
        j=0;
        i=i+1;
        a=a+1;
    }
}
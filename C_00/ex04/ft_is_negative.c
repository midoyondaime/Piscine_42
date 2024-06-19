#include <stdio.h>
#include <unistd.h>

void ft_is_negative (int n)
{
    if (n<0) 
    {
        char c=78;
        write(1,&c,1);
    }
    else 
    {
        char c=80;
        write(1,&c,1);
    }
}
#include <stdio.h>
#include <unistd.h>

void ft_print_numbers(void)
{
    char c=48;
    int i=0;
    for (i=0;i<=10;i++)
    {
     write(1,&c,1);
     c=c+1;
    }


}
#include <stdio.h>
#include <unistd.h>

void ft_print_alphabet(void)
{
    char c=97;
    int i=0;
    for (i=0;i<=26;i++)
    {
     write(1,&c,1);
     c=c+1;
    }


}
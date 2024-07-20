#include <stdio.h>
#include <unistd.h>

void ft_print_comb_2 (void)
{
    int i=0,j=0,k=0,l=0;
    char a=48,b=48,c=48,d=48,s=32,x=44,br=13; // Ascii code for 0 is 48 and Ascii code for , is 44.
    //To understand this, try the basic exemple : 012,013,014,015,016...
    //abc is how i coded the numbers. 
    for(i=0;i<=9;i++)
    {
        a=48;
        a=a+i;
        for(j=0;j<=9;j++)
        
        {
            b=48;
            b=b+j;
            for(k=0;k<=9;k++)
            {
               c=48;
               c=c+k;
             for(l=0;l<=9;l++)
             {
                d=48;
                d=d+l;
               write(1,&a,1);
               write(1,&b,1);
               write(1,&s,1);
               write(1,&c,1);
               write(1,&d,1);
               write(1,&x,1);
             }
 
            
           }
            
        }
    }
    //write(1,&br,1);
}
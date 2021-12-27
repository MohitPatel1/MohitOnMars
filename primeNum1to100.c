#include<stdio.h>

int main()
{

    int i=0,a[100],b=1;
    while(i<100)
    {
        a[i]=b;
        i++;
        b++;
    }

    for(i=0;i<100;i++)
       {
        if( a[i]%2==0 & a[i]%3==0 & a[i]%5==0 )
            {
                   printf("%d\n",a[i]);
            }
        else
            {
                continue;
            }
    }

    return 0;
}


#include <stdio.h>

int main()
{
    int i,j,k,l;
    for(i=0;i<4;++i)
    {
        for(j=0;j<i+1;++j)
        {
            printf("*");
        }
        for(k=0;k<6-2*i;++k)
        {
            printf(" ");
        }
        for(l=0;l<i+1;++l)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=0;i<4;++i)
    {
        for(j=4-i;j>0;--j)
        {
            printf("*");
        }
        for(k=0;k<2*i;++k)
        {
            printf(" ");
        }
        for(l=4-i;l>0;--l)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

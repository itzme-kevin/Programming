#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    for(int i=0;i<num;++i)
    {
        for(int j=0;j<num+1;++j)
        {
            if(i>0&&i<num-1)
            {
                printf("1");
                for(int k=0;k<num-1;++k)
                {
                    printf(" ");
                }
                printf("1");
                break;
            }
            
            
            printf("1");
        }
        
        printf("\n");
    }
}

/*Print a pattern of numbers from 1 to n to  as shown below. Each of the numbers is separated by a single space.

                            4 4 4 4 4 4 4  
                            4 3 3 3 3 3 4   
                            4 3 2 2 2 3 4   
                            4 3 2 1 2 3 4   
                            4 3 2 2 2 3 4   
                            4 3 3 3 3 3 4   
                            4 4 4 4 4 4 4   
*/
#include <stdio.h>

int main()
{
  int num;
  scanf("%d",&num);
  for(int i=0;i<num;++i)
  {
      if(i<num)
      {
        for(int k=0;k<i;++k)
        printf("%d ",num-k);
      }
      for(int j=0;j<2*num-1-2*i;++j)
      {
          printf("%d ",num-i);
      }
      if(i<num)
      {
        for(int k=0;k<i;++k)
        printf("%d ",num-i+k+1);
      }
      printf("\n");
  }

for(int i=0;i<num-1;++i)
{
    if(i<num-1)
    {
        for(int k=0;k<num-2-i;++k)
        printf("%d ",num-k);
    }
    for(int j=0;j<3+2*i;++j)
    {
        printf("%d ",2+i);
    }
    if(i<num-1)
    {
        for(int k=0;k<num-2-i;++k)
        printf("%d ",3+k+i);
    }
    printf("\n");
}

}

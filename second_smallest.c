
#include <stdio.h>

int main()
{
    int i,arr[100],size,temp,min,count=1;
    scanf("%d",&size);
    for(int j=0;j<size;++j)
    {
        scanf("%d",&arr[j]);
    }
    for(int l=0;l<size-1;++l)
    {
        for(int k=0;k<size-l-1;++k)
        {
            if(arr[k]>arr[k+1])
            {
                temp=arr[k+1];
                arr[k+1]=arr[k];
                arr[k]=temp;
            }
        }
    }
    
    
    min=arr[0];
    
   
    for(i=1;i<size;++i)
    {
      if(arr[i]==min)
      {
          count++;
      }
      
    }
   
    
    if(count>1)
    {
    printf("the second smallest elemt of the array is %d",arr[count]);
    }
    else
    printf("the  second smallest elemnt of the array is %d",arr[1]);

    return 0;
}

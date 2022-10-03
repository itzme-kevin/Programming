// create an array of size n dynamically, and read the values from stdin.
// Iterate the array calculating the sum of all elements.
// Print the sum and free the memory where the array is stored.
  #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int *arr,n,sum=0;
    scanf("%d",&n);
   
   arr=(int*)malloc(n*sizeof(int));
for(int i=0;i<n;++i)
{
    scanf("%d",arr+i);
}
for(int i=0;i<n;++i)
{
    sum+=*(arr+i);
}
printf("%d",sum);
free(arr);  
    return 0;
}

// Given an array of size n,reverse it.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }
  for(i=num-1;i>=0;--i)
  printf("%d ",*(arr+i));

    
    return 0;
}

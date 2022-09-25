// You will be given an integer n, and a threshold k. 
// For each number i from 1 to n, find the maximum value of logical and , or and xor when compared against all integers through n that are greater than i.
// Consider a value only if the comparison returns a result less than k.
// Print the results of the and, or and exclusive or comparisons on separate lines, in that order.

#include<stdio.h>
void max(int arr[],int k,int size)
{
    int max=0;
   
    for(int l=0;l<size;++l)
    {
        if(arr[l]>max&&arr[l]<k)
        {
            max=arr[l];
        }
    }
    printf("%d\n",max);
}
int main()
{
    int n,k,size,i=0;
    scanf("%d %d",&n,&k);
    size=((n-1)*n)/2;  // By taking some test cases we get to know that the total number of elements in the array follows the sum of first 'n' natural nos.formula
    int arr1[size],arr2[size],arr3[size];
    for(int a=1;a<n;++a)
    {
        for(int b=a+1;b<=n;++b)
        {
            arr1[i]=a&b;
            arr2[i]=a|b;
            arr3[i]=a^b;
            ++i;
        }
    }
    max(arr1,k,size);
    max(arr2,k,size);
    max(arr3,k,size);
    return 0;
}

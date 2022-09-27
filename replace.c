//Program to Replace all 0’s with 1 in a given integer

#include <stdio.h>

int main()
{
   int num,digit,rev=0,org=0;
   scanf("%d",&num);
   if(num==0)
   {
       num=1;
   }
   
   while(num>0)
      {
       
       digit=num%10;
       if(digit==0)
       {
         digit=1;
       }
    rev=rev*10+digit;
    num/=10;
      }
  
    while(rev>0)
    {
       int digit=rev%10;
       org=org*10+digit;
       rev/=10;
        
    }
    printf("%d",org);

    return 0;
}

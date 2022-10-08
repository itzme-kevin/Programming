Given a string s ,consisting of alphabets and digits, find the frequency of each digit in the given string.
  #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int zero=0,one=0,two=0,three=0,four=0,five=0,six=0,seven=0,eight=0,nine=0;

int i=0;
char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
while (s[i]!='\0')
{
    switch(s[i])
    {
        case '0':zero++;
            break;
        case '1':one++;
        break;
        case '2':two++;
        break;
        case '3':three++;
        break;
        case '4':four++;
        break;
        case '5': five++;
        break;
        case '6':six++;
        break;
        case '7':seven++;
        break;
        case '8':eight++;
        break;
        case '9':nine++;
        break;
    }
    i++;
}
printf("%d %d %d %d %d %d %d %d %d %d",zero,one,two,three,four,five,six,seven,eight,nine);
    
    return 0;
}

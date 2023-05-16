#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int value_return(char input)
{
    int value;
    switch(input)
    {
        case 'A':
            value=10;
            break;
        case 'B':
            value=11;
            break;
        case 'C':
            value=12;
            break;
        case 'D':
            value=13;
            break;
        case 'E':
            value=14;
            break;
        case 'F':
            value=15;
            break;
        case 'G':
            value=16;
            break;              
        default:
            value = (int)input-48; //ASCII value of digits start from 48 (0)
            break;
    }
    return value;
}
    
int main()
{
    char input[20];
    gets(input);
    //printf("%s\n",input);
    int n= strlen(input);
    int decimal=0;

    for(int i=0;i<n;i++)
    {
        
        decimal+=value_return(input[i])*pow(17,n-1-i);
    }

    printf("\n%d",decimal);
    return 0;
}
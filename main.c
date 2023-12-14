#include <stdio.h>
#include <stdlib.h>
void Is_armstrong( unsigned int Num);
int main()
{ unsigned int Number;
 printf("Enter a Number:");
 scanf("%d",&Number);
 Is_armstrong(Number);



    return 0;
}
void Is_armstrong( unsigned int Num)
{
    unsigned int temp;
    unsigned int sum=0;
    unsigned int var;
    temp=Num;
    while(temp !=0 )
    {
        var =temp%10;
        sum += (var*var*var);
        temp /=10;
    }
    if (Num ==sum)
    {
        printf("The Number %d is armstrong \n",Num);
    }
    else
    {
        printf("The Number %d isn't armstrong \n",Num);
    }
}


#include <stdio.h>
#include <stdlib.h>

void Is_perfect(unsigned char Num);

int main()
{
    unsigned char Number;
    printf("Enter a Number:\n");
    scanf("%d",&Number);
    Is_perfect(Number);
    return 0;
}
void Is_perfect(unsigned char Num)
{
    unsigned char counter;
    unsigned char res=0;
    for(counter =1; counter<=(Num/2); counter++)
    {
        if((Num%counter) == 0)
        {
            res +=counter;
        }
    }
    if (Num == res)
    {
        printf("The Entered Number %d is Perfect :)",Num);
    }
    else
    {
        printf("The Entered Number %d isn't Perfect !! ",Num);

    }

}

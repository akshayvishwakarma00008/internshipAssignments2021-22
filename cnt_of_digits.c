// to count no of digits in a given number

#include<stdio.h>

int main()
{
    int cnt=0;
    long int num;

    printf("Enter a number to count\n");
    scanf("%ld",&num);

    if(num>0)
    {
        while(num)
        {
            cnt++;
            num=num/10;
        }
    }

    printf("\nTotal digits in the number are - %d",cnt);


}

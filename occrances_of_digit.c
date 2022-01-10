// program to count occurances of each digit

#include<stdio.h>

void occurances(int *a,int num)
{
    int i,r;
    while(num>0)
    {

        r = num%10;
        a[r]= a[r]+1;  //incrementing the value array index by 1 where default value is 0;
        num=num/10;
    }

    printf("occurances of the digits\n");
    for(i=0;i<10;i++)
    {
        printf("%d-->%d\n",i,a[i]);
    }


}

int main()
{
    int a[10]={0},i;
    //int i,j,cnt=0;
    long int num,r;

    printf("enter the number\n");
    scanf("%ld",&num);
    //r=0;

    occurances(a,num);

    

}

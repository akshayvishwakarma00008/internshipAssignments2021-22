#include<stdio.h>

void accept(int a[][15],int b[][15],int r,int c)
{
    int i,j;

    printf("\n\nEnter the elements-1 of the matrix::\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("\n\nEnter the elements-2 of the matrix::\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
}

void multiplication(int a[][15],int b[][15],int mul[][15],int r,int c)
{
    int i,j,k;
    
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {   
            mul[i][j]=0;
            for(k=0;k<c;k++)
            {
                mul[i][j] += a[i][k]*b[k][j];
            }
        }
    }
}

void display(int mul[][15],int r,int c)
{
    int i,j;
    printf("\n\nMultiplication::\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",mul[i][j]);
        }
        printf("\n");
    }
}


int main()
{
    int r,c,a[15][15],b[15][15],mul[15][15];;
    printf("Rows::");
    scanf("%d",&r);
    printf("\nColoums::");
    scanf("%d",&c);

    accept(a,b,r,c);
    multiplication(a,b,mul,r,c);
    display(mul,r,c);

}
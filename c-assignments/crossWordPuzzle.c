#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void init(char a[][10])
{
    int i,j,k;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(j==1)
            {
                for(k=0;k<5;k++)
                {
                    a[k][j]='-';
                }
            }
            else if(j==2 && i==2)
            {
                a[i][j]='-';
            }
            else if(j==3 && i==3)
            {
                for(k=0;k<5-1;k++)
                {
                    a[k][j]='-';
                }
            }
            else
            {
                a[i][j]='#';
            }
        }
    }
}

void crossword(char a[][10],char inp[],int len)
{
    int i,j,k;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(len==5 && j==1)
            {
                for(k=0;k<5;k++)
                {
                    
                        //printf("%c\t",inp[k]);
                        a[k][j] = inp[k];
                        //l++;
                   
                }
            }
            if(len==3  && i==2)
            {
                for(k =1;k<5;k++)
                {
                    a[i][k] = inp[k-1];
                }
            }
            if(len == 4 && j==3)
            {
                for(k=0;k<4;k++)
                {
                    a[k][j] = inp[k];
                }
            }
        }
    }
}

void display(char a[][10])
{
    int i,j;
    printf("\n");
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%c\t",a[i][j]);
        }
        printf("\n");
    }
}


int main()
{
    int ch,len;
    char a[10][10],inp[50];
    init(a);
    display(a);

    while(1)
    {
        printf("1.Delhi is a capital of?\n");
        printf("2.Point is called as?\n");
        printf("3.what we fly in sky on sankranti?\n");
        printf("4.Exit\n\n");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1: printf("1.Solution:");
                   scanf("%s",&inp);
                    len = strlen(inp);
                    if((len == 5 && strcmp("india",inp)==0))
                    {
                        crossword(a,inp,len);
                        display(a);
                    }
                    else
                    {
                        printf("wrong answer!!!.........try again\n");
                    }

                    break;
            case 2:printf("2.Solution:");
                   scanf("%s",&inp);
                    len = strlen(inp);
                    if((len == 3 && strcmp("dot",inp)==0))
                    {
                        crossword(a,inp,len);
                        display(a);
                    }
                    else
                    {
                        printf("wrong answer!!!.........try again\n");
                    }

                    break;

            case 3:printf("3.Solution:");
                   scanf("%s",&inp);
                    len = strlen(inp);
                    if((len == 4 && strcmp("kite",inp)==0))
                    {
                        crossword(a,inp,len);
                        display(a);
                    }
                    else
                    {
                        printf("wrong answer!!!.........try again\n");
                    }

                    break;

            case 4:exit(1);
            break;
        }
        

        


    }
}
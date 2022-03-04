#include<stdio.h>
#include<string.h>

int main()
{
    int i,len,cnt=0;
    char str[50];
    printf("Enter the string::");
    scanf("%s",&str);

    len = strlen(str);
    //printf("%d",len);
    cnt=0;
    for(i=0;i<len/2;i++)
    {
        if(str[i] == str[len-1-i])   //as array index starts from 0 and strn len returns length starting from 1-n,hence len-1
        {
            cnt++;
        }
    }

    if(i == cnt)
    printf("the entered string \" %s \" is a Palindrome",str);
    else
    printf("the entered string \" %s \" is not a Palindrome",str);
}
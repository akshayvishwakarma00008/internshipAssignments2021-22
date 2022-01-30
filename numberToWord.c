#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char *onedigit[]={" ","one","two","three","four","five","six","seven","eight","nine"};
char *twodigit[]={" ","ten","eleven","twelve","thireen","fouteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
char *multiple[]={" "," ","twenty","thirty","fourty","fifty","sixty","seventy","eighty","ninety"};

void one_twoDigit(long long int num,long long int len){
    if(len == 1){
        printf("%s",onedigit[num]);
    }
    else{
        if((num/10) < 2)
        printf(" %s",twodigit[num%10 + num/10]);
        else
        printf(" %s %s",multiple[(num%100)/10],onedigit[num%10]);
    }
}
void threedigit(long long int num)
{
    int temp = num%100;
    if(num != 0){
        if(num/100)
        {printf(" %s hundread",onedigit[num/100]);}
        if(temp>=20) {
            printf(" %s %s",multiple[(num%100)/10],onedigit[num%10]);

        }
        else{
            if(temp>=10 && temp<20)
            printf(" %s",twodigit[temp%10 + temp/10]);
            else
            printf(" %s",onedigit[temp%10]);
        }
    }
}
void sixdigit(long long int len,long long int num){   
    long long int temp;
    if(num != 0)
    {
        if(len == 4 ){
            printf("%s thousand",onedigit[num/1000]);
            threedigit(num%1000);
        }
        if(len == 5){
        temp = num/1000;
        if((num/10000)<2){
            printf(" %s thousand",twodigit[temp/10 + temp%10]);
            threedigit(num%1000);
        }
        else{
            printf("%s %s thousand",multiple[temp/10],onedigit[temp%10]);
            threedigit(num%1000);
        }
    }
    if(len == 6){
        threedigit(num/1000);
        if((num%100)<10  && (num%100)>0)
        {threedigit(num%1000);}
        else{
            printf(" thousand");
            threedigit(num%1000);}
        }
    }
}
void ninedigit(long long int len,long long int num){
    if(num !=0){
        if(len==7){
            printf("%s million",onedigit[num/1000000]);
            sixdigit(len-1,num%1000000);
        }
        if(len == 8){
            one_twoDigit(num/1000000,2);
            printf(" million");
            sixdigit(len-2,num%1000000);
        }
        if(len == 9){
            threedigit(num/1000000);
            if((num%100)<10  && (num%100)>0){
                sixdigit(len-3,num%1000000);
            }
            else{
                printf(" million");
                sixdigit(len-3,num%1000000);
            }
        }
    }
}
void twelvedigit(long long int len,long long int num){
    if( num != 0)
    {
        if(len == 10){   
            printf("%s billion ",onedigit[num/1000000000]);
            ninedigit(len-1,num%1000000000);
        }
        if(len == 11){
            one_twoDigit(num/1000000000,2);
            printf(" billoin ");
            ninedigit(len-2,num%1000000000);
        }
        if(len == 12){
            threedigit(num/1000000000);
            printf(" billion ");
            ninedigit(len-3,num%1000000000);
        }
    }
}
int main(){
    long long int len,num,temp;
    char inp[50];
    printf("Enter the number\n");
    gets(inp);

    len = strlen(inp);
    num = atoll(inp);

    if(len == 1 || len == 2)
    {one_twoDigit(num,len);}

    if(len >=3){
        if(len == 3)
        {threedigit(num);}
        if(len == 4 || len == 5 || len == 6)
        {sixdigit(len,num);}
        if(len == 7 || len == 8 || len == 9)
        {ninedigit(len,num);}
         if(len == 10 || len == 11 || len == 12)
        {twelvedigit(len,num);}
    }
}


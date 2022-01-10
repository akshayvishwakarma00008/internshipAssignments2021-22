#include<stdio.h>

int main(){
    long int num,sum;
    int i,j;

    printf("entert the Range for perfect number::");
    scanf("%ld",&num);

    printf("perfect numbers\n");
    for(i=1;i<=num;i++){

        sum=0;
        for(j=1;j<=i/2;j++){
            if((i%j) == 0){                     
              sum = sum + j;

            }
        }

         if(sum == i){
            printf("%d\n",sum);
        }
        
    }
}
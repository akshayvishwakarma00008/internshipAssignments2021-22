#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>

#define size 20

typedef struct node{

    int id;
    char info[50];
    //struct node *next;
} books;

books *hash_table[size];




int hash(char *name)    //this function maps sturucture data to 
{
    int  i=0;
    int length = strlen(name);
    int value = 0;
    for(i=0;i<length;i++)
    {
        value += name[i];
        value = (value*name[i]) % size; 
    }

    return value;

}

void in_it()  // intializing hash table to 0
{
    int i;
    for(i=0;i<size;i++)
    {
        hash_table[i]=NULL;
    }
}

bool insert(char *name,int id)
{
    struct node *p,*q;
    p=(struct node *)malloc(sizeof(struct node));
    strcpy(p->info,name);
    p->id=id;
    int index;
    if(p == NULL)
    {
        return false;
    }
    

    index = hash(p->info);
    if(hash_table[index] != NULL)
    {
        return false;
    }
    hash_table[index] = p;
    return true;
}

void display()
{
    int i;
    for(i=0;i<size;i++)
    {
        if(hash_table[i] == NULL)
        {
            // printf("%d\t------------\n",i);
        }
        else
        {
            printf("id = %d\t Book Name = %s\n",i,hash_table[i]->info);
        }

        
    }
}

books *lookup(char *name)
{
    int index;
    index = hash(name); //here index is where the given data is mapped
    if(hash_table[index] != NULL && strcmp(hash_table[index]->info,name)==0)
    {
        return hash_table[index];
    }
    else{
        return NULL;
    }
}



// person *delete(char *name)
// {
//     int index;
//     index = hash(name);
//     if(hash_table[index] != NULL && strcmp(hash_table[index]->name,name,size==0))
//     {
//         books * temp = hash_table[index];
//         hash_table[index] = NULL;
//         return temp;

//     }
//     else{
//         return NULL;
//     }
// }

int main()
{
    int id,choice;
    char name[25],search[25],count=0;
    in_it();

    while(1){

        printf("*************************BOOK MANAGEMANT SYSTEM***********************************\n\n");
        printf("1.Enter book name\n\n");
        printf("2.View all books in data base\n\n");
        printf("3.total books in database\n\n");
        printf("4.Search\n\n");
        printf("5.Exit\n\n");
        printf("Enter your choice::");
        scanf("%d",&choice);
        printf("\n");
       

        switch(choice){
            case 1:  
                    count++;
                    printf("enter the book details\n");
                    printf("id:");
                    scanf("%d",&id);
                    printf("\nName:");
                    getchar();
                    gets(name);
                    insert(name,id);

                    break;

            case 2:  
                    display();
                    break;

            case 3:  
                   printf("total books in the database - %d\n",count);
                    break;

            case 4: printf("Enter the name to Search\n");
                    getchar();
                    gets(search);
                    books *temp = lookup(search);
                    if(temp == NULL)
                    {
                       printf("Book Not found\n");
                    }
                    else
                    {   
                        printf("\nbook found\n"); 
                        printf("id=%d\tname=%s\n",temp->id,temp->info);
                    } 
                    break;

            case 5: exit(1); 
                    break;
        }
        
    }


    
     
    //books akshay = {.info="hello",.id=1};
    // books aman = {.info="aman",.id=2};
    // insert(&akshay);
    // insert(&aman);
    

    
    //display();
    

}
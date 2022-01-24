//book management system 

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node{

    int id;
    char info[50];
    struct node *next;
};

struct node *lib = NULL;




void insert(char *bname,int id){
    //printf("iam in insert\n and book name is-%s",bname);

    struct node *p,*q;
    p=(struct node *)malloc(sizeof(struct node));

   strcpy(p->info,bname);
    p->id=id;
    p->next=NULL;

    if(lib == NULL){
        lib=p;
        //printf("book entered sucessfully\n");
    }

    else{
        q=lib;

        while(q->next != NULL){
            q=q->next;
            
        }
        q->next=p;
        p->next=NULL;
    }
}



void display(){

    printf("\n\n");
    struct node *p;
    int i;

    if(lib == NULL){
        printf("The library is empty!!!!!!!\n");
    }



    p=lib;
    i=1;
    printf("S.no\tName\n");
    while(p != NULL){
      
        printf("%d\t%s\n",p->id,p->info);

        p=p->next;
        i++;
    }

   
}


void count(){

    printf("\n\n");
    struct node *p;
    int i;

    if(lib == NULL){
        printf("The library is empty!!!!!!!\n\n");
    }



    p=lib;
    i=0;
    while(p != NULL){
        p=p->next;
        i++;
    }

    printf("Total - Books = %d\n\n",i);

}


void delete(int pos)
{
    struct node *p,*q;
    int i;
    if(lib == NULL)
    {
        printf("No Books To Delete");
    }

    if(lib->next == NULL)
    {
        free(lib);
        lib=NULL;
    }
    // else
    // {
       
    //     for(p=lib;p->next->next != NULL;p=p->next)
    //     {
    //         p=p->next;
    //     }
    //     free(p->next);
    //     p->next=NULL;
    // }
    else
    {
        if(pos == 1)
        {
            p=lib;
            lib=lib->next;
            p->next=NULL;
        }
        else{
            for(i=1,q=lib;i<pos-1 && q->next!=NULL;i++,q=q->next)
                ;

            if(q->next != NULL)
            {
                p=q->next;
                q->next=p->next;
                p->next=NULL;
                free(p);
            }
        }
    }
}

int main(){

    int choice,id,pos;
    char bname[50];

    while(1){

        printf("BOOK MANAGEMANT SYSTEM\n\n");
        printf("1.Enter book name\n\n");
        printf("2.View all books in data base\n\n");
        printf("3.total books in database\n\n");
        printf("4.Delete\n\n");
        printf("5.Exit\n\n");
        printf("Enter your choice::");
        scanf("%d",&choice);
        printf("\n");
       

        switch(choice){
            case 1:  
                    printf("\n\nEnter id of the book::");
                    scanf("%d",&id);
                    printf("\n\nEnter book name::");
                    scanf("%s",&bname);
                    insert(bname,id);
                    break;

            case 2:  
                    display();
                    break;

            case 3:  
                    count(); 
                    break;

            case 4: printf("Enter the id\n:");
                    scanf("%d",&pos);
                    delete(pos); 
                    break;

            case 5: exit(1); 
                    break;
        }
        
    }

   

}

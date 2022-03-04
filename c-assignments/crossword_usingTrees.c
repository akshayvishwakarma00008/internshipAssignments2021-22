#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct node
{
	struct node *right;
	char word[20];
	int len;
	struct node *left;
};

struct node * create(char word[10])
{
	struct node *newnode=(struct node *)malloc(sizeof(struct node));
	newnode->left=NULL;
	newnode->right=NULL;
	strcpy(newnode->word,word);
	newnode->len=strlen(word);
	return newnode;
}

void insert(struct node *newnn,struct node **root)
{
	if(*root==NULL)
	{
		*root=newnn;
	}
	else
	{
	    struct node *parent=NULL;
	    struct node *current=*root;
	    while(1)
	    {
	        parent=current;
	        if(newnn->len<current->len)
	        {
	            current=current->left;
	            if(current==NULL)
	            {
	                parent->left=newnn;
	                return;
	            }
	        }
	        else
	        {
	            current=current->right;
	            if(current==NULL)
	            {
	                parent->right=newnn;
	                return;
	            }
	            
	        }
	    }
	}
}
		
void display(struct node *root)
{
	if(root==NULL)
	{
	    return;
	}
	printf("%s\t",root->word);
	printf("\n");
	display(root->right);
	display(root->left);
}

int matching(char temp[10],int pos[10],char known[10],int cnt_letter)
{
    int index;
    for(index=0;index<cnt_letter;index++)
    {
        if(temp[pos[index]-1]!=known[index])
        return 0;
    }
    return 1;
}

void search(int len,char known[10],struct node *root,int pos[10],int cnt_letter)
{
    char temp[10];
    if(root==NULL)
    {
        return;
    }
    if(root->len==len)
    {
        strcpy(temp,root->word);
        if(matching(temp,pos,known,cnt_letter))
        {
            printf("%s\n",root->word);
        }
    }
    if(len>=root->len)
    {
        search(len,known,root->right,pos,cnt_letter);
    }
    else
    {
        search(len,known,root->left,pos,cnt_letter);
    }
    
}

int main()
{
	char words[112][16]={"angel","animal","ant","antlers","any","ape","apple","arm","arrow","ball","Balloon","Badminton","Brush","Bin","Bag","cabs","cack","cade","cadi","cads","cafe","dapper","determined","Destined","Dedicated","diamond","distinctive","distinguished","Divine","ear","eat","ebb","eco","ecu","edh","each","eads","earl","ecclesiolatries","ecclesiological","echinodermatous","facer","fabler","fagoted","fagoter","gabbed""gabber","ghost","horse","hen","hermit","ice","isotope","igloo","imphal","jump","jug","jadoo","jupitar","kite","king","kong","kate","lion","lipid","limb","lotous","mug","money","mood","mute","mushroom","nest","neptune","newton","owl","octopus","october","oak","parrot","pea","pleasent","queen","quest","quit","rat","rabbit","rose","sat","sun","sweet","saturn","tiger","node","tweet","tap","uranus","utopia","use","usecase","van","vamp","veto","write","wise","wisdom","wicket","xmas","xerox","yak","young","yogut","zebra"};
    
  char letters[10];
	int size=sizeof(words) / sizeof(words[0]),word,length_word,ch,pos[10],cnt_letter;
	struct node *temp=NULL,*root=NULL;

	for(word=0;word<size;word++)
	{
		temp=create(words[word]);
		insert(temp,&root);
	}
	printf("Words in dictionary:-\n");
  display(root);
	
	printf("\n\nLength of the word - ");
	scanf("%d",&length_word);
	printf("\nNo.of known chracters-");
	scanf("%d",&cnt_letter);
	for(word=0;word<cnt_letter;word++)
	{
      printf("\nknown character and its position from the word-");
      scanf("%c",&letters[word]);
      scanf("%c",&letters[word]);
      scanf("%d",&pos[word]);
  }
	search(length_word,letters,root,pos,cnt_letter);
	
}
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int i,len,j,flag;

	char ch[15],temp[15],ch1[15];

	char word[112][15]={
		"angel","animal","ant","antlers","any","ape","apple","arm","arrow","ball","Balloon","Badminton","Brush","Bin","Bag","cabs","cack","cade","cadi","cads","cafe","dapper","determined","Destined","Dedicated","diamond","distinctive","distinguished","Divine","ear","eat","ebb","eco","ecu","edh","each","eads","earl","ecclesiolatries","ecclesiological","echinodermatous","facer","fabler","fagoted","fagoter","gabbed""gabber","ghost","horse","hen","hermit","ice","isotope","igloo","imphal","jump","jug","jadoo","jupitar","kite","king","kong","kate","lion","lipid","limb","lotous","mug","money","mood","mute","mushroom","nest","neptune","newton","owl","octopus","october","oak","parrot","pea","pleasent","queen","quest","quit","rat","rabbit","rose","sat","sun","sweet","saturn","tiger","tree","tweet","tap","uranus","utopia","use","usecase","van","vamp","veto","write","wise","wisdom","wicket","xmas","xerox","yak","young","yogut","zebra"
	};

	printf("Enter the charactes:");
	scanf("%s",&ch);
	len=strlen(ch);
	
	for(i=0;i<112;i++)
	{	
		flag=1;
		for(j=0;j<len;j++)
		{
			ch1[j]=word[i][j];
			if(ch[j] == ch1[j]){
				continue;
			}
			else{
				flag =0;
				break;
			}
			
			
		}
		
		if(flag == 1)
		{
			strcpy(temp,word[i]);
			printf("%s\n",temp);
		}
	}
	

}
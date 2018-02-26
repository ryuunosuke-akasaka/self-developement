#include<stdio.h>
#include<stdlib.h>
using namespace std;

//Remove element from certain position
struct node{
	struct node *prev;
	int info;
	struct node *next;
};

int main()
{
	system("color f0");
	int Count,pos;
	char ans='Y',ans2='Y';
	struct node *start,*End,*temp,*p,*q,*n,*t;
	start=End=NULL;
	do{
		temp=(struct node *)malloc(sizeof(struct node));
		printf("Enter the value of the node : ");
		fflush(stdin);
		scanf("%d",&temp->info);
		temp->next=NULL;
		temp->prev=NULL;
		if(start==NULL)
		{
		 	start=End=temp;
		}	
		else{
			End->next=temp;
			temp->prev=End;
			End=temp;
			
		}
		printf("want more nodes(Y/N): ");
		fflush(stdin);
		scanf("%c",&ans);
		
	}while(ans=='Y'||ans=='y');
	system("cls");
	system("color fc");
	
	do{
	q=start;
	printf("\nThe elements of the link list are(before removing from list):: \n");
	do
	{
		printf("%d \n",q->info);
		q=q->next;
	}while(q!=NULL);
	
	printf("Enter the position to remove from: ");
	scanf("%d",&pos);
	Count=0;
	p=start;
	do{ 
		Count++;
		if(pos==1)
		{
			start=p->next;
			start->prev=NULL;
			free(p);
			break;
		}
		if(p->next==NULL)
		{
			printf("\nThe end elt to del is %d",p->info);
			End=p->prev;
			End->next=NULL;
			printf("\n\nEnd info: %d",End->info);
			free(p);
			break;
			
		}
		else if(pos==Count)
		{
		 printf("Match found at %d \t\t\t",p->info);	
		 p->prev->next=p->next;
		 p->next->prev=p->prev;
		 free(p);
		 break;
		}
		else if(pos<Count) {
			printf("\n\nMatch not found ");
			continue;
			
		}
		p=p->next;
	}while(p!=start);
	
	n=start;
	printf("\nThe elements of the link list now are:: \n");
	do
	{
		printf("%d \n",n->info);
		n=n->next;
	}while(n!=NULL);
	system("pause");
	system("cls");
	printf("\n\nDo u want to remove more elements(y/n): ");
	fflush(stdin);
	scanf("%c",&ans2);
	}while(ans2=='Y'||ans2=='y');
	return 0;
}

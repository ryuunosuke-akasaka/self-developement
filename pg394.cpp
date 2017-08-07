#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define NULL 0
int main(){
	int *p, * table;
	int size;
	printf("\n What is the size of table?");
	scanf("%d", size);
	printf("\n");
	
	if((table = (int*)malloc(size *sizeof(int))) == NULL){
		printf("No space available \n");
		exit(1);
	}
	
	printf(" Address of the first byte is %u \n", table);
	
	printf("\n Input table values \n");
	
	for(p=table; p< table + size; p++){
		scanf("%d",p);
	}
	
	for(p = table + size - 1; p >= table; p--){
		printf("%d, is stored at address %u \n", *p, p);
	}
	return 0;
}

#include<stdio.h>
#include<search.h>
#define TABLESIZE 5

int compare(const void *ap, const void *bp){
	return (*(int *)ap - *(int *)bp);
}

main(){
	int table[TABLESIZE] = {4,2,1,5,3};
	int i;

	qsort(table, TABLESIZE, sizeof(int), compare);
	//오름차순으로 정렬하기 위한 함수 호출

	for(i=0;i<TABLESIZE;i++)
		printf("%d ",table[i]);
	printf("\n");
}

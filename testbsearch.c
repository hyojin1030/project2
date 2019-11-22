#include<stdio.h>
#include<search.h>
#define TABLESIZE 5

int compare(const void *ap, const void *bp){
	return (*(int *)ap - *(int *)bp);
}

main(){
	int table[TABLESIZE] = {1,2,3,4,5};
	int n = TABLESIZE, item = 6, *ptr;

	ptr = (int *)bsearch(&item, table, n, sizeof(int), compare);
	if(ptr == NULL)
		printf("%d is not in the table(1-%d).\n", item, n);
	else
		printf("%d is in the table(1-%d).\n",*ptr, n);
	//이진탐색을 하는 bsearch 함수를 사용하여 값이 없으면 if문이 수행, 있으면 else문이 수행
}

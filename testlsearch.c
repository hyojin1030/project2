#include<stdio.h>
#include<search.h>
#define TABLESIZE 5

int compare(const void *ap, const void *bp){
	return (*(int *)ap - *(int *)bp);
}

main(){
	int table[TABLESIZE] = {1,2,3,4,5};
	size_t n = TABLESIZE;
	int item, *ptr;

	item = 6;
	ptr = (int *)lsearch(&item, table, &n, sizeof(int), compare);
	if(ptr >= table + n-1)
		printf("%d is not in the table(1-%d), but added\n", item, n);
	else
		printf("%d is in the table(1-%d).\n",*ptr, n);

	//배열안의 요소를 선형적으로 비교하여 key값이 같은 원소가 있으면 아무것도 하지않고(else)
	//요소가 없는 경우 배열의 뒤에 추가함(if)

	item=7;
	
	ptr = (int *)lfind(&item, table, &n, sizeof(int), compare);
	if(ptr == NULL)
		printf("%d is not in the table(1-%d).\n", item, n);
	else
		printf("%d is in the table(1-%d).\n",*ptr, n);
	//배열안의 요소가 있는지 없는지만 체크함

}

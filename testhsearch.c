#include<stdio.h>
#include<search.h>

struct info {
	int id, age;
};

#define TABLESIZE 50

main(){
	char nametable[TABLESIZE*20];
	char *nameptr = nametable;
	struct info infotable[TABLESIZE];
	struct info *infoptr = infotable;
	ENTRY	item, *found;
	char name[30];
	int i = 0;

	(void)hcreate(TABLESIZE);	//테이블 생성
	while(scanf("%s%d%d", nameptr, &infoptr->id, &infoptr->age)!=EOF && i++ < TABLESIZE){
		item.key = nameptr;
		item.data = (char *)infoptr;

		(void) hsearch(item, ENTER); //테이블에 데이터를 입력

		nameptr += strlen(nameptr)+1;
		infoptr++;
	}

	//테이블 검색
	item.key = name;
	while(scanf("%s",item.key)!=EOF){
		if((found = hsearch(item, FIND))!=NULL){
			printf("found %s, id = %d, age = %d\n",found->key,((struct info *)found->data)->id,
					((struct info *)found->data)->age);
		}else{
			printf("no such employee %s\n",name);
		}
	}
}

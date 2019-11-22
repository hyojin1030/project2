#include<stdio.h>
#include<stdlib.h>

main(){
	int i,x;
	for(i=0;i<20;i++){
		x=(int)(6*(rand()/(RAND_MAX+1.0))+1);
		printf("%d ",x);
	}
	//1~6 사이의 난수를 20번 발생시켜 출력함
}

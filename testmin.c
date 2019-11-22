#include<stdio.h>
#include<string.h>

main(){
	char s[20], t[20], min[20];
	printf("char 1 ? "); scanf("%s",s);
	printf("char 2 ? "); scanf("%s",t);
	//문자열을 각 각 입력받아 저장

	if(strcmp(s,t)<0) //앞쪽의 문자열이 더 큰 경우 양수, 뒤쪽이 더 크면 음수를 반환 같은 경우 0을 반환
		strcpy(min,s);
	else
		strcpy(min,t);
	//strcmp 함수를 이용하여 두 문자열을 비교하여 더 작은 문자열을 min배열에 저장
	

	printf("%s\n",min);	//저장된 min의 값을 출력

}


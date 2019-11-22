#include<stdio.h>
#include<string.h>
#include<ctype.h>

main(){
	int i;
	char s[20], t[20];

	printf("string ? ");
	scanf("%s", s);
	//문자열을 입력받음 
	
	for(i=0;i<=strlen(s);i++){		
		if(isupper(s[i]))
			t[i] = tolower(s[i]);  //대문자인 경우 소문자로 변환
		else if(islower(s[i]))
			t[i] = toupper(s[i]);  //소문자인 경우 대문자로 변환
		else
			t[i] = s[i];			  //그 외의 경우는 s배열에 저장된 값을 t배열에 복사

	}   //입력받은 string의 길이만큼 for문이 수행


	printf("%s -----> %s\n",s,t);

	//변환 전인 s 배열과 변환 후 t 배열을 출력

}

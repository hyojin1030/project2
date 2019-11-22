#include<stdio.h>
#include<math.h>

main(){
	double x;
	printf("%10s%10s%10s%15s%20s\n","x","log(x)","sqrt(x)","exp(x)","pow(10.0,x)");
																		//해당 필드의 이름을 출력
	for(x=1;x<=10;x++)
		printf("%10.5f%10.5f%10.5f%15.5f%20.5f\n",x,log(x),sqrt(x),exp(x),pow(10.0,x));
												//1~10까지 x값을 증가시키며 함수 계산 결과를 출력함
}

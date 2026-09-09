//weeek01-1.cpp SOIT106_ADVANCE_001
#include <stdio.h>
int main()
{
	int N; ///整數N
	scanf("%d", &N); ///將N的值備份b, 答案0開始湊
	int b=N, ans=0;
	while(N>0){
		ans = ans*10 + N%10;
		N = N/10;
	}
	printf("%d+%d=%d\n", b, ans, b+ans);
}

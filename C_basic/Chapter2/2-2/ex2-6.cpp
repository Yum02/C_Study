// Description: 지수 형태의 실수 상수 출력하기
#include <stdio.h>

int main()
{
	printf("%.1lf\n", 1e6); // 1.0e6

	printf("%.7f\n", 3.14e-5); // 0.0000314, 소수점 이하 7자리까지 출력
	printf("%le\n", 0.0000314); // 3.14e-005, 소수점 형태의 실수를 지수 형태로 출력
	printf("%.2le\n", 0.0000314); // 3.14e-005, 지수 형태로 소수점 이하	2자리까지 출력

	return 0;
}
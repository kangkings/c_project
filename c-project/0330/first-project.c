#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int korean, english, math, total;
	float average;
	printf("국어, 영어, 수학 점수를 입력하세요 ex100 96 30");
	scanf("%d %d %d", &korean, &english, &math);
	total = korean + english + math;
	average = total / 3;
	printf("총점 : %d\n평균 : %.1f", total, average);

}
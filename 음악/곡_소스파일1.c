#include <stdio.h>
#include <Windows.h>
#include "곡_헤더1.h"
#include "start.h"

int main(void)
{
	int choose;
	while (1) {
		printf("0. 종료 1. 음계  2. 학교 종이 땡땡땡  3. 작은 별 4. 저 야곱과 같이 베이스\n");
		scanf_s("%d", &choose);
		switch (choose) {
		case 0:
			return 0;//종료하면 바로 창 닫기
		case 1:
			Steps();
			break;
		case 2:
			Music1();
			break;
		case 3:
			Music2();
			break;
		case 4:
			Music3();
			break;
		default:
			printf("잘못입력하셨습니다. \n");
			continue;
		}
	}
		return 0;
}

int bpm(void) {
	int Bpm;
	printf("BPM:");
	scanf_s("%d", &Bpm);
	if (Bpm == 0) {
		printf("잘못 입력하셨습니다. \n");
		Bpm=bpm();
	}
	return 60000/Bpm;//천 분의 일 초 단위로 시간을 처리하는 시스템이므로
}
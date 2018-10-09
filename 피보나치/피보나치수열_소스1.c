#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <conio.h>
#include "fibonacci.h"

int main(void)
{
	int N, choose;
	while (1) {
		system("cls");//콘솔화면을 지움
		while (_kbhit()) _getch();//입력버퍼를 비움
		printf("Press Esc to Exit\n");
		printf("버그/오류 신고는 ahnchankyung@gmail.com\n");
		printf("1. n번째 피보나치 수열 2. n번째 피보나치 수열까지의 합 \n");
		choose = _getch();
		if (choose == ESC) exit(0);
		else {
			choose -= 48;//아스키코드에서 숫자는 48부터 시작
			switch (choose) {
			case 1:
				printf("1번을 입력하셨습니다.\n");
				Sleep(300);
				printf("정수를 입력하시오:");
				scanf("%d", &N);
				printf("%d번째 피보나치 수열은 %d이다.\n", N, Nstfibonacci(N));
				break;
			case 2:
				printf("2번을 입력하셨습니다.\n");
				Sleep(300);
				printf("정수를 입력하시오:");
				scanf("%d", &N);
				printf("0부터 %d번째 피보나치 수열까지의 합은 %d이다.\n", N, Sumfibonacci(N));
				break;
			default:
				printf("잘못 입력하셨습니다.");
				continue;
			}
			Sleep(3000);
		}
	}
	return 0;
}
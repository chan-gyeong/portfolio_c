// 정보 손실 최소화.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"
#include <stdio.h>
#include <Windows.h>
#include <math.h>

int Len(char data[]);
double DataCalculate(char data[], int len);

int main(void)
{
	int choice; char str[100];//글자 수가 100 미만이어야 함.
	while (1) {
		printf("1.lenth 2.data 3.exit \n");
		scanf_s(" %d", &choice);
		switch (choice) {
		case 1:
			printf("any sentence");
			scanf(" %s", str);
			printf("%d \n", Len(str));
			Sleep(2000);
			system("cls");
			break;
		case 2:
			printf("any sentense:");
			scanf(" %s", str);
			printf("%f \n", DataCalculate(str, Len(str)));
			Sleep(3000);
			system("cls");
			break;
		default:
			exit(0);
		}
	}
}

int Len(char data[])
{
	int i=0;
	while (1) {
		if (data[i] == 0) {
			return i;
		}
		else
			i++;
	}
}

double DataCalculate(char arr[], int len)
{
	/*
	arr :입력받은 문자열
	data[0][j] :arr에서 사용된 문자
	data[1][j] :data[0][j]이 사용된 횟수
	*/
	char data[2][100];//초기화
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 2; j++) {
			data[j][i] = 0;
		}
	}
	
	int j = 0;
	for (int i = 0; (arr[i] != 0) && i < 100; i++) {//각각의 글자가 문자열에서 얼마나 반복되고 있는지 확인
		for (int k = 0; k < j; k++) {
			if (data[0][k] == arr[i]) {//같은 글자가 있었는지 확인/넘어가기
				goto SAMECHAR;//문제없음
			}
		}
		data[0][j] = arr[i]; //받아오기
		for (int k = 0; (arr[k] != 0) && k < 100; k++) {//같은 글자 횟수확인
			if (data[0][j] == arr[k]) {
				data[1][j]++;
			}
		}
		j++;
	SAMECHAR:;
	}
	double H = 0; double px[100];//NaN오류: 계산 불가능한 값을 입력받음
	for (int i = 0; i<j; i++) {//여기 검사 항이 잘못 되어있었음
		px[i] = data[1][i] / (double)len;
		H -= (px[i] * (log10(px[i]) / log10(2)));
	}
	return H;//정보량
}
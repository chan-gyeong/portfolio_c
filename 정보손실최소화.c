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
			printf("any sentence: ");
			scanf(" %s", str);
			printf("%d \n", Len(str));
			Sleep(2000);
			system("cls");
			break;
		case 2:
			printf("any sentense:");
			scanf(" %s", str);
			printf("%f \n", DataCalculate(str, Len(str)));
			Sleep(2000);
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
	
	char data[3][100]; double px[100];//초기화
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 3; j++) {
			
			data[j][i] = 0;
		}
		px[i] = 0;
	}
	//각각의 기호가 문자열에서 얼마나 반복되고 있는지 확인
	int j = 0;
	for (int i = 0; (arr[i] != 0) && i < 100; i++) {
		for (int k = 0; k < j; k++) {//넘어가기
			if (data[0][k] != arr[i]) goto SKIP;
		}
		data[0][j] = arr[i]; //받아오기
		for (int k = 0; (arr[k] != 0) && k < 100; k++) {//같은 글자 확인
			if (data[0][j] == arr[k]) {
				data[1][j]++;
			}
		}
		j++;
	SKIP:;
		printf("%d, %d\n", data[1][j], j);
	}
	double H=0;
	for (int i = 0; (arr[i] != 0) && i < 100; i++) {
		printf("%d\n", len);
		px[i] = data[1][i] / (double)len;
		H -= (px[i] * (log10(px[i]) / log10(2)));
	}
	return H;
}
// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.

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
		system("cls");//�ܼ�ȭ���� ����
		while (_kbhit()) _getch();//�Է¹��۸� ���
		printf("Press Esc to Exit\n");
		printf("����/���� �Ű�� ahnchankyung@gmail.com\n");
		printf("1. n��° �Ǻ���ġ ���� 2. n��° �Ǻ���ġ ���������� �� \n");
		choose = _getch();
		if (choose == ESC) exit(0);
		else {
			choose -= 48;//�ƽ�Ű�ڵ忡�� ���ڴ� 48���� ����
			switch (choose) {
			case 1:
				printf("1���� �Է��ϼ̽��ϴ�.\n");
				Sleep(300);
				printf("������ �Է��Ͻÿ�:");
				scanf("%d", &N);
				printf("%d��° �Ǻ���ġ ������ %d�̴�.\n", N, Nstfibonacci(N));
				break;
			case 2:
				printf("2���� �Է��ϼ̽��ϴ�.\n");
				Sleep(300);
				printf("������ �Է��Ͻÿ�:");
				scanf("%d", &N);
				printf("0���� %d��° �Ǻ���ġ ���������� ���� %d�̴�.\n", N, Sumfibonacci(N));
				break;
			default:
				printf("�߸� �Է��ϼ̽��ϴ�.");
				continue;
			}
			Sleep(3000);
		}
	}
	return 0;
}
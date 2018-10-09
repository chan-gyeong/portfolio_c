#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include "헤더파일1.h"

int main(void)
{
	int choose;
	double nun;
	int num;
	while(1){
		system("cls"); fflush(stdin);
		printf("버그신고는 010-5963-8385 또는 ahnchankyung@gmail.com 으로\n");
		printf("0. 설명 1. 소수판별 2. 소수개수 3. n번째 소수 4. 소수 수열 출력\n");
		printf("원하는 기능을 선택하시오:");
		scanf_s("%d", &choose);
		Sleep(500);
		if (choose == 0) {
			printf("숫자 입력 후 엔터(enter) 키를 누른다.\n");
			printf("'소수판별'은 그 수가 소수인지를 판별하고, \n");
			printf("'소수갯수'는 1부터 입력한 수 까지의 소수의 갯수를 출력하며, \n");
			printf("'n번째 소수'는 n번째 소수를 출력하며, \n");
			printf("'소수 수열 출력'은 작은 수부터 시작해서 n개의 소수를 출력하고, \n");
			printf("마지막으로, '설명'은 말그대로 설명을 한다. \n");
		}
		else if(choose>0&&choose<=4){
INPUT_NUM:
			printf("정수를 입력하시오(너무 큰 수를 입력하지 말 것):");
			scanf_s("%lf", &nun);
			if (nun > 2000000000) {
				printf("숫자가 너무 큽니다.\n");
				Sleep(500);
				goto INPUT_NUM;
			}
			num = (int)nun;
			switch (choose)
			{
			case 1:
				switch (CheckPrime(num))
				{
				case PRIME:
					printf("%d는 소수이다.\n", num);
					break;
				case NOT:
					printf("%d는 소수가 아니다.\n", num);
					break;
				default:
					printf("오류! \n");
					return 1;
					break;
				}
				break;
			case 2:
				if (num > 10000000)
					printf("조금만 기다려 주세요.\n");
				printf("1부터 %d까지의 소수의 갯수는 %d개이다.\n", num, CountPrime2(num));
				break;
			case 3:
				if (num > 50000000) {
					printf("숫자가 너무 큽니다.\n");
					Sleep(500);
					goto INPUT_NUM;
				}
				else if (num > 10000000)
					printf("조금만 기다려 주세요.\n");
				printf("%d 번째 소수는 %d이다. \n", num, NstPrime2(num));
				break;
			case 4:
				PrimeArr(num);
				break;
			}
		}
		else {
			printf("잘못 입력 했습니다.\n");
			Sleep(500);
			continue;
		}
		system("pause");
		Sleep(1000);
	}
	return 0;
}

int PrimeArr(int num)
{
	int i, sum=0;
	for(i=1;i<=num;i++){
		printf("%3d ", NstPrime2(i));
		sum+=NstPrime2(i);
		if(i%10==0)
			printf("\n");
	}
	return sum;
}
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include "�������1.h"

int main(void)
{
	int choose;
	double nun;
	int num;
	while(1){
		system("cls"); fflush(stdin);
		printf("���׽Ű�� 010-5963-8385 �Ǵ� ahnchankyung@gmail.com ����\n");
		printf("0. ���� 1. �Ҽ��Ǻ� 2. �Ҽ����� 3. n��° �Ҽ� 4. �Ҽ� ���� ���\n");
		printf("���ϴ� ����� �����Ͻÿ�:");
		scanf_s("%d", &choose);
		Sleep(500);
		if (choose == 0) {
			printf("���� �Է� �� ����(enter) Ű�� ������.\n");
			printf("'�Ҽ��Ǻ�'�� �� ���� �Ҽ������� �Ǻ��ϰ�, \n");
			printf("'�Ҽ�����'�� 1���� �Է��� �� ������ �Ҽ��� ������ ����ϸ�, \n");
			printf("'n��° �Ҽ�'�� n��° �Ҽ��� ����ϸ�, \n");
			printf("'�Ҽ� ���� ���'�� ���� ������ �����ؼ� n���� �Ҽ��� ����ϰ�, \n");
			printf("����������, '����'�� ���״�� ������ �Ѵ�. \n");
		}
		else if(choose>0&&choose<=4){
INPUT_NUM:
			printf("������ �Է��Ͻÿ�(�ʹ� ū ���� �Է����� �� ��):");
			scanf_s("%lf", &nun);
			if (nun > 2000000000) {
				printf("���ڰ� �ʹ� Ů�ϴ�.\n");
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
					printf("%d�� �Ҽ��̴�.\n", num);
					break;
				case NOT:
					printf("%d�� �Ҽ��� �ƴϴ�.\n", num);
					break;
				default:
					printf("����! \n");
					return 1;
					break;
				}
				break;
			case 2:
				if (num > 10000000)
					printf("���ݸ� ��ٷ� �ּ���.\n");
				printf("1���� %d������ �Ҽ��� ������ %d���̴�.\n", num, CountPrime2(num));
				break;
			case 3:
				if (num > 50000000) {
					printf("���ڰ� �ʹ� Ů�ϴ�.\n");
					Sleep(500);
					goto INPUT_NUM;
				}
				else if (num > 10000000)
					printf("���ݸ� ��ٷ� �ּ���.\n");
				printf("%d ��° �Ҽ��� %d�̴�. \n", num, NstPrime2(num));
				break;
			case 4:
				PrimeArr(num);
				break;
			}
		}
		else {
			printf("�߸� �Է� �߽��ϴ�.\n");
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
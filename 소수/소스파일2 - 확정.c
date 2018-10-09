#include <math.h>
#include "�������1.h"

int CheckPrime(int check)//�ڱ��ڽ��� 2���� [��(�ڱ��ڽ�)]������ ������.
{
	int divide, root= (int)floor(sqrt((double)check));//� ���� �ٸ� ���� ���� ��, ���� ��� ������ �� �� �ϳ��� �ݵ�� ��(x)�����̴�.
	for (divide = 2; divide <= root; divide++) { //2���� ��Ʈ x���� �� ����������� ���� ������ �ռ���
		if (check%divide == 0)
			return NOT;
	}
	return PRIME;
}

int CountPrime2(int fin)
{
	int prime=2, num = 0;
	if (CheckPrime(prime) == PRIME)
		num++;
	for (prime = 3; prime <= fin; prime+=2) {
		if (CheckPrime(prime) == PRIME)
			num++;
	}
	return num;
}

int NstPrime2(int nst)
{
	int prime = 2, num = 0;
	if (CheckPrime(prime) == PRIME)
		num++;
	if (num >= nst)
		return prime;
	prime++;
	while (1) {
		if (CheckPrime(prime) == PRIME)
			num++;
		if (num >= nst)
			return prime;
		prime+=2;
	}
}
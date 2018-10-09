#include <math.h>
#include "헤더파일1.h"

int CheckPrime(int check)//자기자신을 2부터 [√(자기자신)]까지로 나눈다.
{
	int divide, root= (int)floor(sqrt((double)check));//어떤 수를 다른 수로 나눌 때, 나눈 몫과 나누는 수 중 하나는 반드시 √(x)이하이다.
	for (divide = 2; divide <= root; divide++) { //2부터 루트 x까지 중 나누어떨어지는 수가 있으면 합성수
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
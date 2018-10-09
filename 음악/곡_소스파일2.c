/***
*음이름 정의
7기본음계
********************/
#include <Windows.h>
#include <math.h>
#define NUM (pow(2.0,(double)(step)-4.0))

int C(int step, int bpm) //262 //Do
{
	int Hz = (int)(262 * NUM);
	Beep(Hz, bpm);
	return Hz;
}

int Cs(int step, int bpm)
{
	int Hz = (int)(277 * NUM);
	Beep(Hz, bpm);
	return Hz;
}

int D(int step, int bpm)//294 //Re
{
	int Hz = (int)(294 * NUM);
	Beep(Hz, bpm);
	return Hz;
}

int Ds(int step, int bpm)
{
	int Hz = (int)(311 * NUM);
	Beep(Hz, bpm);
	return Hz;
}

int E(int step, int bpm)//330 //Mi
{
	int Hz = (int)(330 * NUM);
	Beep(Hz, bpm);
	return Hz;
}

int F(int step, int bpm)//349 //Fa
{
	int Hz = (int)(349 * NUM);
	Beep(Hz, bpm);
	return Hz;
}

int Fs(int step, int bpm)
{
	int Hz = (int)(370 * NUM);
	Beep(Hz, bpm);
	return Hz;
}

int G(int step, int bpm)//392 //Sol
{
	int Hz = (int)(392 * NUM);
	Beep(Hz, bpm);
	return Hz;
}

int Gs(int step, int bpm)
{
	int Hz = (int)(415 * NUM);
	Beep(Hz, bpm);
	return Hz;
}

int A(int step, int bpm)//440 //모든 음의 기준 //라
{
	int Hz = (int)(440 * NUM);
	Beep(Hz, bpm);
	return Hz;
}

int As(int step, int bpm)
{
	int Hz = (int)(466 * NUM);
	Beep(Hz, bpm);
	return Hz;
}

int B(int step, int bpm)
{
	int Hz = (int)(494 * NUM);
	Beep(Hz, bpm);
	return Hz;
}
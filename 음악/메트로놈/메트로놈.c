#include <stdio.h>
#include <Windows.h>

int main(void)
{
	int i, bpm;
	printf("BPM:");
	scanf_s("%d", &bpm);
	for (i = 1; i <= 30; i++) {
		printf("%d \n", i);
		Beep(440, 100);
		Sleep(60000 / bpm);
	}
    return 0;
}


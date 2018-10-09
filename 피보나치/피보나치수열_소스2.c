int Nstfibonacci(int n) {
	int num1 = 0, num2 = 1, next;
	if (n <= 0) return num1;//n이 0이하이면 0반환
	else {
		for (int i = 1; i < n; i++) {
			next = num2 + num1;
			num1 = num2;
			num2 = next;
		}
		return num2;
	}
}

int Sumfibonacci(int n)
{
	int num1 = 0, num2 = 1, next, sum = 0;
	for (int i = 1; i < n; i++) {//n이 0이하이면 0반환
		sum += num2;
		next = num2 + num1;
		num1 = num2;
		num2 = next;
	}
	return sum;
}

int maxfibonacci(int n)
{
	int num1 = 0, num2 = 0, next = 1;
	while (num2 < n) {
		num1 = num2;
		num2 = next;
		next = num1 + num2;
	}
	return num2;
}
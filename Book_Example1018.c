//用递归算法求一个数n的阶乘
#include <stdio.h> 

int factorial(int);
float psum(float a[], int n);

int main(void) {
	int n;

	printf("请输入你要算的阶乘数:");
	scanf_s("%d", &n);
	printf("%d!等于=%ld", n, factorial(n));

	return 0;
}

int factorial(int number) {
	/*if(number == 1)
		return 1;
	else{
		return number * factorial(number - 1);
	}*/

	long fac = 1;

	while (number > 0) {
		fac = fac * number;
		number--;
	}

	return fac;
}

float psum(float a[], int n) {
	if (n <= 0)
		return 0;
	else {
		//return psum(a, n - 1) + a[n - 1];

	}
}
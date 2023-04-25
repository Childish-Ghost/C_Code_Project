#include <stdio.h>

int main() {
	int n = 0;
	scanf("%d", &n);
	int a, b, c;
	a = n % 10; //3
	n = n / 10;//12.3按照int类型省略小数
	b = n % 10;//2
	n = n / 10;//1.2按照int类型省略小数
	c = n;

	printf("%d", a * 100 + b * 10 + c);

	return 0;

}
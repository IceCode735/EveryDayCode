#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int temp = 0;
//	int count = 0;
//	int d = 1;
//  int n = 0;
//  printf("请输入一个整数:");
//	scanf("%d", &n);
//	printf("顺序输出结果为: ");
//	if (n == 0) {
//		printf("%d",0);
//	}
//	if (n < 0) {
//		n *= -1;
//		printf("-");
//	}
//	int t = n;
//	for (i = 0; t != 0; ++i) {
//		t = t / 10;
//		count++;
//	}
//	for (i = 0; i < count; ++i) {
//		d = 1;
//		for (j = 1; j <count-i; ++j) {
//			d *= 10;
//		}
//		temp = n / d;
//		printf("%d", temp);
//		n = n % d;
//	}
//	printf("\n");
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int temp = 0;
//	int count = 0;
//	int n = 0;
//	printf("请输入一个整数:");
//	scanf("%d", &n);
//	printf("顺序输出结果为: ");
//	if (n == 0) {
//		printf("%d",0);
//	}
//	if (n < 0) {
//		n *= -1;
//		printf("-");
//	}
//	int t = n;
//	for (i = 0; t != 0; ++i) {
//		t /= 10;
//		count++;
//	}
//	for (i = 0; i < count; ++i) {
//		temp = n / (int)pow(10, count - 1 - i);
//		n %= (int)pow(10, count - 1 - i);
//		printf("%d", temp);
//	}
//	printf("\n");
//	return 0;
//}

//void S_printf(int n)
//{
//	
//	if (n<10) {
//		printf("顺序输出结果为：");
//		printf("%d", n);
//		return;
//	}
//	S_printf(n/10);
//	printf("%d",n%10);
//}
//int main()
//{
//	int n = 0;
//	printf("请输入一个整数值:");
//	scanf("%d", &n);
//	S_printf(n);
//	return 0;
//}


//void S_printf(int arr[], int n)
//{
//	int i = 0;
//	int count = 0;
//	int temp = 0;
//	int t = n;
//	if (n == 0) {
//		printf("%d\n", 0);
//		return;
//	}
//	for (i = 0; t != 0; ++i) {
//		t /= 10;
//		count++;
//	}
//	int  u = n > 0 ? count - 1 : count;
//	if (n < 0) {
//		n *= -1;
//		arr[count] = '-';
//	}
//	for (i=0; i<count; ++i) {
//		temp=n % 10;
//		arr[i] = temp+'0';
//		n = n / 10;
//	}
//	for (i = u; i >= 0; --i) {
//		printf("%c", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	int arr[100] = { 0 };
//	S_printf(arr, n);
//	return 0;
//}

//int S_printf(int n)
//{
//	int i = 0;
//	int p = 0;
//	bool is_less = false;
//	int temp = 0;
//	int t = n;
//	int count = 0;
//	for (i = 0; t != 0; ++i) {
//		t /= 10;
//		count++;
//	}
//	if (n < 0) {
//		n *= -1;
//		is_less = true;
//	}
//	for (i = 0; i < count; ++i) {
//		temp = n % 10;
//		p += temp * (int)pow(10,i);
//		n /= 10;
//	}
//	if (is_less) {
//		return p * -1;
//	}
//	else {
//		return p;
//	}
//}
//
//int main()
//{
//	int n = 0;
//	printf("%d\n", S_printf(n));
//	return 0;
//}

void S_printf(int n)
{
	char arr[100] = { 0 };
	int count=sprintf(arr, "%d", n);
	int u = n > 0 ? count - 1:count;
	for (int i = 0; i <= count; ++i) {
		printf("%c", arr[i]);
	}
}
int main()
{
	int n = 123;
	S_printf(n);
	return 0;
}
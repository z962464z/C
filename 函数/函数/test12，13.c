#define  _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>


//自定义函数

//输出最大值
//int get_max(int x, int y)
//{
//	return (x > y) ? (x) : (y);
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	printf("max=%d\n", max);
//	return 0;
//}


//函数的形式

//传参

//传值
//void Swap1(int x, int y)//形式参数
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
////传址
//void Swap2(int *px, int *py)//实际参数
//{
//	int tmp = 0;
//	tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//int main()
//{
//	int num1 = 1;
//	int num2 = 2;
//	Swap1(num1, num2);
//	printf("Swap1:num1=%d num2=%d\n", num1, num2);//形式参数
//	Swap2(&num1, &num2);
//	printf("Swap2:num1=%d num2=%d\n", num1, num2);//实际参数
//	return 0;
//}



//函数递归

//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int num = 1234;
//	print(num);
//	return 0;
//}

//求字符串的长度
//int my_strlen(char *str)
//{
//	if (*str == '\0')
//		return 0;
//	else
//		return 1 + my_strlen(str + 1);
//}
//int main()
//{
//	char arr[] = "bit";
//	//int len = strlen(arr);//求字符串的长度
//
//	int len = my_strlen(arr);
//	//arr是数组，数组传参，传过去的不是整个数组，惹事第一个元素的地址
//	printf("%d\n", len);
//	return 0;
//}

//求n的阶乘
//int Fac1(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n;i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int Fac2(int n)//递归方法
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n*Fac2(n - 1);
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fac2(n);
//	printf("%d\n", ret);
//	return 0;
//}


//求第n个斐波那契数

//递归方法可能导致栈溢出，可用循环的方法代替

//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
int Fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = Fib(n);
	printf("%d\n", ret);
	return 0;
}
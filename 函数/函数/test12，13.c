#define  _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>


//�Զ��庯��

//������ֵ
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


//��������ʽ

//����

//��ֵ
//void Swap1(int x, int y)//��ʽ����
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
////��ַ
//void Swap2(int *px, int *py)//ʵ�ʲ���
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
//	printf("Swap1:num1=%d num2=%d\n", num1, num2);//��ʽ����
//	Swap2(&num1, &num2);
//	printf("Swap2:num1=%d num2=%d\n", num1, num2);//ʵ�ʲ���
//	return 0;
//}



//�����ݹ�

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

//���ַ����ĳ���
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
//	//int len = strlen(arr);//���ַ����ĳ���
//
//	int len = my_strlen(arr);
//	//arr�����飬���鴫�Σ�����ȥ�Ĳ����������飬���µ�һ��Ԫ�صĵ�ַ
//	printf("%d\n", len);
//	return 0;
//}

//��n�Ľ׳�
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
//int Fac2(int n)//�ݹ鷽��
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


//���n��쳲�������

//�ݹ鷽�����ܵ���ջ���������ѭ���ķ�������

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
#define  _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>

//除法，取模
//int main()
//{
//	int a = 5;
//	int b = 2;
//	int c = 5 / 2;
//	int d = 5 % 2;
//	printf("%d\n", c);
//	printf("%d\n", d);
//	return 0;
//}


//右移位

//int main()
//{
//	int a = 16;
//	int b =a >> 1;
//	printf("%d\n", b);
//	return 0;
//}

//左移位
//int main()
//{
//	int a = 16;
//	int b = a << 1;
//	printf("%d\n", b);
//	return 0;
//}

//按位与
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a&b;
//	// 3 -   00000000000000000000000000000011
//	// 5 -   00000000000000000000000000000101
//	//按位与 00000000000000000000000000000001 - 一假必假，全真为真
//	printf("%d\n", c);
//	return 0;
//}

//按位或
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a | b;//一真必真
//	printf("%d\n", c);
//	return 0;
//}

//按位异或
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a ^ b;//相同为0，相异为1
//	printf("%d\n", c);
//	return 0;
//}

//不创建临时变量，交换两个数的值
//int  main()
//{
//	int a = 3;
//	int b = 5;
//	printf("before:a=%d,b=%d\n", a, b);
//
//	//加减法-可能会溢出
//	//a = a + b;
//	//b = a - b;
//	//a = a - b;
//
//	//异或的方法
//	a = a^b;
//	//a-011
//	//b-101
//	//>-110
//
//	b = a^b;
//	//a-110
//	//b-101
//	//>-011
//
//	a = a^b;
//	//a-110
//	//b-011
//	//>-101
//
//	printf("after:a=%d,b=%d\n", a, b);
//	return 0;
//}


//统计num的补码中有几个1
int main()
{
	int num = 0;
	int count = 0;
	scanf("%d", &num);
	//while (num)
	//{
	//	if (num % 2 == 1)
	//		count++;
	//	num = num / 2;
	//}

	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if (1 == ((num >> i) & 1))
			count++;
	}
	printf("%d\n", count);
	return 0;
}
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
//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	//while (num)
//	//{
//	//	if (num % 2 == 1)
//	//		count++;
//	//	num = num / 2;
//	//}
//
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> i) & 1))
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//void test1(int arr[])
//{
//	printf("%d\n",sizeof(arr));
//}
//
//void test2(char ch[])
//{
//	printf("%d\n",sizeof(ch));
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(ch));
//	test1(arr);
//	test2(ch);
//	return 0;
//}


//int main()
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;
//	i = a++ || ++b || d++;
//	printf("a=%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d);
//	return 0;
//}


struct Stu
{
	char name[20];
	int age;
	char id[20];
};
int main()
{
	//使用struct Stu这个类型创建了一个学生对象s1，并初始化
	struct Stu s1 = { "张三", 20, "20200204193" };
	struct Stu*ps = &s1;
	printf("%s\n", ps->name);
	printf("%d\n", ps->age);
	printf("%s\n", ps->id);
	//结构体指针->成员名

	/*printf("%s\n", (*ps).name);
	printf("%d\n", (*ps).age);*/

	/*printf("%s\n", s1.name);
	printf("%d\n", s1.age);
	printf("%s\n", s1.id);*/
	//结构体变量.成员名
	return 0;
}
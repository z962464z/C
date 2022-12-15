#define  _CRT_SECURE_NO_WARNINGS 


#include <stdio.h>
#include <string.h>

//int main()
//{
//	//int arr[] = { 1, 2, 3 };//不完全初始化，剩下的元素默认初始化为0
//	char arr[] = "abcdef";
//	printf("%d\n",sizeof(arr));
//	//sizeof-计算arr所占空间的大小
//	//7个元素-“a b c d e f \0"
//
//	printf("%d\n", strlen(arr));
//	//strlen-求字符串的长度—‘\0'之前的字符个数
//
//	return 0;
//}

//1.strlen 和 sizeof 没有什么关联
//strlen 是求字符串长度 - 只能针对字符串求长度 - 是库函数 - 使用时要引头文件 string
//sizeof 计算变量、数组、类型的大小 - 单位是字符 - 是操作符


//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c' };
//	printf("%d\n", sizeof(arr1));// a b c \0 ;4
//	printf("%d\n", sizeof(arr2));// a b c ;3
//	printf("%d\n", strlen(arr1));// a b c \0 ;3 ,'\0'之前的值
//	printf("%d\n", strlen(arr2));// a b c ...;随机值，因为没有找到 '\0'
//
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//数组使用下标来访问时，下标从0开始
//	//printf("%c\n", arr[3]);//打印对应下标的元素
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0; i < len; i++)
//	{
//		printf("%c  ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组的大小
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("&arr[%d]=%p\n", i, &arr[i]);// %p 打印地址
		//数组在内存中是连续存放的，从低地址->高地址
	}
	return 0;
}
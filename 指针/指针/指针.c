#define  _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>

//int main()
//{
//	int a = 10;
//	int*p = &a;//指针变量
//	return 0;
//}


//int main()
//{
//	//printf("%d\n", sizeof(char*));
//	//printf("%d\n", sizeof(short*));
//	//printf("%d\n", sizeof(int*));
//	//printf("%d\n", sizeof(double*));
//
//	int a = 0x11223344;
//	//int*pa = &a;//能够访问4个字节
//	//*pa = 0;
//
//	char*pc = &a;//能够访问1个字节
//	*pc = 0;
//	//printf("%p\n", pa);
//	//printf("%p\n", pc);
//	return 0;
//}


//int main()
//{
//	int a = 0x11223344;
//	int*pc = &a;
//	char*pb = &a;
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);//int *pc  pc+1 -->4
//	printf("%p\n", pb);
//	printf("%p\n", pb + 1);//char *pb pb+1 -->1
//	return 0;
//}

//
//int main()
//{
//	int arr[10] = { 0 };
//	int*p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//int*p = arr;
//	int*p = &arr[9];
//	/*for (i = 0; i < 10; i++)
//	{
//		printf("%d ",* p);
//		p = p + 1;
//	}*/
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *p);
//		p -= 1;
//	}
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	printf("%d\n", &arr[9] - &arr[0]);
//	return 0;
//}


int my_strlen(char*str)
{
	char*start = str;
	char*end = str;
	while (*end != '\0')
	{
		end++;
	}
	return end - start;
}
int main()
{
	char arr[] = "bit";
	int len = my_strlen(arr);
	printf("%d\n", len);
	return 0;
}
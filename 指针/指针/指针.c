#define  _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>

//int main()
//{
//	int a = 10;
//	int*p = &a;//指针变量
//	return 0;
//}


int main()
{
	//printf("%d\n", sizeof(char*));
	//printf("%d\n", sizeof(short*));
	//printf("%d\n", sizeof(int*));
	//printf("%d\n", sizeof(double*));

	int a = 0x11223344;
	//int*pa = &a;//能够访问4个字节
	//*pa = 0;

	char*pc = &a;//能够访问1个字节
	*pc = 0;
	//printf("%p\n", pa);
	//printf("%p\n", pc);
	return 0;
}



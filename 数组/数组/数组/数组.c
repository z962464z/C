#define  _CRT_SECURE_NO_WARNINGS 


#include <stdio.h>
#include <string.h>

//int main()
//{
//	//int arr[] = { 1, 2, 3 };//����ȫ��ʼ����ʣ�µ�Ԫ��Ĭ�ϳ�ʼ��Ϊ0
//	char arr[] = "abcdef";
//	printf("%d\n",sizeof(arr));
//	//sizeof-����arr��ռ�ռ�Ĵ�С
//	//7��Ԫ��-��a b c d e f \0"
//
//	printf("%d\n", strlen(arr));
//	//strlen-���ַ����ĳ��ȡ���\0'֮ǰ���ַ�����
//
//	return 0;
//}

//1.strlen �� sizeof û��ʲô����
//strlen �����ַ������� - ֻ������ַ����󳤶� - �ǿ⺯�� - ʹ��ʱҪ��ͷ�ļ� string
//sizeof ������������顢���͵Ĵ�С - ��λ���ַ� - �ǲ�����


//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c' };
//	printf("%d\n", sizeof(arr1));// a b c \0 ;4
//	printf("%d\n", sizeof(arr2));// a b c ;3
//	printf("%d\n", strlen(arr1));// a b c \0 ;3 ,'\0'֮ǰ��ֵ
//	printf("%d\n", strlen(arr2));// a b c ...;���ֵ����Ϊû���ҵ� '\0'
//
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//����ʹ���±�������ʱ���±��0��ʼ
//	//printf("%c\n", arr[3]);//��ӡ��Ӧ�±��Ԫ��
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
//	int sz = sizeof(arr) / sizeof(arr[0]);//��������Ĵ�С
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
		printf("&arr[%d]=%p\n", i, &arr[i]);// %p ��ӡ��ַ
		//�������ڴ�����������ŵģ��ӵ͵�ַ->�ߵ�ַ
	}
	return 0;
}
#define  _CRT_SECURE_NO_WARNINGS 


#include <stdio.h>
#include <string.h>


//һά����

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

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d]=%p\n", i, &arr[i]);// %p ��ӡ��ַ
//		//�������ڴ�����������ŵģ��ӵ͵�ַ->�ߵ�ַ
//	}
//	return 0;
//}

//��ά����

//int main()
//{
//	int arr[3][4] = { { 1, 2, 3 }, { 4, 5 } };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int arr[3][4] = { { 1, 2, 3 }, { 4, 5 } };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d]=%p\n",i,j, &arr[i][j]);
//		}
//
//	}
//	return 0;
//}


//ð������

//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz-1; i++)//ȷ��ð�����������
//	{
//		int flag = 1;//������һ������������Ѿ�����
//		int j = 0;
//		for (j = 0; j < sz - 1 - i;j++)//ÿһ��
//		{
//			if (arr[j]>arr[j+1])
//			{
//
//				int tmp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = tmp;
//				flag = 0;//������������ݲ���ȫ����
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	//��arr���������ų�����
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);//ð��������
//	//arr�����飬���Ƕ�����arr���д��Σ�ʵ���ϴ���ȥ��������arr��Ԫ�صĵ�ַ
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}



int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6 };
	printf("%p\n", arr);
	printf("%p\n", arr+1);

	printf("%p\n", arr[0]);
	printf("%p\n", arr[0]+1);

	printf("%p\n", &arr);
	printf("%p\n", &arr+1);


	//int sz = sizeof(arr) / sizeof(arr[0]);
	//1.sizeof���������� - ��������ʾ�������飬sizeof�������������������������Ĵ�С����λ���ֽ�
	//2. &�������������������������飬&��������ȡ��������������ĵ�ַ

	//printf("%p\n",arr);
	//printf("%p\n",&arr[0]);
	//printf("%p\n",*arr);

	return 0;
}
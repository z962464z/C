#define  _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>


//int count_one(unsigned int a)
//{
//	int count = 0;
//	while (a)
//	{
//		if (a % 2== 1)
//		{
//			count++;
//		}
//		a = a / 2;
//	}
//	return count;
//}
//int count_one(unsigned int a)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((a >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int count_one(unsigned int a)
//{
//	int count = 0;
//	while (a)
//	{
//		a = a&(a - 1);//ÿ�μ��㶼�����������ƣ����룩���ұߵ�1
//		count++;
//
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	//дһ��������a�Ķ����ƣ����룩��ʾ���м���1
//	int count = count_one(a);
//	printf("count=%d\n", count);
//	return 0;
//}


//int get_bit(int m, int n)
//{
//	int tmp = m^n;
//	int count = 0;
//	while (tmp)
//	{
//		tmp = tmp&(tmp - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int count = get_bit(m, n);
//	printf("count=%d\n", count);
//	return 0;
//}

//void print(int m)
//{
//	int i = 0;
//	printf("����λ��\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d", (m >> i)&1);
//	}
//	printf("\n");
//	printf("ż��λ��\n");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d", (m >> i)&1);
//	}
//	printf("\n");
//}
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	print(m);
//	return 0;
//}



void print(int *p, int sz)//��ָ���ӡ����
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d", *(p + i));
	}
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	print(arr, sz);
	return 0;
}
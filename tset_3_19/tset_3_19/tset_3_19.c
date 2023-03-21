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
//		a = a&(a - 1);//每次计算都会消除二进制（补码）最右边的1
//		count++;
//
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	//写一个函数求a的二进制（补码）表示中有几个1
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
//	printf("奇数位：\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d", (m >> i)&1);
//	}
//	printf("\n");
//	printf("偶数位：\n");
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



//void print(int *p, int sz)//用指针打印数组
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", *(p + i));
//	}
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}



//void print_t(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i;j++)
//		{
//			printf("%d*%d=%-3d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print_t(n);
//	return;
//}



int my_strlen(char len[])
{
	int count = 0;
	while (*len != '\0')
	{
		count++;
		len++;
	}
	return count;
}
//void r_string(char arr[])
//{
//	int l = 0;
//	int r = my_strlen(arr) - 1;
//
//	while (l < r)
//	{
//		int tmp = arr[l];
//		arr[l] = arr[r];
//		arr[r] = tmp;
//		l++;
//		r--;
//	}
//}
void r_string(char* arr)
{
	char tmp = arr[0];
	int len = my_strlen(arr);
	arr[0] = arr[len - 1];
	arr[len - 1] = '\0';
	if (my_strlen(arr + 1) >= 2)
		r_string(arr + 1);
	arr[len - 1] = tmp;
}
int main()
{
	char arr[] = "abcdef";
	r_string(arr);
	printf("%s\n", arr);
	return 0;
}
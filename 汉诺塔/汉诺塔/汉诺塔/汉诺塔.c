#define  _CRT_SECURE_NO_WARNINGS 


#include <stdio.h>

void hanoi(int n, char A, char B, char C)
{
	if (n == 1)
		printf("%c-->%c\n", A, C); //通过C柱子，把A柱子上的n - 1个盘子移动到B柱子上
	else
	{
		hanoi(n - 1, A, C, B);
		printf("%c-->%c\n", A, C);

		hanoi(n - 1, B, A, C);//最后通过A柱子，把B柱子上的n-1个盘子移动到C柱子上

	}

}

int main()
{
	int n = 0;
	printf("请输入汉诺塔层数:>");
	scanf("%d", &n);
	hanoi(n, 'A', 'B', 'C');
	return 0;

}
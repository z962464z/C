#define  _CRT_SECURE_NO_WARNINGS 


#include <stdio.h>

void hanoi(int n, char A, char B, char C)
{
	if (n == 1)
		printf("%c-->%c\n", A, C); //ͨ��C���ӣ���A�����ϵ�n - 1�������ƶ���B������
	else
	{
		hanoi(n - 1, A, C, B);
		printf("%c-->%c\n", A, C);

		hanoi(n - 1, B, A, C);//���ͨ��A���ӣ���B�����ϵ�n-1�������ƶ���C������

	}

}

int main()
{
	int n = 0;
	printf("�����뺺ŵ������:>");
	scanf("%d", &n);
	hanoi(n, 'A', 'B', 'C');
	return 0;

}
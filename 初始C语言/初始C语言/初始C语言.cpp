#include<stdio.h>



//int main()
//{
//	int num=0;
//	int num1=0;
//	int mun=0;
//	scanf("%d%d",&num,&num1);
//	mun=num+num1;
//	printf("mun=%d\n",mun);
//	return 0;
//}



//int main()
//{
//	//�����ڼ�����ϴ洢��ʱ�򣬴洢����2����
//	//ASCLL ����
//	char arr1[]="abc";//����
//	//"abc"--'a','b','c','\0'---'\0'�ַ��������ı�־
//	char arr2[]={'a','b','c',0};
//	// '\0'=0
//	// 'a'=97
//	printf("%s\n",arr1);
//	printf("%s\n",arr2);
//	return 0;
//}


//int main()
//{
//	char arr1[]="abc";//3
//	char arr2[]={'a','b','c'};//���ֵ
//	printf("%d\n",strlen(arr1));//strlen-���ַ�������
//	printf("%d\n",strlen(arr2));
//	return 0;
//}


//int main()
//{
//	//printf("c:\\test\\32\\test.c");
//	//printf("%c\n",'\'');
//	//printf("%s\n","\"");
//	//\t-ˮƽ�Ʊ��
//	return 0;
//}


//#include<string.h>
//int main()
//{
//	//printf("%d\n",strlen("c:\test\32\test.c"));// \ddd
//	//\32--32��2��8��������
//	//32��Ϊ8���ƴ�����Ǹ�ʮ�������֣���ΪASCII��ֵ����Ӧ���ַ�
//	//32-->ʮ���� 26-->��ΪASCII��ֵ������ַ�
//	//printf("%c\n",'\32');
//	return 0;
//}


//int main()
//{
//	printf("%c\n",'\x61');// \xdd
//	return 0;
//}


//int main()
//{
//	int input=0;
//	printf("�������\n");
//	printf("��Ҫ�ú�ѧϰ�𣿣�1/0��>:");
//	scanf("%d",&input);
//	if(input==1)
//		printf("��offer\n");
//	else
//		printf("������\n");
//	return 0;
//}


//int main()
//{
//	int line=0;
//	printf("�������\n");
//
//	while(line<20000)
//	{
//		printf("��һ�д���:%d\n",line);
//		line++;
//	}
//	if(line>=20000)
//		printf("��offer\n");
//	return 0;
//}


//int Add(int x, int y)//����
//{
//	int z=x+y;
//	return z;
//}
//int main()
//{
//	int num1=10;
//	int num2=20;
//	int sum=0;
//	int a=100;
//	int b=200;
//	sum=Add(num1,num2);
//	printf("%d\n",sum);
//	return 0;
//}


//int main()
//{
//	int a=1;
//	int b=2;
//	int c=3;
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};//����һ�����10���������ֵ�����
//	int i=0;
//	while(i<10)
//	{
//		printf("%d ",arr[i]);
//		i++;
//	}
//	//printf ("%d\n",arr[0]);//�±�ķ�ʽ����Ԫ��
//	//arr[�±�]��
//	return 0;
//
//}


//int main()
//{
//	//�ƣ�2���ƣ�λ������
//	//<<����
//	//>>����
//	int a=1;
//	//����1ռ4���ֽ�-32bitλ
//	//00000000000000000000000000000001
//	int b=a<<1;
//	printf("%d\n",a);
//	printf("%d\n",b);
//
//	return 0;
//}


//int main()
//{
//	//(2����)λ����
//	// 0�٣�1��
//	//&��λ�룺����,һ��Ϊ�٣�ȫ��Ϊ��
//	//|��λ��һ��Ϊ�棬ȫ��Ϊ��
//	//^��λ�����ͬΪ�٣�����Ϊ��
//
//	int a=3;
//	int b=5;
//	int c=a&b;
//	//011
//	//101
//	//001
//	printf("%d\n",c);
//	return 0;
//}


//int main()
//{
//	int arr[10]={0};//10������Ԫ�ص�����
//	int sz=0;
//	//10*sizeof��int��=40
//	printf("%d\n",sizeof(arr));
//	//���������Ԫ�ظ���
//	//����=�����ܴ�С/ÿ��Ԫ�صĴ�С
//	sz=sizeof(arr)/sizeof(arr[0]);
//	//siizeof ������Ǳ���������ռ�ռ�Ĵ�С
//	printf("sz=%d\n",sz);
//	return 0;
//}


//int Max(int x, int y)
//{
//	if (x>y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int max = 0;
//	max = Max(num1, num2);
//	printf("max=%d\n", max);
//	return 0;
//}



//int main()
//{
//	int a = 0;//4���ֽڣ�32bitλ
//	int b = ~a;//b���з��ŵ�����
//	// ~��������2���ƣ�λȡ��
//	//000000000000000000000000
//	//111111111111111111111111
//	//ԭ�롢���롢����
//	//�������ڴ��д洢��ʱ�򣬴洢���Ƕ����ƵĲ���
//	//���룺111111111111111111111111
//	//���룺111111111111111111111110
//	//ԭ�룺100000000000000000000001
//	//ֻҪ���������ڴ��д洢�Ķ��Ƕ����ƵĲ���
//	//������ԭ�롢���롢������ͬ
//	//������
//	//ԭ��			 ------->		����			------>		���� 
//	//ֱ�Ӱ�������					ԭ��ķ��Ų���				����+1
//	//д���Ķ���������				����λ��λȡ���õ�
//	//-2
//	//10000000000000000000000000000010 -ԭ��
//	//11111111111111111111111111111101 -����
//	//11111111111111111111111111111110 -����
//	printf("%d\n",b);//ʹ�õģ���ӡ�����������ԭ��
//	return 0;
//
//}


//int main()
//{
//	int a = 10;
//	//int b = a++;//����++����ʹ�ã���++
//	int b = ++a;//ǰ��++����++����ʹ��
//	printf("a=%d\nb=%d\n", a, b);
//	return 0;
//}


//int main()
//{
//	//�� - ��0
//	//�� - 0
//	//&& - �߼���
//	//|| - �߼���
//	int a = 0;
//	int b = 3;
//	//int c = a&&b;
//	int c = a||b;
//	printf("c=%d\n", c);
//	return 0;
//
//}


//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = (a>b?a:b);//����������
//	//���a>bΪ����ִ��a����ִ֮��b
//	printf("max=%d\n", max);
//	return 0;
//}


//int main()
//{
//	typedef unsigned int u_int;
//	//typedef -- ���Ͷ��� -- �����ض���
//	unsigned int num = 10;
//	u_int num2 = 20;
//	//unsigned int = u_int
//	return 0;
//}

//void test()
//{
//	int a = 1;
//	a++;
//	printf("a=%d\n",a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}


//void test()
//{
//	//static ���ξֲ�����ʱ���ֲ��������������ڱ䳤
//	//static ����ȫ�ֱ������ı��˱������������þ�̬��ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ�ã�����Դ�ļ����޷�ʹ����
//
//	static int a = 1;//a��һ����̬�ľֲ�����
//	a++;
//	printf("a=%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}


//#define MAX 100
////#define �����ʶ������
////#define ���Զ���� - ������
//int main()
//{
//	int a = MAX;
//	printf("a=%d\n",a);
//	return 0;
//}


//������ʵ��
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
////��Ķ���
//#define MAX(x,y) (x>y?x:y)
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = Max(a,b);
//	//����
//	printf("max=%d\n",max);
//	//��ķ�ʽ
//	max = MAX(a, b);
//	//max = (a>b?a:b);
//	printf("max=%d\n",max);
//	return 0;
//}


//int main()
//{
//	int a = 10;//4���ֽ�
//	int*p = &a;//&aȡ��ַ
//	//printf("%p\n",&a);
//	//printf("%p\n", p);
//	*p = 20;// * �����ò�����
//	//��һ�ֱ���ʱ������ŵ�ַ�� - ָ�����
//	printf("a=%d\n",a);
//	return 0;
//}


//int main()
//{
//	char ch = 'w';
//	char*p = &ch;
//	printf("%d\n", sizeof(p));
//	*p = 'a';
//	printf("%c\n", ch);
//	printf("%c\n", *p);
//	return 0;
//}


//�ṹ��
//char int double...
//�ˣ��� - ���Ӷ���
//�ˣ����� - ��� - ���֤����...
//�飺���� - ������ - �۸�...
//���Ӷ��� - �ṹ�� - �����Լ����������һ������

//struct Book
//{
//	char niam[20];
//	short price;
//};
//
//int main()
//{
//	//���ýṹ�����ʹ���һ�������͵Ľṹ�����
//	struct Book b1 = { "C���Գ������",55 };
//	struct Book* pb = &b1;
//	//����ָ�������ӡ���ҵ������ͼ۸�
//	printf("%s\n", pb->niam);
//	printf("%d\n", pb->price);
//	// . �ṹ�����.��Ա
//	// -> �ṹ��ָ��->��Ա
//
//	/*printf("%s\n", (*pb).niam);
//	printf("%d\n", (*pb).price);*/
//
//	/*printf("����:%s\n", b1.niam);
//	printf("�۸�:%d\n", b1.price);
//	b1.price = 35;
//	printf("�޸ĺ�ļ۸�:%d\n", b1.price);*/
//	return 0;
//}


//if���
//int main()
//{
//	int age = 10;
//	if (age < 18)
//		printf("δ����\n");
//	else if (age >= 18 && age < 50)
//		printf("����\n");
//	else if (age >= 50)
//		printf("����\n");
//
//	return 0;
//}


//int main()
//{
//	int i = 1;
//	while (i <=100)
//	{
//		if (i%2==1)
//			printf("%d ", i);
//		i++;
//	}
//
//
//	return 0;
//}


//int main()
//{
//	int num;
//	printf("������һ������\n");
//	scanf_s("%d", &num);
//	if (num % 2 == 0)
//	{
//
//		printf("ż��\n");
//	}
//	else
//	{
//		printf("����\n");
//	}
//	return 0;
//}


//int main()
//{
//	int day = 0;
//	scanf_s("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("����1\n");
//		break;
//	case 2:
//		printf("����2\n");
//		break;
//	case 3:
//		printf("����3\n");
//		break;
//	case 4:
//		printf("����4\n");
//		break;
//	case 5:
//		printf("����5\n");
//		break;
//	case 6:
//		printf("����6\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//	default:
//		printf("�������\n");
//		break;
//	}
//	return 0;
//}


//int main()
//{
//	int day = 0;
//	scanf_s("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	default:
//		printf("�������\n");
//		break;
//	}
//	return 0;
//}


//switch��ϰ
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch (n)
//		{//siwtch ����Ƕ��ʹ��
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("m=%d\n,n=%d\n", m, n);
//	return 0;
//}


//while���
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (5 == i)
//			break;//break ֹͣ���жϣ�������ֹѭ��
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}


//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (5 == i)
//			continue;
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	while (i <= 10)
//	{
//		if (5 == i)
//			continue;// continue ���� ��ֹ����ѭ�������������㣬����ִ�б��δ������Ĵ��룬ֱ������while���
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}


//int main()
//{
//	int ch = 0;
//	//EOF - end of file ���ļ������� = -1
//	while ((ch = getchar()) != EOF)// ctrl + z --> EOF
//	{
//		putchar(ch);
//	}
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf_s("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}


//int main()
//{
//	int	m = 0;
//	int n = 0;
//	int r = 0;
//	scanf_s("%d%d", &m, &n);
//	while (r=m%n)
//	{
//		//r = m%n;
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}


////int main()
////{
////	int year = 0;
////	int count = 0;
////	//�ж�year�Ƿ�Ϊ����
////	//1.�ܱ�4�������Ҳ��ܱ�100������������
////	//2.�ܱ�400������������
////	for (year = 1000; year <= 2000; year++)
////	{
////		if (year % 4 == 0 && year % 100 != 0)
////		{
////			printf("%d ", year);
////			count++;
////		}
////		else if (year % 400 == 0)
////		{
////			printf("%d ", year);
////			count++;
////		}
////	}
////	printf("\n%d", count);
////	return 0;
////}
////int main()
////{
////	int year = 0;
////	int count = 0;
////	for (year = 1000; year <= 2000; year++)
////	{
////		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
////		{
////			printf("%d ", year);
////			count++;
////		}
////	}
////	printf("\n%d", count);
////	return 0;
////}


////�˷��ھ���
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)//ȷ����ӡ9��
//	{
//		//��ӡһ��
//		int j = i;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}


////������
//#include <stdlib.h>
//#include <time.h>
//
//void menu()
//{
//	printf("****************************************\n");
//	printf("*****    1.��ʼ          0.�˳�    *****\n");
//	printf("****************************************\n");
//}
//
//void game()
//{
//	//1.����һ�������
//	int ret = 0;
//	int guess = 0;//�������ɵ������
//	ret = rand()%100+1;//����һ��1-100֮�����
//	//printf("%d\n", ret);
//	//2.������
//	while (1)
//	{
//		printf("�������:>");
//		scanf_s("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	srand((unsigned int)time(NULL));//��ʱ���������һ�������
//
//	int input = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��>:");
//		scanf_s("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//
//	} while (input);
//	return 0;
//}


//#include <string.h>
//#include <stdlib.h>
//int main()
//{
//	char input[20]={0};
//	system("shutdown -s -t 60");
//	while (1)
//	{
//		printf("��ע�⣬��ĵ��Խ���1�����ڹػ���������룺��������ȡ���ػ�\n������:>");
//		scanf_s("%s", input);
//		if (0==strcmp(input, "������"))
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}
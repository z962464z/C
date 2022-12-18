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
//	//数据在计算机上存储的时候，存储的是2进制
//	//ASCLL 编码
//	char arr1[]="abc";//数组
//	//"abc"--'a','b','c','\0'---'\0'字符串结束的标志
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
//	char arr2[]={'a','b','c'};//随机值
//	printf("%d\n",strlen(arr1));//strlen-求字符串长度
//	printf("%d\n",strlen(arr2));
//	return 0;
//}


//int main()
//{
//	//printf("c:\\test\\32\\test.c");
//	//printf("%c\n",'\'');
//	//printf("%s\n","\"");
//	//\t-水平制表符
//	return 0;
//}


//#include<string.h>
//int main()
//{
//	//printf("%d\n",strlen("c:\test\32\test.c"));// \ddd
//	//\32--32是2个8进制数字
//	//32作为8进制代表的那个十进制数字，作为ASCII码值，对应的字符
//	//32-->十进制 26-->作为ASCII码值代表的字符
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
//	printf("加入比特\n");
//	printf("你要好好学习吗？（1/0）>:");
//	scanf("%d",&input);
//	if(input==1)
//		printf("好offer\n");
//	else
//		printf("卖红薯\n");
//	return 0;
//}


//int main()
//{
//	int line=0;
//	printf("加入比特\n");
//
//	while(line<20000)
//	{
//		printf("敲一行代码:%d\n",line);
//		line++;
//	}
//	if(line>=20000)
//		printf("好offer\n");
//	return 0;
//}


//int Add(int x, int y)//函数
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
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};//定义一个存放10个整形数字的数组
//	int i=0;
//	while(i<10)
//	{
//		printf("%d ",arr[i]);
//		i++;
//	}
//	//printf ("%d\n",arr[0]);//下标的方式访问元素
//	//arr[下标]；
//	return 0;
//
//}


//int main()
//{
//	//移（2进制）位操作符
//	//<<左移
//	//>>右移
//	int a=1;
//	//整形1占4个字节-32bit位
//	//00000000000000000000000000000001
//	int b=a<<1;
//	printf("%d\n",a);
//	printf("%d\n",b);
//
//	return 0;
//}


//int main()
//{
//	//(2进制)位操作
//	// 0假，1真
//	//&按位与：并且,一假为假，全真为真
//	//|按位或：一真为真，全假为假
//	//^按位异或：相同为假，相异为真
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
//	int arr[10]={0};//10个整形元素的数组
//	int sz=0;
//	//10*sizeof（int）=40
//	printf("%d\n",sizeof(arr));
//	//计算数组的元素个数
//	//个数=数组总大小/每个元素的大小
//	sz=sizeof(arr)/sizeof(arr[0]);
//	//siizeof 计算的是变量类型所占空间的大小
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
//	int a = 0;//4个字节，32bit位
//	int b = ~a;//b是有符号的整形
//	// ~——按（2进制）位取反
//	//000000000000000000000000
//	//111111111111111111111111
//	//原码、反码、补码
//	//负数在内存中存储的时候，存储的是二进制的补码
//	//补码：111111111111111111111111
//	//反码：111111111111111111111110
//	//原码：100000000000000000000001
//	//只要是整数，内存中存储的都是二进制的补码
//	//正数的原码、反码、补码相同
//	//负数：
//	//原码			 ------->		反码			------>		补码 
//	//直接按照正负					原码的符号不变				反码+1
//	//写出的二进制序列				其他位按位取反得到
//	//-2
//	//10000000000000000000000000000010 -原码
//	//11111111111111111111111111111101 -反码
//	//11111111111111111111111111111110 -补码
//	printf("%d\n",b);//使用的，打印的是这个数的原码
//	return 0;
//
//}


//int main()
//{
//	int a = 10;
//	//int b = a++;//后置++，先使用，再++
//	int b = ++a;//前置++，先++，再使用
//	printf("a=%d\nb=%d\n", a, b);
//	return 0;
//}


//int main()
//{
//	//真 - 非0
//	//假 - 0
//	//&& - 逻辑与
//	//|| - 逻辑或
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
//	int max = (a>b?a:b);//条件操作符
//	//如果a>b为真则执行a，反之执行b
//	printf("max=%d\n", max);
//	return 0;
//}


//int main()
//{
//	typedef unsigned int u_int;
//	//typedef -- 类型定义 -- 类型重定义
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
//	//static 修饰局部变量时，局部变量的生命周期变长
//	//static 修饰全局变量，改变了变量的作用域，让静态的全局变量只能在自己所在的源文件内部使用，出来源文件就无法使用了
//
//	static int a = 1;//a是一个静态的局部变量
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
////#define 定义标识符常量
////#define 可以定义宏 - 带参数
//int main()
//{
//	int a = MAX;
//	printf("a=%d\n",a);
//	return 0;
//}


//函数的实现
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
////宏的定义
//#define MAX(x,y) (x>y?x:y)
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = Max(a,b);
//	//函数
//	printf("max=%d\n",max);
//	//宏的方式
//	max = MAX(a, b);
//	//max = (a>b?a:b);
//	printf("max=%d\n",max);
//	return 0;
//}


//int main()
//{
//	int a = 10;//4个字节
//	int*p = &a;//&a取地址
//	//printf("%p\n",&a);
//	//printf("%p\n", p);
//	*p = 20;// * 解引用操作符
//	//有一种变量时用来存放地址的 - 指针变量
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


//结构体
//char int double...
//人，书 - 复杂对象
//人：名字 - 身高 - 身份证号码...
//书：作者 - 出版社 - 价格...
//复杂对象 - 结构体 - 我们自己创造出来的一种类型

//struct Book
//{
//	char niam[20];
//	short price;
//};
//
//int main()
//{
//	//利用结构体类型创建一个该类型的结构体变量
//	struct Book b1 = { "C语言程序设计",55 };
//	struct Book* pb = &b1;
//	//利用指针变量打印出我的书名和价格
//	printf("%s\n", pb->niam);
//	printf("%d\n", pb->price);
//	// . 结构体变量.成员
//	// -> 结构体指针->成员
//
//	/*printf("%s\n", (*pb).niam);
//	printf("%d\n", (*pb).price);*/
//
//	/*printf("书名:%s\n", b1.niam);
//	printf("价格:%d\n", b1.price);
//	b1.price = 35;
//	printf("修改后的价格:%d\n", b1.price);*/
//	return 0;
//}


//if语句
//int main()
//{
//	int age = 10;
//	if (age < 18)
//		printf("未成年\n");
//	else if (age >= 18 && age < 50)
//		printf("中年\n");
//	else if (age >= 50)
//		printf("老年\n");
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
//	printf("请输入一个数：\n");
//	scanf_s("%d", &num);
//	if (num % 2 == 0)
//	{
//
//		printf("偶数\n");
//	}
//	else
//	{
//		printf("奇数\n");
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
//		printf("星期1\n");
//		break;
//	case 2:
//		printf("星期2\n");
//		break;
//	case 3:
//		printf("星期3\n");
//		break;
//	case 4:
//		printf("星期4\n");
//		break;
//	case 5:
//		printf("星期5\n");
//		break;
//	case 6:
//		printf("星期6\n");
//		break;
//	case 7:
//		printf("星期天\n");
//		break;
//	default:
//		printf("输入错误\n");
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
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	default:
//		printf("输入错误\n");
//		break;
//	}
//	return 0;
//}


//switch练习
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
//		{//siwtch 允许嵌套使用
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


//while语句
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (5 == i)
//			break;//break 停止，中断，永久终止循环
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
//			continue;// continue 继续 终止本次循环，当条件满足，不会执行本次代码后面的代码，直接跳会while语句
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}


//int main()
//{
//	int ch = 0;
//	//EOF - end of file （文件结束） = -1
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
////	//判断year是否为闰年
////	//1.能被4整除并且不能被100整除的是闰年
////	//2.能被400整除的是闰年
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


////乘法口诀表
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)//确定打印9行
//	{
//		//打印一行
//		int j = i;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}


////猜数字
//#include <stdlib.h>
//#include <time.h>
//
//void menu()
//{
//	printf("****************************************\n");
//	printf("*****    1.开始          0.退出    *****\n");
//	printf("****************************************\n");
//}
//
//void game()
//{
//	//1.生成一个随机数
//	int ret = 0;
//	int guess = 0;//接收生成的随机数
//	ret = rand()%100+1;//生成一个1-100之间的数
//	//printf("%d\n", ret);
//	//2.猜数字
//	while (1)
//	{
//		printf("请猜数字:>");
//		scanf_s("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	srand((unsigned int)time(NULL));//用时间戳来设置一个随机数
//
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择>:");
//		scanf_s("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
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
//		printf("请注意，你的电脑将在1分钟内关机，如果输入：我是猪，将取消关机\n请输入:>");
//		scanf_s("%s", input);
//		if (0==strcmp(input, "我是猪"))
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}
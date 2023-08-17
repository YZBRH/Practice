#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//int main()
//{
//	int a = 0;
//	int b = 1;//变量初始化
//	scanf("%d", &a);//输入
//	while (b <= a)
//	{
//		if (b % 2 == 1)
//		{
//			printf("%d ", b);
//			b++;
//		}
//		else
//			b++;
//	}
//
//	return 0;
//}//奇数输出



//int min = 0;
//int max = 0;
//int a = 0;//数据初始化
//int main()
//{
//	printf("请输入两个年份>>");
//    scanf("%d %d", &min, &max);//输入部分
//	int a = min;
//	while (a <= max)
//		if (a % 4 == 0 && a % 100 != 0)
//		{
//			printf("普通闰年%d", a);
//			a++;
//		}
//		else 
//			a++;
//	while (a <= max)
//		if (a % 400 == 0)
//			printf("世纪闰年%d", a);
//
//
//	return 0;
//}//闰年输出




//int main()
//{
//	int a = 3;
//	int b = 2;
//	int c = 1;
//	int load = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		load = a;
//		a = b;
//		b = load;
//	}
//	if (a < c)
//	{
//		load = a;
//		a = c;
//		c = load;
//	}
//	if (b < c)
//	{
//		load = b;
//		b = c;
//		c = load;
//	}
//	printf("从大至小比较为>>%d %d %d", a, b, c);//输出
//
//
//	return 0;
//}//三个数比大小



//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int a = 0;
//	printf("请输入两个数>>");
//	scanf("%d %d", &num1, &num2);
//	a = num1;
//	while (a <= num2)
//	{
//		if (a % 3 == 0)
//			printf("%d ", a);
//		a++;
//	}
//
//	return 0;
//}//求3的倍数

//int main()
//{
//	int n = 3;
//	int r = 1;
//	int put = 1;
//	scanf("%d", &n);
//	for (r = 1; n >= r; r++)
//		put = put * r;
//	if (n <= 0)
//		printf("非法输入");
//	if (n < r && n > 0)
//		printf("%d", put);
//
//
//	return 0;
//}//求n的阶乘

//int main()
//{
//	int n = 0;
//	int r = 1;
//	int sum = 0;
//	int put = 1;
//	for (n = 1; n <= 10; n++)
//	{
//		put = 1;
//		for (r = 1; n >= r; r++)
//		{
//			put = put * r;
//		}
//		sum = sum + put;
//	}
//
//	printf("%d", sum);
//	return 0;
//}//1到10的阶乘相加


//int main()
//{
//	int a = 1;
//	int b = 1;
//	int i = 0;//行数控制
//	for (i = 1; i <= 9; i++)
//	{
//		for (b = 1; b <= i; b++)
//		{
//			printf("%dx%d=%2d ", a, b, a * b);
//		}
//		a++;
//		printf("\n");
//	}
//	return 0;
//}//九九乘法表



//int compare(a, b)
//{
//	if (a >= b)
//		return a;
//	else
//		return b;
//}//两数比较得出较大值
//
//int main()
//{
//	int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, put;
//	scanf("%d %d %d %d %d %d %d %d %d %d", &num1, &num2, &num3, &num4, &num5, &num6, &num7, &num8, &num9, &num10);
//	put = compare(num1, num2);
//	put = compare(put, num4);
//	put = compare(put, num5);
//	put = compare(put, num6);
//	put = compare(put, num7);
//	put = compare(put, num8);
//	put = compare(put, num9);
//	put = compare(put, num10);
//	printf("%d", put);
//
//	return 0;
//}//十个数比较出最大值


//int main()
//{
//	int min, max;
//	scanf("%d %d", &min, &max);
//	int a = min;//输出使用
//	int b = 2;//判断使用
//	int c = 0;
//	while (a <= max)
//	{
//		if (a <= 1)
//		{
//			a = 2;
//		}//排除min小于2时
//		while (a >= b)
//		{
//			if (a % b != 0 && a != b)
//			{
//				b++;
//				continue;
//			}
//			if (a != b)
//			{
//				break;
//			}
//			else
//			{
//				printf("%d ", a);
//				break;
//			}
//		}
//		a++;
//		b = 2;
//
//	}
//
//	return 0;
//}//求min~~max间的所有质数

//int main()
//{
//	int arr1[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//
//	int sum = 0;
//	for (i = 0; i < 10; i++)
//	{
//		sum = sum + arr1[i];
//	}
//
//	sum = sum / 10.0;
//	printf("%d", sum);
//	return 0;
//}//求10个数平均值



//int main() {
//	int n, m, i, p;
//	scanf("%d %d\n", &n, &m);
//	int arr[n][m];
//	for (i = 0; i < n; i++)
//	{
//		for (p = 0; p < m; p++)
//		{
//			scanf("%d", &arr[i][p]);
//		}
//	}
//
//	for (i = 0; i < m; i++)
//	{
//		for (p = 0; p < n; p++)
//		{
//			printf("%d ", arr[p][i]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}//矩阵转置(VS2019不支持)


//int main()
//{
//	int arrA[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arrB[10] = { 2,3,4,5,6,7,8,9,10,11};
//	int load = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		load = arrA[i];
//		arrA[i] = arrB[i];
//		arrB[i] = load;
//	}
//	printf("arrA = ");
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arrA[i]);
//	}
//	printf("arrB = ");
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arrB[i]);
//	}
//
//	return 0;
//}//数组交换



//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("请输入两个数:>>");
//	scanf("%d %d", &a, &b);
//	while (c = a % b)
//	{
//		a = b;
//		b = c;
//	}
//	printf("最大公约数为:>>%d", b);
//	return 0;
//}//求两数的最大公约数


//#include <time.h>
//int main()
//{
//	time_t timep;
//	struct tm* p;
//	time(&timep);
//	p = localtime(&timep);
//	printf("year:%04d \nmonth:%02d \nday:%02d \nhour:%02d  \nminter:%02d \nsecond:%02d \nweekday:%d \ndays:%d \nisdst:%d", 1900 + p->tm_year, 1 + p->tm_mon, p->tm_mday, p->tm_hour, p->tm_min, p->tm_sec, p->tm_wday, p->tm_yday, p->tm_isdst);
//	return 0;
//}//系统时间


//int is_prime(int a)
//{
//	int b;
//	if (a == 2)
//	{
//		return 1;
//	}
//	for (int i = 2; i < a; i++)
//	{
//		if (a % i == 0)
//		{
//			b = i;
//			return 0;
//		}
//		return 1;
//	}
//}//判断是否为素数
//int main()
//{
//	for (int i = 100; i <= 200; i++)
//	{
//		int r = is_prime(i);
//		if (r == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}



//int leapYear(int a)
//{
//	if ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0)
//		return 1;
//	else
//		return 0;
//}
//int  main()
//{
//	int a = 0;
//	printf("输入年份:>>");
//	scanf("%d", &a);
//	int r = leapYear(a);
//	if (r == 1)
//		printf("是闰年\n");
//	else
//		printf("不是闰年\n");
//	return 0;
//}//判断闰年


//void init(int arr[10])
//{
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//	}
//}//数组初始化
//void print(int arr[10])
//{
//	for(int i = 0;i< 10;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}//打印数组元素
//void reverse(int arr[10])
//{
//	int arr1[10];
//	for (int i = 0; i < 10; i++)
//	{
//		arr1[i] = arr[9 - i];
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = arr1[i];
//	}
//}//数组倒序


//int main()
//{
//	int n = 0;
//	int i = 1;
//	int j = 1;
//	printf("想要多大乘法表？输入数字:>>");
//	scanf("%d", &n);
//	while(i <= n)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%dx%d=%2d ", i, j, i * j);
//		}
//		printf("\n");
//		i++;
//	}
//
//	return 0;
//}//任意数字乘法表



//int count = 0;
//void move(char pose1, char pose2)
//{
//	printf("%c->%c ", pose1, pose2);
//	count++;
//}
////pose1为起始
////pose2为中专
////pose3为终点
//void hanoi(int n, char pose1, char pose2, char pose3)
//{
//	if (n == 1)
//	{
//		move(pose1, pose3);
//	}
//	else
//	{
//		hanoi(n - 1, pose1, pose3, pose2);
//		move(pose1, pose3);
//		hanoi(n - 1, pose2, pose1, pose3);
//	}
//}
//int main()
//{
//	int n = 0;
//	printf("汉诺塔上有几个盘子？:>>");
//	scanf("%d", &n);
//	hanoi(n, 'A', 'B', 'C');
//	printf("一共移动了%d次", count);
//	return 0;
//}//汉诺塔问题


//int main()
//{
//	int money = 20;
//	int bottle = 0;
//	int cola = 0;
//	int i = 0;
//	while (money > 0 || bottle > 1 || cola > 0)
//	{
//		if (money > 0)
//		{
//			money--;
//			cola++;
//		}
//		if (bottle > 1)
//		{
//			bottle--;
//			bottle--;
//			cola++;
//		}
//		if (cola > 0)
//		{
//			i += cola;
//			bottle += cola;
//			cola = 0;
//		}
//	}
//	printf("共可喝%d瓶可乐", i);
//	return 0;
//}//喝可乐问题



//int main()
//{
//	printf("      *\n");
//	printf("     ***     \n");
//	printf("    *****    \n");
//	printf("   *******   \n");
//	printf("  *********  \n");
//	printf(" *********** \n");
//	printf("*************\n");
//	printf(" *********** \n");
//	printf("  *********  \n");
//	printf("   *******   \n");
//	printf("    *****    \n");
//	printf("     ***     \n");
//	printf("      *      \n");
//
//	return 0;
//}//打印菱形


//int pow(int a, int b)
//{
//	int ret = 1;
//	for (int i = 1; i <= b; i++)
//	{
//		ret *= a;
//	}
//	return ret;
//}//求次方函数
//int main()
//{
//	int i = 0;
//	int num = 0;
//	int ret = 0;
//	int j = 0;
//	for (i = 0; i < 100000; i++)
//	{
//		num = i;
//		while (num / 10 != 0)
//		{
//			num = num / 10;
//			j++;
//		}
//		j++;//统计位数
//		num = i;
//
//		while (num / 10 != 0)
//		{
//			ret += pow((num % 10), j);
//			num = num / 10;
//		}
//		ret += pow(num,j);//计算
//		if (ret == i)
//		{
//			printf("%d ", i);
//		}//比较
//		j = 0;
//		ret = 0;//重置
//
//	}
//	return 0;
//}//求水仙花数



//int main()
//{
//	int a = 0;
//	printf("请输入一个个位数数：");
//	scanf("%d", &a);
//	if (a < 10 && a>0)
//	{
//		int a1 = a;
//		int a2 = a * 10 + a1;
//		int a3 = a * 100 + a2;
//		int a4 = a * 1000 + a3;
//		int a5 = a * 10000 + a4;
//		int sn = a1 + a2 + a3 + a4 + a5;
//		printf("求和为%d\n", sn);
//	}
//	else
//	{
//		printf("无效输入！\n");
//	}
//	return 0;
//}//求和


//int func(int a)
//{
//	if (a <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return func(a - 1) + func(a - 2);
//	}
//}//求数列
//int main()
//{
//	int a = 1;
//	int ret = 0;
//	printf("要获取斐波那契数列的第几项？：>>");
//	scanf("%d", &a);
//	if (a < 1)
//	{
//		printf("无效输入\n");
//	}
//	else
//	{
//		ret = func(a);
//		printf("第%d项为%d", a, ret);
//	}
//
//	return 0;
//}//求第a项的斐波那契数列



//int ret = 1;
//int pow(int a, int b)
//{
//	if (b == 1)
//	{
//		ret *= a;
//		return ret;
//	}
//	else
//	{
//		return ret * a * pow(a, b - 1);
//	}
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	printf("要求谁的几次方？:>>");
//	scanf("%d %d", &a, &b);
//	sum = pow(a, b);
//	printf("%d", sum);
//}//递归写次方



//int DigitSum(int n)
//{
//	if (n / 10 == 0)
//	{
//		return n;
//	}
//	else
//	{
//		return (n % 10) + DigitSum(n / 10);
//	}
//}
//int main()
//{
//	int n = 0;
//	printf("请输入一个数:>>");
//	scanf("%d", &n);
//	int ret = DigitSum(n);
//	printf("%d", ret);
//	return 0;
//}//计算每位数字之和


//int main()
//{
//	int n = 0;
//	int ret = 1;
//	printf("要求谁的阶乘？:>>");
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("%d", ret);
//
//	return 0;
//}//求阶乘（非递归）



//int factorial(int n)
//{
//	if (n == 1)
//	{
//		return n;
//	}
//	else
//	{
//		return n * factorial(n - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	printf("要求谁的阶乘？:>>");
//	scanf("%d", &n);
//	int ret = factorial(n);
//	printf("%d", ret);
//	return 0;
////求阶乘（递归）



//void print(int n)
//{
//	if(n / 10 != 0)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int n = 0;
//	printf("请输入一个数:>>");
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}//打印各位数


//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4 };
//	int i = 0;//计数
//	for (i = 0; i <= 8; i++)
//	{
//		int exp = 0;//判断条件
//		for (int j = 0; j <= 8; j++)
//		{
//			if (i == j)
//			{
//				continue;
//			}
//			if (arr[i] == arr[j])
//			{
//				exp = 1;
//				break;
//			}
//		}
//		if (exp == 0)
//		{
//			printf("%d", arr[i]);
//		}
//
//	}
//	return 0;
//}//单身狗1



//int main()
//{
//    int arr[] = { 0,1,2,3,4,5,1,2,3,4 };
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    int i = 0;
//    int ret = 0;
//    for (i = 0; i < sz; i++)
//    {
//        ret ^= arr[i];
//    }
//    printf("%d", ret);
//    return 0;
//}//单身狗1(优化)



//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int count = 0;
//    for (int i = 0; i < 32; i++)
//    {
//        if ((n >> i) & 1 == 1)
//            count++;
//    }
//    printf("%d", count);
//}//求1的数量



//int main()
//{
//	int a = 5;
//	int b = 3;
//	printf("交换前a=%d,b=%d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("交换后a=%d,b=%d\n", a, b);
//	return 0;
//}//无临时变量交换两数


//int main()
//{
//	int a = 1999;
//	int b = 2299;
//	int c = a ^ b;
//	int count = 0;
//	for (int i = 0; i < 32; i++)
//	{
//		if ((c >> i) & 1 == 1)
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}//求两数二进制中不同的位数



//int main()
//{
//	int num = 10086;
//	for (int i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n");//奇数项
//
//	for (int i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n");//偶数项
//	return 0;
//}//打印二进制奇偶数




//int my_strlen(char * str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		str++;
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int ret = my_strlen(arr);
//	printf("%d", ret);
//	return 0;
//}//自己写strlen




//int main()
//{
//	char arr[] = { "ABCDEFG" };
//	int k = 0;
//	printf("%s\n", arr);
//	scanf("%d", &k);
//	char* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]) - 1;//元素数
//	for (int i = k; i < sz; i++)
//	{
//		printf("%c", *p + i);
//	}//未左旋元素
//	for (int i = 0; i < k; i++)
//	{
//		printf("%c", *p + i);
//	}//被左旋元素
//
//	return 0;
//}//字符串左旋




//int main()
//{
//    char arr[]= "hello bit";
//    char* p = arr;
//    int sz = sizeof(arr)/sizeof(arr[0])-1;//字符串长度
//    for (int i = sz-1; i >= 0; i--)
//    {
//        printf("%c", *(p + i));
//    }
//    return 0;
//}//字符串倒序


//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//
//	return 0;
//}//指针打印数组


//void print(int sz, int* arr)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz - 1; i++)
//	{
//		for (int j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	print(sz, arr);
//
//	return 0;
//}//冒泡排序（升序）



//void print(int sz, int* arr)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz - 1; i++)
//	{
//		for (int j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] % 2 == 0)
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	print(sz, arr);
//
//	return 0;
//}//冒泡排序（调整奇偶顺序）



//int find(char*arr)
//{
//	char tmp[1000] = { 0 };
//	strcpy(tmp, arr);
//	strcat(tmp, arr);//两次复制
//	if (strstr(tmp, arr) != NULL)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}//判断字符串旋转结果



//int function(int a[3][4], int x, int y, int find)
//{
//	int i = 0;
//	int j = y - 1;
//	while (a[x - 1][y - 1] >= find && a[0][0] <= find)
//	{
//		if (a[i][j] < find)
//		{
//			i++;
//		}
//		else if (a[i][j] > find)
//		{
//			j--;
//		}
//		else
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int a[3][4] = { {1,2,3,4},{2,3,4,5},{3,4,5,6}};
//	int find = 0;
//	scanf("%d", &find);
//	int ret = function(a, 3, 4,find);
//	if (ret == 1)
//	{
//		printf("存在此数\n");
//	}
//	else
//	{
//		printf("不存在此数\n");
//	}
//	return 0;
//}//杨氏矩阵找数据


//int main()
//{
//	for (int killer = 'A'; killer <= 'D'; killer++)
//	{
//		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)
//		{
//			printf("凶手是%c", killer);
//		}
//	}
//
//	return 0;
//}//谁是凶手



//int main()
//{
//	int n = 20;
//	int arr[30][30] = { 1 };
//	for (int i = 0; i < n; i++)
//	{
//		arr[i][0] = 1;
//	}//第一个为一
//	for (int i = 1; i < n; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//		}
//	}//填数据
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}//打印
//	return 0;
//}//打印杨辉三角


//void mune()
//{
//	printf("************\n");
//	printf("****1.加法**\n");
//	printf("****2.减法**\n");
//	printf("****3.乘法**\n");
//	printf("****4.除法**\n");
//	printf("************\n");
//}
//int add(int a, int b)
//{
//	return a + b;
//}
//int sub(int a, int b)
//{
//	return a - b;
//}
//int mul(int a, int b)
//{
//	return a * b;
//}
//int div(int a, int b)
//{
//	return a / b;
//}
//int main()
//{
//	int* (*prr[])(int, int) = {0,add, sub, mul, div};
//	mune();
//	int n, a, b;
//	printf("选择执行的运算:>>");
//	scanf("%d", &n);
//	printf("请输入执行的两个数字:>>");
//	scanf("%d %d", &a, &b);
//	int ret = prr[n](a,b);
//	printf("%d", ret);
//	return 0;
//}//转移表的实现



//int compare(const void* exp1, const void* exp2)
//{
//	return *(int*)exp1 - *(int*)exp2;
//}
//int main()
//{
//	int arr[] = { 1,3,5,7,9,2,4,6,8,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("排序前:>>");
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	qsort(arr, sz, sizeof(arr[0]), compare);
//	printf("排序后:>>");
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}//qsort的使用


//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		int count = 0;//标记是否有重复元素
//		for (int j = 0; j < sz; j++)
//		{
//
//			if ((i != j) && (arr[i] == arr[j]))
//			{
//				count++;//若有非本身的其他重复元素，则++
//			}
//		}
//		if (count == 0)
//		{
//			printf("%d ", arr[i]);//打印“单身狗”
//		}
//	}
//	return 0;
//}//单身狗2



//int leapYear(int a)
//{
//    if ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0)
//        return 1;
//    else
//        return 0;
//}//判断是否是闰年
//int main() {
//    int a, b;
//    int arr[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//    while (scanf("%d %d", &a, &b) != EOF)
//    {
//        int leapyear = leapYear(a);
//        if (leapyear == 1 && b == 2)
//        {
//            printf("%d", arr[b] + 1);
//        }
//        else
//        {
//            printf("%d", arr[b]);
//        }
//        printf("\n");
//    }
//    return 0;
//}//获得每年每月的天数




struct stu
{
	char name[20];
	int age;
};//结构体
int compare_int(const void* p1,const void* p2)
{
	return (*(int*)p1 - *(int*)p2);
}//比较整型
int compare_age(const void* p1, const void* p2)
{
	return ((struct stu*)p1)->age - ((struct stu*)p2)->age;
}//比较结构体中年龄
int compare_name(const void* e1, const void* e2)
{
	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
}//比较结构体中名字
void exchange(void* e1,void* e2,int lenth)
{
	for (int i = 0; i < lenth; i++)
	{
		char a;
		a = *((char*)e1+i);
		*((char*)e1 + i) = *((char*)e2 + i);
		*((char*)e2 + i) = a;
	}
}//交换元素
void my_qsort(void* arr,size_t sz,size_t lenth,int (*compare)(const void* e1,const void* e2))
{
	for (int i = 0; i < sz - 1; i++)
	{
		for (int j = 0; j < sz - 1 - i; j++)
		{
			if (compare((char*)arr + j * lenth, (char*)arr + (j + 1) * lenth) > 0)
			{
				exchange((char*)arr + j * lenth, (char*)arr + (j + 1) * lenth,lenth);
			}
		}
	}
}//排序部分
int main()
{
	int arr1[] = { 2,3,4,1,5,7,9,8,0 };
	int sz1 = sizeof(arr1) / sizeof(arr1[0]);
	my_qsort(arr1, sz1, sizeof(arr1[0]), compare_int);

	struct stu arr2[] = { {"a",12},{"abc",1},{"ab", 123} };
	int sz2 = sizeof(arr2) / sizeof(arr2[0]);
	my_qsort(arr2, sz2, sizeof(arr2[0]), compare_age);

	my_qsort(arr2, sz2, sizeof(arr2[0]), compare_name);
	return 0;
}//自己写qsort
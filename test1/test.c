#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 1;//������ʼ��
//	scanf("%d", &a);//����
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
//}//�������



//int min = 0;
//int max = 0;
//int a = 0;//���ݳ�ʼ��
//int main()
//{
//	printf("�������������>>");
//    scanf("%d %d", &min, &max);//���벿��
//	int a = min;
//	while (a <= max)
//		if (a % 4 == 0 && a % 100 != 0)
//		{
//			printf("��ͨ����%d", a);
//			a++;
//		}
//		else 
//			a++;
//	while (a <= max)
//		if (a % 400 == 0)
//			printf("��������%d", a);
//
//
//	return 0;
//}//�������



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
//	printf("�Ӵ���С�Ƚ�Ϊ>>%d %d %d", a, b, c);//���
//
//
//	return 0;
//}//�������ȴ�С



//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int a = 0;
//	printf("������������>>");
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
//}//��3�ı���

//int main()
//{
//	int n = 3;
//	int r = 1;
//	int put = 1;
//	scanf("%d", &n);
//	for (r = 1; n >= r; r++)
//		put = put * r;
//	if (n <= 0)
//		printf("�Ƿ�����");
//	if (n < r && n > 0)
//		printf("%d", put);
//
//
//	return 0;
//}//��n�Ľ׳�

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
//}//1��10�Ľ׳����


//int main()
//{
//	int a = 1;
//	int b = 1;
//	int i = 0;//��������
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
//}//�žų˷���



//int compare(a, b)
//{
//	if (a >= b)
//		return a;
//	else
//		return b;
//}//�����Ƚϵó��ϴ�ֵ
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
//}//ʮ�����Ƚϳ����ֵ


//int main()
//{
//	int min, max;
//	scanf("%d %d", &min, &max);
//	int a = min;//���ʹ��
//	int b = 2;//�ж�ʹ��
//	int c = 0;
//	while (a <= max)
//	{
//		if (a <= 1)
//		{
//			a = 2;
//		}//�ų�minС��2ʱ
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
//}//��min~~max�����������



#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//选择表达式 11 | 10 的结果(本题数值均为十进制)
//A 11
//B 10
//C 8
//D 2
//
//正确答案:A
//
//“|”是按位或，对应的二进制序列就是有1即为1
//11	1011
//10	1010
//	1011	11
//
//
//char a; int b; flat c; double d；
//则表达式 a*b + d - c值的类型为()
//A float
//B int
//C char
//D double
//
//正确答案 : D
//
//a*b会整型提升，将a强制类型转换为int
//d比c更准确，级别更高，所以最后是类型级别最高的那个
//
//
//ACM编程 标题 : 倒置字符串 
//将一句话的单词进行倒置，标点不倒置。
//比如Iike beijing.经过函数后变为 : beiing. like l
//输入描述述 :
//每个测试输入包含1个测试用例 : I like beijing.输入用例长度不超过100
//输出描述 :
//依次输出倒置之后的字符串，以空格分割
//示例1
//输入
//l ike beijing.
//输出
//beijing. like I

//int main()
//{
//	char arr[10][20];
//	char ch = ' ';
//	int i = 0;
//	int count=0;
//	while (ch != '\n')
//	{
//		scanf("%s", arr[i]);
//		i++;
//		count++;
//		scanf("%c", &ch);
//	}
//	for (i = count-1; i >= 0; i--)
//	{
//		printf("%s ", arr[i]);
//	}
//	return 0;
//}


//ACM编程题 标题:求最小公倍数 
//正整教A和正整教B 的最小公倍数是指 能被A和B整除的最小的正整教值
//设计一个算法，求输入A和B的最小公倍数。
//输入描述 :
//输入两个正整数A和B。
//输出描述 :
//输出A和B的最小公倍数。
//示例1
//输入
//5 7
//输出
//35


//int main()
//{
//	int a,b;
//	scanf("%d %d", &a, &b);
//	int number = 0;
//	int i = 0;
//	for (i = (a > b? a : b); ; i++)
//	{
//		if ((i % a == 0) && (i % b == 0))
//		{
//			number = i;
//			printf("%d", number);
//			break;
//		}
//	}
//	return 0;
//}



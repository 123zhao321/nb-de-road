#define _CRT_SECURE_NO_WARNINGS 1

//第6题(单选题)
//题目名称:
//下面代码的结果是:
//#include <stdio.h>
//int i; 
//int main()
//{
//	i--;
//	if ( i > sizeof(i) )
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//		
//	return 0;
//}
//题目内容:
//A.>
//B.<
//C.不输出
//D.程序有问题

//A

// i 是全局变量，不初始化，默认是 0，不是随机数
// 
// sizeof()的返回类型是unsigned int 是无符号整型，
// 会返回类型的字节大小 
// 
// 当有符号整型和无符号整型比较的时候，
// 会把有符号整型强制提升至无符号类型

//第7题(单选题)
//题目名称:
//关于表达式求值说法不正确的是:
//题目内容:
//A.表达式求值先看是否存在整形提升或算术转换，再进行计算
//B.表达式真正计算的时候先看相邻操作符的优先级决定先算谁
//C.相邻操作符的优先级相同的情况下，看操作符的结合性决定计算顺序
//D.只要有了优先级和结合性，表达式就能求出唯一值

// D
// 
//不同平台也不同

//第8题(编程题)
//题目名称:计算求和
//题目内容 :
//求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字
//例 : 2 + 22 + 222 + 2222 + 22222
//#include <stdio.h>
//int main()
//{
//	int a, n;
//	scanf("%d %d", &a, &n);
//	int i = 0;
//	int sum = 0;
//	int ret = a;
//	for (i = 0; i < n; i++)
//	{
//		sum += ret;
//		ret = ret * 10 + a;
//	}
//	printf("%d", sum);
//	return 0;
//}


// 第9题(编程题)
// 题目名称:
// 使用指针打印数组内容
// 题目内容 :
// 写一个函数打印arr数组的内容，
// 不使用数组下标，使用指针
// arr是一个整形一维数组。

//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,3,5,7,9,2,4,6,8,10 };
//	int* p = arr;
//	int i = 0;
//	int len = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < len; i++)
//	{
////		printf("%d ", *p++);
//		printf("%d ", *(p+i));
//	}
//	return 0;
//}


//第10题(编程题)
//题目名称:
//打印水仙花数
//题目内容 :
//求出0~100000之间的所有“水仙花数“并输出。
//“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，
//如 : 153 = 1 ^ 3 + 5 ^ 3 + 3 ^ 3，则153是一个“水仙花数"。

//#include <math.h>
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 100; i < 1000000; i++)
//	{
//		int ret = 0;
//		int tem = i;
//		while (tem)
//		{
//			ret++;
//			tem /= 10;
//		}
//		tem = i;
//		int sum = 0;
//		while (tem)
//		{
//			sum += pow(tem%10, ret);
//			//pow()函数是用来求次方的，头文件是<math.h>
//			// 前一个是参数，后面是次数
//			tem /= 10;
//		}
//		
//		if (sum == i)
//		{
//			printf("%d ", sum);
//		}
//	}
//	return 0;
//}


//第1题(单选题)
//题目名称:
//下列程序段的输出结果为()
//unsigned long pulArray[] = { 6, 7, 8, 9, 10 };
//unsigned long* pulPtr;
//pulPtr = pulArray;
//*(pulPtr + 3) += 3;
//printf("% d, % d\n", *pulPtr, *(pulPtr + 3));
//题目内容 :
//A.  9, 12
//B.  6, 9
//C.  6, 12
//D.  6, 10

// 正确答案是C
// 
// *(pulPtr + 3)是pulArray[3]，不是那个值 9
// *(pulPtr + 3) += 3;是 pulArray[3] += 3;
// 出错原因是（一开始是以为 9 += 3 以为没啥用）
//


//第2题(单选题)
//题目名称:
//如有以下代码:
//struct student
//{
//	int num;
//	char name[32];
//	float score :
//}stu;
//则下面的叙述不正确的是:()
//题目内容 :
//	A.struct 是结构体类型的关键字
//	B.struct student 是用户定义的结构体类型
//	C.num, score 都是结构体成员名
//	D.stu 是用户定义的结构体类型名

// D

//下面程序的输出结果是:
//#include <stdio.h>
//struct stu
//{
//	int num;;
//	char name[10];
//	int age;
//};
//void fun(struct stu*p)
//{
//	printf("%s\n", (*p).name);
//}
//int main()
//{
//	struct stu students[3] = {{9801,"zhang",20},{9802,"wan",19},{9803,"zhao",18}};
//	fun(students + 1);
//	return 0;
//}
//题目内容:
//A.zhang
//B.zhao
//C.wang
//D.18

// C

//第4题(单选题)
//题目名称:
//结构体访问成员的操作符不包含:()
//题目内容 :
//	A. .操作符
//	B. ->操作符
//	C. *解引用操作符
//	D. sizeof

// D


//第5题(单选题)
//题目名称:
//关于二级指针描述描述正确的是:
//题目内容:
//A.二级指针也是指针，只不过比一级指针更大
//B.二级指针也是指针，是用来保存一级指针的地址
//C.二级指针是用来存放数组的地址
//D.二级指针的大小是4个字节

// 正确答案：B
// 二级指针也是一个地址而已，跟系统的内存大小有关，4/8个字节

//
//第6题(单选题)
//题目名称:
//下面关于指针运算说法正确的是:
//题目内容:
//A.整形指针 + 1，向后偏移一个字节
//B.指针 - 指针 得到是指针和指针之间的字节个数
//C.整形指针解引用操作访问4个字节
//D.指针不能比较大小

// 正确答案：C
// D 指针可以比较地址的大小，高地址啥的，逻辑运算符啥的

//
//第7题(单选题)
//题目名称:
//下面哪个是指针教组:题目内容:
//A. int* arr[10];
//B.int* arr[];
//C.int** arr;
//D.int(*arr)[10];

// A 
// A中数组名会先和[]结合，是数组，前面也是整型指针类型
// B不指定大小，是无效的


//第8题(单选题)
//题目名称:
//下面程序要求输出结构体中成员a的数据, 以下不能填入横线处的内容是()
//#include< stdio.h)
//struct S
//{
//	int a;
//	int b;
//};
//int main()
//{
//
//	struct S a, * p = &a;
//	a.a = 99;
//	printf("%d\n", _______);
//	return 0:
//}
//题目内容:
//A.a.a
//B.*p.a
//C.p->a
//D.(*p).a

// B


//第9题(编程题)
//题目名称:字符串逆序
//题目内容:写一个函数，可以逆序一个字符串的内容
//
//#include <stdio.h>
//int main()
//{
//	char arr[] = "abcdefghi";
//	int right = sizeof(arr) / sizeof(arr[0]) - 2;
//	int left = 0;
//	while (left <= right)
//	{
//		int ch = arr[right];
//		arr[right] = arr[left];
//		arr[left] = ch;
//		left++;
//		right--;
//	}
//	printf("%s", arr);
//	return 0;
//}

// 打印菱形
//#include <stdio.h>
//int main()
//{
//	int len = 0;
////	scanf("%d", &len);
//	len = 7;
//	// 上
//	int i = 0;
//	for (i = 1; i <= len; i++)
//	{
//		int j = 1;
//		for (j = 1; j <= len - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 1; j <= 2*i-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	// 下
//	for (i = 2; i <= len; i++)
//	{
//		int j = 0;
//		for (j = 1; j < i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 1; j <= 2*len-i*2+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//第11题(编程题)
//题目名称:
//喝汽水问题
//题目内容 :
//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，
//给20元，可以多少汽水(编程实现)
//
//#include <stdio.h>
//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	int bottle = money;
//	int num = bottle;
//	/*while (bottle>1)
//	{
//		int t = bottle;
//		num += t / 2;
//		bottle = bottle / 2 + t % 2;
//	}*/
//
//	// 找规律
//	if (money > 0)
//	{
//		num = 2 * money - 1 ;
//	}
//	printf("%d", num);
//	return 0;
//}


//第1题(单选题)
//题目名称:
//C程序常见的错误分类不包含:()
//题目内容 :
//	A.编译错误
//	B.链接错误
//	C.栈溢出
//	D.运行时错误

// C
// 
// 
//A.编译错误		 // 语法错误
//B.链接错误		 // 符号错误
//C.栈溢出
//D.运行时错误		 // 逻辑错误 

//第2题(单选题)
//题目名称:
//关于VS调试快捷键说法错误的是:
//题目内容
//A.F5 - 是开始执行，不调试
//B.F10 - 是逐过程调试，遇到函数不进入函数
//C.F11 - 是逐语句调试，可以观察调试的每个细节
//D.F9是设置断点和取消断点
//
//A

//第3题(单选题)
//题目名称:
//关于Debug和Release的区别说法错误的是:()
//题目内容 :
//	A.Debug被称为调试版本，程序调试找bug的版本
//	B.Release被称为发布版本，测试人员测试的就是Release版本
//	C.Debug版本包含调试信息，不做优化。
//	D.Release版本也可以调试，只是往往会优化，程序大小和运行速度上效果最优
//
//D release 是发布版本，不可以调试
//
//
//第4题(单选题)
//题目名称:
//语言中哪一种形式声明了一个指向char类型变量的指针p，
//p的值不可修改，但p指向的变量值可修改 ? ()
//题目内容 :
//	A.const char* p
//	B.char const* p
//	C.char*const p
//	D.const char* const p
//
//C


//第5题(单选题)
//题目名称:
//以下关于指针的说法正确的是()
//题目内容 :
//	A.int* const p与int const* p等价
//	B.const int* p与int* const p等价
//	C.const int* p与int const* p等价
//	D.int* p[10]与int(*p)[10]等价
//
//C
//
//第6题(简答题)
//题目名称:
//程序死偱坏解释
//题目内容 :
//VS开发环境调试下面的代码，画图解释下面代码的问题
//#include<stdio.h>
//int main()
//{
//	int i = 0 :
//	int arr[] = { 1,2,3,4,5,6,7,8, 9,10 } :
//		for (i = 0 : i <= 12 : i++)
//		{
//			arr[i] = 0 :
//			printf("hello bit\n");
//		}
//		eturn 0;
//}
//
//i = 13时修改了 i自己，变成死循环


// 第7题(编程题)
// 题目名称:
//	    调整奇数偶数顺序
// 题目内容:
//      调整数组使奇数全部都位于偶数前面。

//题目
//输入一个整数数组，实现一个函数，来调整该数组中数字的顺序
//使得数组中所有的奇数位于数组的前半部分
// 所有偶数位于数组的后半部分。

//#include <stdio.h>
//int main()
//{
//	int arr[] = { 51,64,26,79,14,24,42,17,61,27,65 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		if (arr[i] % 2 == 0)
//		{
//			int j = 0;
//			for (j = len - 1; j >= i; j--)
//			{
//				if (arr[j] % 2 == 1)
//				{
//					int k = arr[j];
//					arr[j] = arr[i];
//					arr[i] = k;
//					break;
//				}
//			}
//		}
//	}
//	for (i = 0; i < len; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}











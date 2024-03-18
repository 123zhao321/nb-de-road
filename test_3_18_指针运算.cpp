#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

// 杜绝野指针
// 野指针会破坏程序的稳定性
// 因为不知道野指针指向的地址是哪里
// 使用的时候会破坏已有的数据
// 
//int main()
//{
//	int a = 0; // 变量的初始化
//	int* pa = NULL; // 指针的初始化
//	a = 10;
//	pa = &a;
//	printf("%d\n", *pa);
//
//	// 当知道指向对象时
//	int b = 5;
//	int* pb = &b; // 可以直接将变量的地址给指针初始化
//	printf("%d\n", *pb);
//	return 0;
//}

//int main()
//{
//
//	int arr[10] = { 0 };
//	int* pb = arr;
//	char* pc = (char*)arr; // vs2022不支持直接用char类型的指针访问int类型的数组
//	printf("%p\n", pb);
//	printf("%p\n", ++pb);  // 步长是4个字节
//	printf("%p\n", pc);
//	printf("%p\n", ++pc);  // 步长是1个字节
//
//	// 如果指针已经创建了，可以用if检查是否是空指针
//	// *pb 无法直接判断 pb 是否为 NULL 
//  //if(*pb == NULL) 是错的
//	if (pb == NULL) 
//	{
//		*pb = 10;
//		printf("%d", *pb);
//	}
//	return 0;
//}

// 此时对于指针 pb，通过 if (*pb == NULL) 的语句来判断* pb 是否为空指针是错误的
// 因为* pb 为整型变量，而不是指针，您应该判断 pb 是否为空指针，即 if (pb == NULL)
// 所以要明确一点，* pb 无法直接判断 pb 是否为 NULL
// 通过条件语句来判断指针是否为空指针应该使用指针本身，而不是通过解引用的方式
// 因此，在代码中，并没有条件满足* pb == NULL，所以 * pb 不会成为空指针

// 指针的类型决定了指针的步长
// 当在应用指针时，指针++，每次移动的距离就是指针的类型距离
// 比如,指针是int类型的，那么每次指针移动4个字节，也就访问四个字节的内容
// 而char类型的就是每次移动1个字节

// 指针的加减运算
// 指针++ 向后移动 
// 指针-- 向前移动
//
//指针-指针？

// 正常方法求长度
//#include <string.h>
//int main()
//{
//	char ch[] = "abcde";
//	int len = strlen(ch);
//	printf("%d", len);
//	return 0;
//}

// 计数器
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char ch[] = "abcde";
//	int len = my_strlen(ch);
//	printf("%d", len);
//	return 0;
//}

// 递归
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	char ch[] = "abcde";
//	int len = my_strlen(ch);
//	printf("%d", len);
//	return 0;
//}

// 指针-指针=指向空间的元素个数差值
//int my_strlen(char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;
//}
//int main()
//{
//	char ch[] = "abcde";
//	int len = my_strlen(ch);
//	printf("%d", len);
//	return 0;
//}

//指针与数字，指针与指针的关系就像日期一样
//
// 日期 +/- 天数 = 日期
// 日期 - 日期 = 天数
// 日期 + 日期 = ？无意义
//
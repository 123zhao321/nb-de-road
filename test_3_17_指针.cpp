#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//指针是用来存放地址的，地址是唯一标示一块地址空间的。

//int main()
//{
//	int a = 1;
//	char b = 'c';
//
//	//指针的类型
//	int* pa = &a;
//	char* pb = &b;
//	printf("%d\n", *pa);
//	printf("%c\n", *pb);
//	printf("sizeof(pa)=%d\n", sizeof(pa));
//	printf("sizeof(pb)=%d\n",sizeof(pb));
//	//指针的大小在32位平台是4个字节，在64位平台是8个字节。
//	return 0;
//}

int main()
{
	int arr[10] = { 0 };
	char ch[10] = { 0 };

	//指针的类型
	int *pa = arr;
	char *pb = ch;
	printf("%p\n", pa); // 98
	printf("%p\n", pa+1); // 9C = 8 + 4 因为int是四个字节
	printf("%p\n", pb); // D8
	printf("%p\n", pb+1); // D9 = D8 + 1 因为char是1个字节

	// 指针的类型决定了，对指针解引用的时候有多大的权限
	// (能操作几个字节)
	// 比如 : char* 的指针解引用就只能访问一个字节
	//		 而int* 的指针的解引用就能访问四个字节

	//总之指针的类型很重要
	return 0;
}
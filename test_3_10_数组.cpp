#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

// 数组在内存中是连续存放的
// 并且数组的地址是由低到高排列的
// 所以访问首元素后就可以++访问了
// 又因为数组名和数组首元素的地址一样
// 所以可以将数组名给一个指针
// 这个指针就可以访问数组了

// 不完全初始化，就是数组创建的时候
// 没有填满会补0（整形）或\0（字符）

// 二维数组的创建
// 二维数组初始化的时候，前一个括号，行可以省略，
// 第二个括号，列不可以省略
// 因为二维数组是连续存放的，在存放过程中
// 可以根据列数来确定行数，
// 就像站队一样，知道一行站几个人，就能依次往下排了

// 二维数组在内存中也是连续存放的

// 二维数组的数组名：arr,arr[0],arr[1].....

// 数组名是什么?
// 数组名是数组首元素的地址
// 
// 
// 但是有2个例外！！！！！！！！！
// sizeof(数组名) - 数组名表示整个数组 - 计算的是整个数组的大小单位是字节
// &数组名 - 数组名表示整个数组 -取出的是整个数组的地址
// 
// 除了这两个，数组名就是数组首元素的地址


//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d", *p++);//注意是*p不是p！！！！！！
//	}
//	return 0;
//}

// 二维数组在内存中也是连续存放的
//int main()
//{
//	int i, j;
//	int arr[3][4] = { {1,2},{3,4},{5,6} };
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("arr[%d][%d]=%p\n", i, j,&arr[i][j]);
//		}
//	}
//	return 0;
//}
// 证明了二维数组的的一行内是连续的，行于行也是连续的

//int main()
//{
//	int i, j;
//	int arr[3][4] = { {1,2},{3,4},{5,6} };
//	int* p = &arr[0][0];
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("arr[%d][%d]=%p\n", i, j, *p++);
//		}
//	}
//	return 0;
//}

//printf("%p\n",&arr);// &arr取出的是数组的地址
//printf("%p\n",&arr+1);// &arr+1是整个数组越过去新建一个数组地址
//printf("%p\n",arr);// 数组首元素地址
//printf("%p\n",arr+l);// 第二个元素地址
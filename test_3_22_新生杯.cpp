#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//题目描述
//这棵原石树上有 n 颗原石，其中第 i 个原石所在的高度为 height[i]，
//同时海绵宝宝身旁路过了一个高度为 x 的三腿凳子(草太)，但有些原石树下面是崎岖的,凳子不能保持平衡。
//已知海绵宝宝伸手能达到的最大高度为 h 而当他伸手够不到时，他会尝试踩在凳子上。
//请你帮海绵宝宝算一下，他最多可以从这棵树上摘到多少颗原石。
//输入输出格式
//Input
//第一行输入 n, h, x 三个整数。
//第二行输入 n 个整数，其中第 i 个数代表原石的高度height[i]
//第三行输入 n 个整数，其中当第 i 个数为 0 时，代表 i 颗原石下方平坦可以放置板凳。
//Output
//输出一个整数，表示海绵宝宝能摘到的最大的原石数量。
//输入输出样例
//Input
//5 
//20 1025 27 32 105 7
//1 0 0 0 1
//Output
//2
// 
// 
//int main()
//{
//	int n, h, x;
//	scanf("%d %d %d", &n, &h, &x);
//	int i = 0;
//	int arr[2][100] = { 0 };
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d",&arr[0][i]);
//	}
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[1][i]);
//	}
//	int count = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (arr[0][i] <= h)
//		{
//			count++;
//		}
//		else
//		{
//			if (arr[1][i] == 0)
//			{
//				if (arr[0][i] <= h + x)
//				{
//					count++;
//				}
//			}
//		}
//	}
//	printf("%d", count);
//	return 0;
//}
//
// 
//题目描述
//有 n 个人在排队洗澡，每个人的序号为i = 0, 1, ………, n - 1 ，洗澡时间为 T[i]，
//他们洗澡速度有快有慢。于是海绵宝宝让大家按照某种顺序排队，使得每个人平均的等待时间最短。
//题目保证，洗澡时间不会出现相同的数据。
//输入输出格式
//Input
//第一行输入一个整数 n 表示正在排队的人的数量。第二行输入 n 个整数，其中第 i个数代表序号为 的人的洗澡时间 T[i]
//Output
//第一行输出 n 个整数，表示经过海绵宝宝排序后的序号
//第二行输出一个保留两位小数的双精度浮点数，表示排序后每个人的平均等待时间,
//输入输出样例
//Input
//9
//56 12 1 99 1000 234 33 55 812
//Output
//3 2 7 8 1 4 6 9 5
//262.89
// 
// 
// 
// 定义结构体
//struct wait
//{
//	int x;
//	int times;
//};
//int main()
//{
//	int n = 0;
//	struct wait arr[1000]; // 创建结构体数组
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		arr[i].x = i + 1;
//		scanf("%d", &arr[i].times);
//	}
//	int cnt = 0;
//	while (1)
//	{
//		for (i = 0; i < n - 1 - cnt; i++)
//		{
//			if (arr[i].times > arr[i + 1].times)
//			{
//				int a = arr[i].x;
//				arr[i].x = arr[i + 1].x;
//				arr[i + 1].x = a;
//				a = arr[i].times;
//				arr[i].times = arr[i + 1].times;
//				arr[i + 1].times = a;
//			}
//		}
//		cnt++;
//		if (cnt == n)
//		{
//			break;
//		}
//	}
//	double num = 0;
//	for (i = 0; i < n; i++)
//	{
//	//	printf("%d %d\n", arr[i].x, arr[i].times);
//		printf("%d ", arr[i].x);
//		if (i != n - 1)
//		{
//			num += arr[i].times * (n - 1 - i);
//		}
//	}
//	printf("\n%.2lf", num * 1.0 / n);
//	return 0;
//}


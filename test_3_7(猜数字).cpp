#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//解决问题：
//汉诺塔
//青蛙跳台阶

//递归的缺陷也很大：
//比如：层次太深，储存的数据太多
//此时就需要非递归的方法，即迭代
//最常用的就是迭代，for,while,if...

//求第n个斐波那契数

////用递归的方法
//
//int fib(int n)
//{
//	if (n > 2)
//	{
////		printf("%d %d\n",n-1,n-2);
////		插入这个函数可以看到程序一直在努力的运行
//		return fib(n - 1) + fib(n - 2);
//	}
//	else
//	{
//		return 1;
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int num = fib(n);
//	printf("%d", num);
//	return 0;
//}
//// 当n比较小的时候，效率很高	n=10
//// 当n很大时就非常慢了			n=50
////由此看出递归的缺陷

//用迭代的方法
//
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n != 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int num = fib(n);
//	printf("%d", num);
//	return 0;
//}

//不难发现，无论n=几都可以快速计算
//迭代就是创建一组数据，随着运算不断的更新
//可以减少相同的计算，也可以更少的开辟空间


//猜数字
#include <stdlib.h>
#include <Windows.h>
#include <time.h>//时间戳
char text[4][20] = {"帅","正常模式","困难模式"};
void game()
{
	printf(	"请仔细阅读规则！\n"
			"规则如下：\n"
			"正常模式：10 血量\n"
			"困难模式： 5 血量 范围加大并没有数据记录\n"
			"请选择模式：\n 1 正常模式\n 2 困难模式\n");
	int mode = 0;//模式储存
	scanf("%d", &mode);
	srand((unsigned)time(NULL));//设置rand随机数的起点//秒级别
	int x = (int)rand() % 100*mode + 1;//系统生成的随机数
	printf("随机数已生成！范围是1到%d\n",mode*100);
	int num=0;//用户每次输入的数字
	int blood_volume = 5 * (3 - mode);//血量
	int fre = 0;
	while (num != x)
	{
		if (mode == 2)
		{
			Sleep(1000);
			system("cls");
		}
		printf("当前血量是%d\n", blood_volume);
		scanf("%d", &num);
		fre++;
		if (num > x)
		{
			printf("猜大了！\n");
		}
		else if(num<x)
		{
			printf("猜小了\n");
		}
		else
		{
			printf(	"你这个小智障居然猜对了！\n"	
					"即将删除，请截图保存\n"
					"你选择的模式是%s\n"
					"一共猜了%d次\n",text[mode],fre);
			Sleep(5000);
			system("cls");
			break;
		}
		blood_volume--;
		if (blood_volume <= 3 && blood_volume > 0)
		{
			printf("就剩%d条命了哦！\n",blood_volume);
		}
		if (blood_volume == 0)
		{
			printf(	"您的血量为0，是否充值，继续游戏？(1充值 0取消)\n"
					"——广告位——\n");
			scanf("%d", &blood_volume);
			if (blood_volume)
			{
				blood_volume = 5 * (3 - mode);
			}else
			{
				system("cls");
				break;
			}
		}
	}
}

int main()
{
	int n = 1;
	while (n)
	{
		printf("********************************\n");
		printf("********* 1 开始游戏 ***********\n");
		printf("********* 0 退出游戏 ***********\n");
		printf("********************************\n");
		printf("请输入数字开始游戏：");
		scanf("%d", &n);
		system("cls");
		if ( n )
		{
			game();
		}
		else
		{
			printf("~~~~欢迎下次游玩~~~~");
		}
	}
	

	return 0;
}

//time: 这是C语言中的一个标准库函数，
//位于 <time.h> 头文件中
//time(NULL)函数接受一个参数
//该参数通常用于存储时间信息的结构体指针。
//然而，如果你传入 NULL
//它表示你只需要当前的时间戳而不需要详细的时间信息。
//所以，time(NULL) 的调用的含义是获取当前时间的时间戳
//返回的是一个表示自 1970年1月1日00:00:00UTC
//（UNIX 纪元）以来经过的秒数。
//你可以将这个时间戳用于各种目的
//比如记录事件发生的时间、计算时间间隔等。
//例如，如果你想获取程序运行时的时间
//你可以使用 time(NULL) 来获取程序启动的时间戳。
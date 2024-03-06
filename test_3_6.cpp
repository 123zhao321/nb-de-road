#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//函数的递归

/*
//1、用递归拆数，从前到后依次输出
//shuchu（）函数就是将输入的整型从前到后依次输出
void shuchu(int n)
{
	//限制条件
	if (n > 9)//当n>9时，就把十位数及以上的数，再次给shuchu（）
	{
		shuchu(n / 10);//越来越接近限制条件
	}
	printf("%d ", n % 10);
}
//因为总是要先判断if内的条件
//所以只有等最高位数输出的时候，其他的数字才被输出
//递归里面一点要有条件
//不然就一直调用自己成为死递归
//参数也要发生变化
int main()
{
	int num;
	scanf("%d", &num);
	shuchu(num);
	return 0;
}
*/

//用递归写一个strlen函数,不能有临时变量

int my_strlen(char* str)
{
	if (*str != '\0')
	{
		return 1 + my_strlen(str + 1);
	}
	else
	{
		return 0;
	}
}
int main()
{
	char arr[] = "abcde";
	printf("%d", my_strlen(arr));
	return 0;
}
//递归思路
//将数组作为指针传入自定义函数my_strlen
//返回1+my_strlen（指针+1）
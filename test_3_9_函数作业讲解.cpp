#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//用递归的方法实现字符串逆序
//char arr[20];
//void Reverse(int left,int right)
//{
//	char z = arr[left];
//	if (left <= right)
//	{
//		arr[left] = arr[right];
//		arr[right] = z;
//		left += 1;
//		right -= 1;
//		Reverse(left, right);
//	}
//}
//int main()
//{
//	
//	scanf("%s", arr);
//	Reverse(0,strlen(arr)-1);
//	printf("\n%s\n", arr);
//	return 0;
//}

//大小写转换
//int main() 
//{
//    char ch;
//    int i = 0;
//    while (scanf(" %c", &ch) == 1)
//    {
//        printf("%c\n", ch + 32);
//    }
//    return 0;
//}

//数字拆分计算每一位之和
//int dight(int num)
//{
//	if (num > 9)
//	{
//		return num%10 + dight(num / 10);
//	}
//	else
//	{
//		return num;
//	}
//}
//int main()
//{
//	int num;
//	scanf("%d", &num);
//	printf("%d",dight(num));
//	return 0;
//}

//n的k次方
double power(int n, int k)
{
	if (k>0)
	{
		return n * power(n,k-1);
	}
	else if (k < 0)
	{
		return 1.0 / power(n, -k);
	}
	else
	{
		return 1.0;
	}
	return 1;
}
int main()
{
	int n, k;
	scanf("%d %d",&n,&k);
	printf("%lf",power(n, k));
	return 0;
}

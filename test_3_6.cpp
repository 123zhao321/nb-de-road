#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//�����ĵݹ�

/*
//1���õݹ��������ǰ�����������
//shuchu�����������ǽ���������ʹ�ǰ�����������
void shuchu(int n)
{
	//��������
	if (n > 9)//��n>9ʱ���Ͱ�ʮλ�������ϵ������ٴθ�shuchu����
	{
		shuchu(n / 10);//Խ��Խ�ӽ���������
	}
	printf("%d ", n % 10);
}
//��Ϊ����Ҫ���ж�if�ڵ�����
//����ֻ�е����λ�������ʱ�����������ֲű����
//�ݹ�����һ��Ҫ������
//��Ȼ��һֱ�����Լ���Ϊ���ݹ�
//����ҲҪ�����仯
int main()
{
	int num;
	scanf("%d", &num);
	shuchu(num);
	return 0;
}
*/

//�õݹ�дһ��strlen����,��������ʱ����

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
//�ݹ�˼·
//��������Ϊָ�봫���Զ��庯��my_strlen
//����1+my_strlen��ָ��+1��
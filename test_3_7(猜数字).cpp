#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//������⣺
//��ŵ��
//������̨��

//�ݹ��ȱ��Ҳ�ܴ�
//���磺���̫����������̫��
//��ʱ����Ҫ�ǵݹ�ķ�����������
//��õľ��ǵ�����for,while,if...

//���n��쳲�������

////�õݹ�ķ���
//
//int fib(int n)
//{
//	if (n > 2)
//	{
////		printf("%d %d\n",n-1,n-2);
////		��������������Կ�������һֱ��Ŭ��������
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
//// ��n�Ƚ�С��ʱ��Ч�ʺܸ�	n=10
//// ��n�ܴ�ʱ�ͷǳ�����			n=50
////�ɴ˿����ݹ��ȱ��

//�õ����ķ���
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

//���ѷ��֣�����n=�������Կ��ټ���
//�������Ǵ���һ�����ݣ��������㲻�ϵĸ���
//���Լ�����ͬ�ļ��㣬Ҳ���Ը��ٵĿ��ٿռ�


//������
#include <stdlib.h>
#include <Windows.h>
#include <time.h>//ʱ���
char text[4][20] = {"˧","����ģʽ","����ģʽ"};
void game()
{
	printf(	"����ϸ�Ķ�����\n"
			"�������£�\n"
			"����ģʽ��10 Ѫ��\n"
			"����ģʽ�� 5 Ѫ�� ��Χ�Ӵ�û�����ݼ�¼\n"
			"��ѡ��ģʽ��\n 1 ����ģʽ\n 2 ����ģʽ\n");
	int mode = 0;//ģʽ����
	scanf("%d", &mode);
	srand((unsigned)time(NULL));//����rand����������//�뼶��
	int x = (int)rand() % 100*mode + 1;//ϵͳ���ɵ������
	printf("����������ɣ���Χ��1��%d\n",mode*100);
	int num=0;//�û�ÿ�����������
	int blood_volume = 5 * (3 - mode);//Ѫ��
	int fre = 0;
	while (num != x)
	{
		if (mode == 2)
		{
			Sleep(1000);
			system("cls");
		}
		printf("��ǰѪ����%d\n", blood_volume);
		scanf("%d", &num);
		fre++;
		if (num > x)
		{
			printf("�´��ˣ�\n");
		}
		else if(num<x)
		{
			printf("��С��\n");
		}
		else
		{
			printf(	"�����С���Ͼ�Ȼ�¶��ˣ�\n"	
					"����ɾ�������ͼ����\n"
					"��ѡ���ģʽ��%s\n"
					"һ������%d��\n",text[mode],fre);
			Sleep(5000);
			system("cls");
			break;
		}
		blood_volume--;
		if (blood_volume <= 3 && blood_volume > 0)
		{
			printf("��ʣ%d������Ŷ��\n",blood_volume);
		}
		if (blood_volume == 0)
		{
			printf(	"����Ѫ��Ϊ0���Ƿ��ֵ��������Ϸ��(1��ֵ 0ȡ��)\n"
					"�������λ����\n");
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
		printf("********* 1 ��ʼ��Ϸ ***********\n");
		printf("********* 0 �˳���Ϸ ***********\n");
		printf("********************************\n");
		printf("���������ֿ�ʼ��Ϸ��");
		scanf("%d", &n);
		system("cls");
		if ( n )
		{
			game();
		}
		else
		{
			printf("~~~~��ӭ�´�����~~~~");
		}
	}
	

	return 0;
}

//time: ����C�����е�һ����׼�⺯����
//λ�� <time.h> ͷ�ļ���
//time(NULL)��������һ������
//�ò���ͨ�����ڴ洢ʱ����Ϣ�Ľṹ��ָ�롣
//Ȼ��������㴫�� NULL
//����ʾ��ֻ��Ҫ��ǰ��ʱ���������Ҫ��ϸ��ʱ����Ϣ��
//���ԣ�time(NULL) �ĵ��õĺ����ǻ�ȡ��ǰʱ���ʱ���
//���ص���һ����ʾ�� 1970��1��1��00:00:00UTC
//��UNIX ��Ԫ������������������
//����Խ����ʱ������ڸ���Ŀ��
//�����¼�¼�������ʱ�䡢����ʱ�����ȡ�
//���磬��������ȡ��������ʱ��ʱ��
//�����ʹ�� time(NULL) ����ȡ����������ʱ�����
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//ָ����������ŵ�ַ�ģ���ַ��Ψһ��ʾһ���ַ�ռ�ġ�

//int main()
//{
//	int a = 1;
//	char b = 'c';
//
//	//ָ�������
//	int* pa = &a;
//	char* pb = &b;
//	printf("%d\n", *pa);
//	printf("%c\n", *pb);
//	printf("sizeof(pa)=%d\n", sizeof(pa));
//	printf("sizeof(pb)=%d\n",sizeof(pb));
//	//ָ��Ĵ�С��32λƽ̨��4���ֽڣ���64λƽ̨��8���ֽڡ�
//	return 0;
//}

int main()
{
	int arr[10] = { 0 };
	char ch[10] = { 0 };

	//ָ�������
	int *pa = arr;
	char *pb = ch;
	printf("%p\n", pa); // 98
	printf("%p\n", pa+1); // 9C = 8 + 4 ��Ϊint���ĸ��ֽ�
	printf("%p\n", pb); // D8
	printf("%p\n", pb+1); // D9 = D8 + 1 ��Ϊchar��1���ֽ�

	// ָ������;����ˣ���ָ������õ�ʱ���ж���Ȩ��
	// (�ܲ��������ֽ�)
	// ���� : char* ��ָ������þ�ֻ�ܷ���һ���ֽ�
	//		 ��int* ��ָ��Ľ����þ��ܷ����ĸ��ֽ�

	//��ָ֮������ͺ���Ҫ
	return 0;
}
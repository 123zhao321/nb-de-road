#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

// �ž�Ұָ��
// Ұָ����ƻ�������ȶ���
// ��Ϊ��֪��Ұָ��ָ��ĵ�ַ������
// ʹ�õ�ʱ����ƻ����е�����
// 
//int main()
//{
//	int a = 0; // �����ĳ�ʼ��
//	int* pa = NULL; // ָ��ĳ�ʼ��
//	a = 10;
//	pa = &a;
//	printf("%d\n", *pa);
//
//	// ��֪��ָ�����ʱ
//	int b = 5;
//	int* pb = &b; // ����ֱ�ӽ������ĵ�ַ��ָ���ʼ��
//	printf("%d\n", *pb);
//	return 0;
//}

//int main()
//{
//
//	int arr[10] = { 0 };
//	int* pb = arr;
//	char* pc = (char*)arr; // vs2022��֧��ֱ����char���͵�ָ�����int���͵�����
//	printf("%p\n", pb);
//	printf("%p\n", ++pb);  // ������4���ֽ�
//	printf("%p\n", pc);
//	printf("%p\n", ++pc);  // ������1���ֽ�
//
//	// ���ָ���Ѿ������ˣ�������if����Ƿ��ǿ�ָ��
//	// *pb �޷�ֱ���ж� pb �Ƿ�Ϊ NULL 
//  //if(*pb == NULL) �Ǵ��
//	if (pb == NULL) 
//	{
//		*pb = 10;
//		printf("%d", *pb);
//	}
//	return 0;
//}

// ��ʱ����ָ�� pb��ͨ�� if (*pb == NULL) ��������ж�* pb �Ƿ�Ϊ��ָ���Ǵ����
// ��Ϊ* pb Ϊ���ͱ�����������ָ�룬��Ӧ���ж� pb �Ƿ�Ϊ��ָ�룬�� if (pb == NULL)
// ����Ҫ��ȷһ�㣬* pb �޷�ֱ���ж� pb �Ƿ�Ϊ NULL
// ͨ������������ж�ָ���Ƿ�Ϊ��ָ��Ӧ��ʹ��ָ�뱾��������ͨ�������õķ�ʽ
// ��ˣ��ڴ����У���û����������* pb == NULL������ * pb �����Ϊ��ָ��

// ָ������;�����ָ��Ĳ���
// ����Ӧ��ָ��ʱ��ָ��++��ÿ���ƶ��ľ������ָ������;���
// ����,ָ����int���͵ģ���ôÿ��ָ���ƶ�4���ֽڣ�Ҳ�ͷ����ĸ��ֽڵ�����
// ��char���͵ľ���ÿ���ƶ�1���ֽ�

// ָ��ļӼ�����
// ָ��++ ����ƶ� 
// ָ��-- ��ǰ�ƶ�
//
//ָ��-ָ�룿

// ���������󳤶�
//#include <string.h>
//int main()
//{
//	char ch[] = "abcde";
//	int len = strlen(ch);
//	printf("%d", len);
//	return 0;
//}

// ������
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

// �ݹ�
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

// ָ��-ָ��=ָ��ռ��Ԫ�ظ�����ֵ
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

//ָ�������֣�ָ����ָ��Ĺ�ϵ��������һ��
//
// ���� +/- ���� = ����
// ���� - ���� = ����
// ���� + ���� = ��������
//
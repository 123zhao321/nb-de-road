#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

int main()
{
	srand((unsigned)time(NULL));
	int choose;
	//��ӡ�˵����û�ѡ��
	do
	{
	menu();
	scanf("%d",&choose);//1��ʼ��Ϸ 0�˳���Ϸ ������������Ч��
		switch (choose)
		{
			//��ʼ��Ϸ��
			case 1:
				printf("��ʼ��Ϸ��!СZ���ڻ�����Ŷ~\n");
				//Sleep(1000);//����ʱ��
				system("cls");
				game();
				break;
			case 0:
				printf("��Ϸ����~\n");
				break;
			default:
				printf("����Ч�������������룺\n");
				break;
		}
	} while (choose);
	
	return 0;
}
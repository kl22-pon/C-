/*
����ģ���У�1.¼�� 2.���� 3.���� 4.���� 5.��� 
*/ 
#include<stdio.h>//�õ������������ 
#include<stdlib.h>//�õ��⺯������� 
#include<string.h>//�õ��ַ������������ 
#define Max_SN 30//���ѧ���� 
#define Max_CN 30//���γ�����
char menu (void);//�����˵��Ӻ��� 
int main()
{
	char ch;//�������˵�ѡ�� 
	while(1)
	{
		ch=menu();//����������������ȡ�û�ѡ�� 
		switch(ch)//ѡ�� �ֱ������Ӧ���� 
		{
			case '1':
				printf("����");//����¼��ѧ����Ϣģ�� 
				printf("\n");
				break; 
			case '2':
				printf("����");//���ü���ģ�� 
				printf("\n");
				break; 	
			case '3':
				printf("����");//��������ģ�� 
				printf("\n");
				break; 	
			case '4':
				printf("����");//���ò���ģ�� 
				printf("\n");
				break; 	
			case '5':
				printf("���");//�������ģ�� 
				printf("����ѧ������ϢΪ��\n"); 
				printf("\n");
				break; 
			case '0':
				printf("�������"); 
				exit(0);
				default:printf("�������");	
		}
	} 
}
 char menu(void)
 {
 	char menusele;
 	printf("\tѧ���ɼ�����\n");
 	printf("\t1.¼��ѧ����Ϣ\n");
 	printf("\t2.����ѧ�����ֺܷ�ƽ����\n");
 	printf("\t3.��ѧ���ܳɼ�����\n");
 	printf("\t4.����ĳ��ѧ������Ϣ\n");
 	printf("\t5.���ѧ������Ϣ\n");
 	printf("\t0.�˳�\n");
 	printf("\t���������ѡ��\n");
    scanf("%c",&menusele);
	getchar();
	return menusele; 
 }

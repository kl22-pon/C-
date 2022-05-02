/*
功能模块有：1.录入 2.计算 3.排序 4.查找 5.输出 
*/ 
#include<stdio.h>//用到输出输入的添加 
#include<stdlib.h>//用到库函数的添加 
#include<string.h>//用到字符处理函数的添加 
#define Max_SN 30//最多学生数 
#define Max_CN 30//最多课程门数
char menu (void);//声明菜单子函数 
int main()
{
	char ch;//接受主菜单选项 
	while(1)
	{
		ch=menu();//调用主函数，并读取用户选项 
		switch(ch)//选项 分别调用相应函数 
		{
			case '1':
				printf("输入");//调用录用学生信息模块 
				printf("\n");
				break; 
			case '2':
				printf("计算");//调用计算模块 
				printf("\n");
				break; 	
			case '3':
				printf("排序");//调用排序模板 
				printf("\n");
				break; 	
			case '4':
				printf("查找");//调用查找模板 
				printf("\n");
				break; 	
			case '5':
				printf("输出");//调用输出模块 
				printf("所有学生的信息为：\n"); 
				printf("\n");
				break; 
			case '0':
				printf("程序结束"); 
				exit(0);
				default:printf("输入错误");	
		}
	} 
}
 char menu(void)
 {
 	char menusele;
 	printf("\t学生成绩管理：\n");
 	printf("\t1.录入学生信息\n");
 	printf("\t2.计算学生的总分和平均分\n");
 	printf("\t3.按学生总成绩排序\n");
 	printf("\t4.查找某个学生的信息\n");
 	printf("\t5.输出学生的信息\n");
 	printf("\t0.退出\n");
 	printf("\t请输入你的选择：\n");
    scanf("%c",&menusele);
	getchar();
	return menusele; 
 }

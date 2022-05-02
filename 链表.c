/* 
专业术语：头结点 
				头结点的数据类型和首节点的类型是一模一样的
				头结点是首节点前面的那个节点
				头结点并不存放有效数据
				设置头结点的目的是为了方便对链表的操作 
          头指针
		  		存放头结点地址的指针 
          
          首节点
          		存放第一个有效数据的结点 
          	
		  尾节点 
		  		存放最后一个有效数据的结点

			确定一个链表需要一个参数
				头指针 
*/
 
#include<stdio.h>

//定义了一个链表节点的数据类型 
struct Node
{
	int date;
	struct Node * pNext;
	
	
};
int main(void)
{
	struct Node * pHead = NULL;//pHead用来存放链表头结点的地址 
	
	pHead = creat_list();//创建一个非循环单链表 
	
	traverse_list(pHead)
	return 0;
} 

/* list.c -- 支持链表操作的函数 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "list.h"

/* 局部函数原型 */
static void CopyToNode(Item item, Node* pnode);

/* 接口函数 */
/* 把链表设置为空 */
void InitializeList(const List* plist) {
	*plist = NULL;
}

/* 如果链表为空，返回true */
bool ListIsFull(const List* plist) {
	Node* pt;
	bool full;

	pt = (Node*)malloc(sizeof(Node));
	if (pt == NULL)
		full = true;
	else
		full = false;
	free(pt);

	return full;
}

/* 返回节点的数量 */
unsigned int ListItemCount(const List* plist) {
	unsigned int count = 0;
	Node* pnode = *plist;	//设置链表的开始

	while (pnode != NULL) {
		++count;
		pnode = pnode->next;
	}

	return count;
}

/* 创建储存项的节点，并将其添加至由plist指向的链表末尾（较慢的实现）*/
bool AddItem(Item item, List* plist) {
	Node* pnew;
	Node* scan = *plist;
}

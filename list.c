/* list.c -- ֧����������ĺ��� */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "list.h"

/* �ֲ�����ԭ�� */
static void CopyToNode(Item item, Node* pnode);

/* �ӿں��� */
/* ����������Ϊ�� */
void InitializeList(const List* plist) {
	*plist = NULL;
}

/* �������Ϊ�գ�����true */
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

/* ���ؽڵ������ */
unsigned int ListItemCount(const List* plist) {
	unsigned int count = 0;
	Node* pnode = *plist;	//��������Ŀ�ʼ

	while (pnode != NULL) {
		++count;
		pnode = pnode->next;
	}

	return count;
}

/* ����������Ľڵ㣬�������������plistָ�������ĩβ��������ʵ�֣�*/
bool AddItem(Item item, List* plist) {
	Node* pnew;
	Node* scan = *plist;

	pnew = (Node*)malloc(sizeof(Node));
	if (pnew = NULL)
		return false;

	CopyToNode(item, pnew);
	pnew->next = NULL;
	if (scan == NULL)
		*plist = pnew;
	else {
		while (scan->next != NULL)
			scan = scan->next;
		scan->next = pnew;
	}

	return true;
}

/* ����ÿ���ڵ㲢ִ��pfunָ��ĺ��� */
void Traverse(const List* plist, void(*pfun)(Item item)) {
	Node* pnode = *plist;

	while (pnode != NULL) {
		(*pfun)(pnode->item);
		pnode = pnode->next;
	}
}

/* �ͷ���malloc()������ڴ� */
/* ��������ָ��ΪNULL */
void EmptyTheList(List* plist) {
	Node* psave;

	while (*plist != NULL) {
		psave = (*plst)->next;
		free(*plist);
		*plist = psave;
	}
}

/* �ֲ��������� */
/* ��һ��������ڵ��� */
static void CopyToNode(Item item, Node* pnode) {
	pnode->item = item;
}

/* list.c -- ֧����������ĺ��� */
#include <stdio.h>
#include <stdlib.h>
#include "list.h"

/* �ֲ�����ԭ�� */
static void CopyToNode(Item item, Node* pnode);

/* �ӿں��� */
/* ����������Ϊ�� */
void InitializeList(const List* plist) {
	*plist = NULL;
}

/* �������Ϊ�� */

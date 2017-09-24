#include <stdio.h>
#include <stdlib.h>
#include "SeqStack.h"

int main(void)
{
	SeqStack S;/*����һ��ջ*/
	int i;
	DataType a[] = { 'A', 'B','C','D','E','F' };
	DataType e;
	InitStack(&S);/*��ʼ��ջ*/
	for (i = 0; i < sizeof(a) / sizeof(a[0]); i++)/*������A�е�Ԫ�����ν�ջ*/
	{
		if (PushStack(&S, a[i]) ==0)
		{
			printf("ջ�Ѿ��������ܽ�ջ!\n");
			return;
		}
	}
	printf("���ν�ջ��Ԫ���ǣ�");
	if (PopStack(&S, &e) == 1)   /*F��ջ*/
		printf("%4c",e);
	if (PopStack(&S, &e) == 1)
		printf("%4c",e);
	printf("\n");
	printf("��ǰջ��Ԫ���ǣ� ");
	if (GetTop(S, &e) == 0)/*ȡջ��Ԫ��*/
	{
		printf("ջ�Ѿ���\n");
		return;
	}
else
	printf("%4c",e);

	printf("��G H������ջ��");
	if (PushStack(&S, 'G') == 0)
	{
		printf("ջ�Ѿ��������ܽ�ջ��");
		return;
	}
	if (PushStack(&S, 'H') == 0)
	{
		printf("ջ�Ѿ��������ܽ�ջ��");
		return;
	}
	printf("��ǰջ�е�Ԫ�ظ����ǣ�%d\n",StackLength(S));
	printf("��ջ�е�Ԫ�س�ջ����ջ��˳���ǣ�\n");
	while (!StackEmpty(S))
	{
		PopStack(&S, &e);
		printf("%4c",e);
	}
	printf("\n");
}
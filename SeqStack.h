#include <stdio.h>
#define StackSize 100
typedef char DataType;
typedef struct
{
	DataType stack[StackSize];
	int top;/*ջ��ָ��*/
}SeqStack;

/*��ʼ��ջ*/
void InitStack(SeqStack *S)
{

	S->top = 0;/*��ջ��ָ������*/
}
/*�ж�ջ�Ƿ�Ϊ�գ����򷵻�1,���򷵻�0*/
int StackEmpty(SeqStack S)
{

	if (S.top == 0) /*��ǰջ��ָ��TopΪ0*/
		return 1;
	else
		return 0;
}
/*ȡջ��Ԫ�أ���ջ��Ԫ��ֵ���ظ�E*/
int GetTop(SeqStack S, DataType *e)
{
	if (S.top <= 0)/*ȡջ��Ԫ��֮ǰ���ж�ջ�Ƿ�Ϊ��*/
	{
		printf("ջ�Ѿ�Ϊ�գ�\n");
		return 0;
	}
	else
	{
		*e = S.stack[S.top - 1];
		return 1;
	}
}
/*��Ԫ��E��ջ����ջ�ɹ��򷵻�1�����򷵻�0*/
int PushStack(SeqStack *S, DataType e)
{
	if (S->top >= StackSize)/*��ջ֮ǰ���ж�ջ�Ƿ��Ѿ���*/
	{ 
		printf("ջ�Ѿ�����\n");
		return 0;
	}
	else
	{
		S->stack[S->top] = e;/*Ԫ��e��ջ*/
		S->top++;
		return 1;
	}

}
/*��ջ��������ջ��Ԫ�س�ջ������ֵ��e����ջ�ɹ�����1�����򷵻�0*/
int PopStack(SeqStack *S, DataType *e)
{
	if (S->top == 0)/*��ջ֮ǰ�ж�ջ�Ƿ�Ϊ��*/
	{ 
		printf("ջ�Ѿ��գ�\n");
		return 0;
	}
	else
	{
		S->top--;/*���޸�ջ��ָ��*/
		*e = S->stack[S->top];/*����ջԪ�ظ�E*/
		return 1;
	}
}
/*��ջ�ĳ���*/
int StackLength(SeqStack S)
{
	return S.top;
}
/*���ջ*/
void ClearStack(SeqStack *S)
{
	S->top = 0;
}
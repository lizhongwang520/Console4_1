#include <stdio.h>
#define StackSize 100
typedef char DataType;
typedef struct
{
	DataType stack[StackSize];
	int top;/*栈顶指针*/
}SeqStack;

/*初始化栈*/
void InitStack(SeqStack *S)
{

	S->top = 0;/*把栈顶指针置零*/
}
/*判断栈是否为空，是则返回1,否则返回0*/
int StackEmpty(SeqStack S)
{

	if (S.top == 0) /*当前栈顶指针Top为0*/
		return 1;
	else
		return 0;
}
/*取栈顶元素，将栈顶元素值返回给E*/
int GetTop(SeqStack S, DataType *e)
{
	if (S.top <= 0)/*取栈顶元素之前，判断栈是否为空*/
	{
		printf("栈已经为空！\n");
		return 0;
	}
	else
	{
		*e = S.stack[S.top - 1];
		return 1;
	}
}
/*将元素E进栈，进栈成功则返回1，否则返回0*/
int PushStack(SeqStack *S, DataType e)
{
	if (S->top >= StackSize)/*进栈之前，判断栈是否已经满*/
	{ 
		printf("栈已经满！\n");
		return 0;
	}
	else
	{
		S->stack[S->top] = e;/*元素e进栈*/
		S->top++;
		return 1;
	}

}
/*出栈操作，将栈顶元素出栈，并赋值给e，出栈成功返回1，否则返回0*/
int PopStack(SeqStack *S, DataType *e)
{
	if (S->top == 0)/*出栈之前判断栈是否为空*/
	{ 
		printf("栈已经空！\n");
		return 0;
	}
	else
	{
		S->top--;/*先修改栈顶指针*/
		*e = S->stack[S->top];/*将出栈元素给E*/
		return 1;
	}
}
/*求栈的长度*/
int StackLength(SeqStack S)
{
	return S.top;
}
/*清空栈*/
void ClearStack(SeqStack *S)
{
	S->top = 0;
}
#include <stdio.h>
#include <stdlib.h>
#include "SeqStack.h"

int main(void)
{
	SeqStack S;/*定义一个栈*/
	int i;
	DataType a[] = { 'A', 'B','C','D','E','F' };
	DataType e;
	InitStack(&S);/*初始化栈*/
	for (i = 0; i < sizeof(a) / sizeof(a[0]); i++)/*将数组A中的元素依次进栈*/
	{
		if (PushStack(&S, a[i]) ==0)
		{
			printf("栈已经满，不能进栈!\n");
			return;
		}
	}
	printf("依次进栈的元素是：");
	if (PopStack(&S, &e) == 1)   /*F出栈*/
		printf("%4c",e);
	if (PopStack(&S, &e) == 1)
		printf("%4c",e);
	printf("\n");
	printf("当前栈顶元素是： ");
	if (GetTop(S, &e) == 0)/*取栈顶元素*/
	{
		printf("栈已经空\n");
		return;
	}
else
	printf("%4c",e);

	printf("将G H依次入栈！");
	if (PushStack(&S, 'G') == 0)
	{
		printf("栈已经满，不能进栈！");
		return;
	}
	if (PushStack(&S, 'H') == 0)
	{
		printf("栈已经满，不能进栈！");
		return;
	}
	printf("当前栈中的元素个数是：%d\n",StackLength(S));
	printf("将栈中的元素出栈，出栈的顺序是：\n");
	while (!StackEmpty(S))
	{
		PopStack(&S, &e);
		printf("%4c",e);
	}
	printf("\n");
}
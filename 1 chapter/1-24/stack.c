/*	stack.c -- 栈实现文件	*/
#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

/*	接口函数定义	*/

int Initialize_S (Stack * const pstack, const int capacity) // const here to prevent from being altered inside the function
{
	if (capacity <= 0)
		return 0 ;
	*pstack = (struct stack *) malloc (sizeof (struct stack)) ;
	if (NULL == *pstack)
		return 0 ;
	(*pstack) -> array = (Stack_Item *) malloc (sizeof (Stack_Item) * capacity) ;
	if (NULL == (*pstack) -> array)
	{
		free (*pstack) ;
		return 0 ;
	}
	(*pstack) -> capacity = capacity ;
	(*pstack) -> top = EMPTY_TOP	;

	return 1 ;
}

int IsEmpty_S (const Stack * const pstack)
{
	return EMPTY_TOP == (*pstack) -> top ;
}

int IsFull_S (const Stack * const pstack)
{
	return (*pstack) -> top + 2 > (*pstack) -> capacity - 1 ;
}

int Push_S (const Stack * const pstack, const Stack_Item st1)
{
	if (IsFull_S (pstack))
		return 0 ;
	(*pstack) -> array[++(*pstack) -> top] = st1 ;

	return 1 ;
}

int Pop_S (const Stack * const pstack, Stack_Item * const pst1)
{
	if (IsEmpty_S (pstack))
		return 0 ;
	*pst1 = (*pstack) -> array[(*pstack) -> top--] ;

	return 1 ;
}

void Release_S (const Stack * const pstack)
{
	free ((*pstack) -> array) ;
	free (*pstack) ;
}
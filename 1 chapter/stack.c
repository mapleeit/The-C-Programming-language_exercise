/*
* title : stack.c
* time : 2014-10-30
*/

#include "stack.h"

#include <stdlib.h> // malloc() size_t free() system() rand() srand() exit()
#include <assert.h> // defend-program
#include <stdio.h>

#define INIT_SIZE 20
#define INCRECEMENT 20

struct T{
	elem_t *base, *top;
	int size;
};

T* init_stack(T* stack){
	stack = (T*)malloc(sizeof(stack));
	if (!stack) 
		exit(0);

	stack -> base = (elem_t*)malloc(INIT_SIZE*sizeof(elem_t));
	printf("base: %d \n",stack->base);
	stack->top = stack->base;
	stack->size = INIT_SIZE;
	printf("init_base: %d\n", stack->base);

	return(stack);
}
/* judge whether the stack is empty or not
*  if not, return the length of the stack
*/
int stack_empty(T* stack){
	return(!(stack->top - stack->base));
}

status empty_stack(T* stack){
	stack->top = stack->base;
	return(OK);
}

status stack_push(T* stack, elem_t elem){
	assert(stack); // if there is no stack, then the program stop here
	if ((stack->top - stack->base) > stack->size){
		printf("size:%d\n", stack->size);
		printf("top:%d\n", stack->top);
		printf("base:%d\n", stack->base);
		printf("len:%d\n", stack->top - stack->base)
	}
}


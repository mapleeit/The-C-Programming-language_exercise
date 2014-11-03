/*
 * title : main.c
 */

#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

#define quoteMax 100
#define parenthesesMax 100
#define comMax 100
// judge whether this in the Quote or not
int isInQuote(char);
// judge whether this in the Comment or not
int isInCom(char);
// put this to the cache
void ungetch(char);
// get the this from the cache or the console
char getch();
// init the buffer space for getch() and ungetch()
char cache;
// define the stack of quote
Stack quoteStack;
Stack comStack;
// main()
int main(){
	char c, n;
	// init the stack
	Stack myStack;
	Initialize_S(&myStack, parenthesesMax);
	// init ends
	// init the stack of quote and the stack of comment
	Initialize_S(&quoteStack, quoteMax);
	Initialize_S(&comStack, comMax);

	//printf("%c", getch());
	while ((c = getch()) != '`'){
		if (!isInQuote(c) && !isInCom(c)){
			printf("%c", c);
		}else{
			printf(" ");
		}
	}
	
	system("pause");
}

int isInQuote(char c){
	char *temp;
	temp = (char*)malloc(sizeof(char));
	if (c == '\'' || c == '\"'){
		if (IsEmpty_S(&quoteStack)){
			Push_S(&quoteStack, c);
		}else{
			Pop_S(&quoteStack, temp);
			if (*temp == c){
				return IsEmpty_S(&quoteStack);
			}else{
				Push_S(&quoteStack, *temp);
				Push_S(&quoteStack, c);
				return 1;
			}
		}
	}else{
		return !IsEmpty_S(&quoteStack);
	}
}
int isInCom(char c){
	char nextC;
	char *temp;
	temp = (char*)malloc(sizeof(char));
	if (c == '/'){
		Push_S(&comStack, c);
		if((nextC = getch()) == '*')
			Push_S(&comStack, nextC);
		else{
			Pop_S(&comStack, temp);
			ungetch(nextC);
		}
		return !IsEmpty_S(&comStack);
	}else if(c == '*' && !IsEmpty_S(&comStack) && (nextC = getch()) == '/' ){
		Pop_S(&comStack, temp);
		if(*temp == c){
			Pop_S(&comStack, temp);
			if (*temp == nextC)
				return IsEmpty_S(&comStack);
		}else{
			Push_S(&comStack, *temp);
			ungetch(nextC);
			return 1;
		}
	}else {
		return !IsEmpty_S(&comStack);
	}
}
void ungetch(char c){
	cache = c;
}

char getch(){
	char result;
	result = cache ? cache : getchar();
	cache = '\0';
	return result;
}
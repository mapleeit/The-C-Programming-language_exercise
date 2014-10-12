//不能保证程序能够智能地处理输入航很长以及在制定的列钱没有空格或制表符的情况...
#include <stdio.h>
#include <process.h>

#define MAXLINE 20//n
#define MAX 1000//the longest input without the space bar and '\t'

int main(){
	char tempString[MAX] = {0};
	int c, pos, preSpace, lastSpace;
	int i, j;
	pos = 0;
	preSpace = lastSpace = 0;
	while ((c = getchar())!= ';'){
		if (c != ' ' && c != '\t'){
			tempString[pos - lastSpace] = c;
			pos++;
		}else if (c == ' ' || c == '\t'){
			pos++;
			preSpace = lastSpace;
			lastSpace = pos;
			if (pos < MAXLINE){
				for ( i =0; i < lastSpace - preSpace - 1; i++){
					putchar(tempString[i]);
				}
				putchar(' ');// '\t' will be transfered to space bar
			}else {
				putchar('\n');
				for ( i =0; i < lastSpace - preSpace - 1; i++){
					putchar(tempString[i]);
				}
				putchar(' ');// '\t' will be transfered to space bar
				preSpace = lastSpace = pos = (lastSpace - preSpace);
			}
			
		}
	}
	if (preSpace != lastSpace && pos < MAXLINE){
		for ( i =0; i < pos - lastSpace; i++){
			putchar(tempString[i]);
		}
	}else {
		putchar('\n');
		for ( i =0; i < pos - lastSpace; i++){
			putchar(tempString[i]);
		}
	}
	putchar('\n');
	system("pause");
	return 0;
}
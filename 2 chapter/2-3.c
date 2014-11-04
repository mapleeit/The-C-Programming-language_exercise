/*transfer from a string of Hex values to the int value
* time : 2014-11-04
*/

#include <stdio.h>
#include <process.h>

void printString(char *);
int toLower(char *);
int htoi(char *, int);
int power(int, int);

int main(){
	int len;
	char s[10] = "0x1Ad32"; // 0x1ad32
	printf("length:%d\n", len = toLower(s));
	printString(s);
	printf("%d\n", htoi(s, len));
	system("pause");
	return 0;
}
void printString(char *s){
	int i;
	for (i = 0; s[i] != '\0'; i++){
		printf("%c", s[i]);
	}
	printf("\n");
}
// transfer all the character to the lower character
// return the length
int toLower(char *s){
	int i;
	for (i = 0; s[i] != '\0'; i++){
		if ( 64 < s[i] && s[i] < 90 )
			s[i] += 32;
	}
	return i;
}
// transfer this 0x...(16 string) to the int
int htoi(char *s, int len){
	int sum = 0;
	int i = len - 1;
	for (; i > 1; i--){
		if ( '1' <= s[i] && s[i] <= '9')
			sum += (s[i] - 48) * power(16, len - i);
		else if ('a' <= s[i] && s[i] <= 'z'){
			sum += (s[i] - 87) * power(16, len - i);
		}
	}
	return sum;
}

int power(int base, int times){
	int i = 0;
	int result = 1;
	for (; i < times; i++){
		result *= base;
	}
	return result;
}
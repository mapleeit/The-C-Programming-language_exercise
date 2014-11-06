/* Question: 
*  delete each char in s2 which is in s1
*/
#include <stdio.h>
#include <process.h>

#define BUFFERSIZE 10

void squeeze(char *, char *);

char s[BUFFERSIZE];

int main(){
	int i = 0;
	char s1[] = "squeesfmdkeessssees12"; 
	char s2[] = "ees";
	squeeze(s1, s2);
	while(s1[i] != '\0')
		putchar(s1[i++]);
	printf("\n");
 	system("pause");
	return 0;
}
void squeeze(char s1[], char s2[]){ // expected result is "qufmdk123"
	int i, j, k;
	for (i = k =0; s1[i] != '\0'; i++){
		for ( j = 0; s2[j] != '\0' && s2[j] != s1[i]; j++)
			;
		if (s2[j] == '\0'){
			s1[k++] = s1[i];
		}
		s1[k] = '\0';
	}
}
/*
* 好吧，我一开始把题目看错了，以为是要匹配字符串...
* 下面的函数是用来匹配字符串的
* expected result is "squfmdksss123"
*/
//void squeeze( char *s1, char *s2 ){
//	int i, j, k, offset = 0;
//	for ( i = 0; s1[i] != '\0'; i++ ){
//		s1[i] = s1[i + offset];
//		if ( s1[i] != s2[0] )
//			;
//		else{
//			for ( j = 0; s1[i+offset+j] != '\0' && s2[j] != '\0'; j++ ){
//				if ( s1[ i + offset + j ] != s2[ j ] )
//					break;
//			}
//			if (s2[j] == '\0'){
//				offset += j;
//				for (k = 0;k < j;k++){
//					s1[i + k] = '*';
//				}
//				i--;
//				j = 0;
//			}
//		}
//	}
//}
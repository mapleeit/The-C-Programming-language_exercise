//#include <stdio.h>
//#include <process.h>
//
//#define MAXLINE 1000
//
//int getline(char line[], int maxline);
//int isEmptyLine(char line[], int len);
//int deleteUseless(char line[], int len);
//
//int main(){
//	int len;
//	char line[MAXLINE];
//	while((len = getline(line, MAXLINE)) > 0 ){
//		if (isEmptyLine(line, len) == 0){
//			if ((len = deleteUseless(line, len))>1){
//				printf("delete successful!\n");
//			}else{
//				printf("no useless chars to be deleted\n");
//			}
//			printf("%d(include the enter key),%s", len,line);
//		}
//	}
//}
//
//int getline(char s[], int lim){
//	int c;
//	int i;
//	i = 0;
//	while ((i< lim -1) && (c = getchar()) !='\n' && c != ';'){
//		s[i] = c;
//		i++;
//	}
//	if (c == '\n'){
//		s[i] = '\n';
//		i++;
//	}
//	s[i] = '\0';
//	return i;
//}
//
//int isEmptyLine(char s[], int len){
//	int i;
//	int flag;
//	flag = 1;
//	for (i = 0; i< len; i++){
//		if (s[i] != ' ')
//			flag = 0;
//	}
//	return flag;
//}
//
//int deleteUseless(char *s, int len){
//	int i;
//	int flag;
//	int temp;
//	flag = 0;
//	for (i = 0; i< len; i++){
//		if (s[i] == ' ' || s[i] == '\t'){
//			flag ++;
//		}else if(s[i] != ' ' && s[i] != '\0' && s[i] != '\n'){
//			flag = 0;
//		}else if(s[i] == '\n'){
//			if(flag > 0){
//				s[len - 1 - flag] = '\0'; 
//				temp = len - flag;
//			}else
//				temp = 1;
//		}
//	}
//	printf("delete %d useless chars!!\n", flag);
//	return temp;
//}
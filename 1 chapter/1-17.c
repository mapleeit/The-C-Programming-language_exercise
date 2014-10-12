//#include <stdio.h>
//#include <process.h>
//
//#define MAXLINE 1000
//
//int getline(char line[], int len);
//
//int main(){
//	int len;
//	char line[MAXLINE];
//	while((len = getline(line, MAXLINE)) > 0){
//		if (len > 80)
//			printf("%d, %s", len, line);
//		else
//			printf("FALL SHORT OF 80!!!!\n");
//	}
//	system("pause");
//	return 0;
//}
//
//int getline(char s[], int lim){
//	int i;
//	char c;
//	for (i = 0; (i < lim -1) && (c = getchar()) != ';' && c != '\n'; i++){
//		s[i] = c;
//	}
//	if (c == '\n'){
//		s[i] = c;
//		i++;
//	}
//	s[i] = '\0';
//	return i;
//}
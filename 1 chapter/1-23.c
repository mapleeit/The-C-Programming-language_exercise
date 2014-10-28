// 去除C程序中的注释“/* ... */”，此程序不包含“//”
//#include <stdio.h>
//#include <string.h>
//#include <process.h>
//
//#define BUFSIZE 100
//
//int isInQuota(char c);
//int isInCom(char c);
//char getch();
//void ungetch(char c);
//
//int quotaFlag = 0;
//int comFlag = 0;
//char s[BUFSIZE];
//
//int main(){
//	char c;
//	s[0] = '\0';
//	printf("%s",s);
//	while((c = getch()) != '`'){
//		if(isInQuota(c)){			/* 在引号内的话 */
//			putchar(c);
//		}else{						/* 在引号外的话 */
//			if (isInCom(c) == 1){
//
//			}else if (isInCom(c) == 2){
//				c =getch();
//			}else
//				putchar(c);
//		}
//	}
//	system("pause");
//}
//
//int isInQuota(char c){
//	if (c == '"' || c == '\''){
//		quotaFlag ++;
//		
//	}
//	if (quotaFlag % 2 == 0)
//		return 0;
//	else
//		return 1;
//}
//
//int isInCom(char c){
//	if (c == '/'){
//		char d = getch();
//		if (d == '*')
//			comFlag ++;
//		else
//			ungetch(d);
//	}
//	if (c == '*'){
//		char d = getch();
//		if (d =='/'){
//			comFlag ++;
//		}else{
//			ungetch(d);
//		}
//	}
//	if (comFlag == 0)
//		return 0;
//	if (comFlag % 2 == 0 && comFlag > 0)
//		return 2;
//	else
//		return 1;
//}
//
//char getch(){
//	int i =0;
//	if (s[0] != '\0'){
//		char result = s[0];
//		while(s[i] != '\0'){
//			s[i] = s[i+1];
//			i++;
//		}
//		return result;
//	}
//	else
//		return getchar();
//}
//
//void ungetch(char c){
//	int i = 0;
//	while (s[i] != '\0'){
//		i++;
//	}
//	s[i] = c;
//	s[i+1] = '\0';
//}
//#include <stdio.h>
//#include <process.h>
//
//#define MAXCHAR 100
//
//void reverse(char s[],char s2[], int len, int step);
//int main(){
//	char s[MAXCHAR];
//	char s2[MAXCHAR];
//	int c;
//	int i;
//	int j;
//	int step;
//	i = 0;
//	
//	while ((c = getchar())!= '\n' && c!= ';'){
//		s[i] = c;
//		i++;
//	}
//	scanf("%d", &step);
//	reverse(s,s2, i, step);
//	for (j = 0; j <= i; j++){
//		printf("%c", s2[j]);
//	}
//	system("pause");
//	return 0;
//	
//}
//
//void reverse(char *s,char *s2, int len, int step){
//	int i;
//	for(i = 0; i < len && i < step;i++){
//		s2[i] = s[len - 1 -i];
//	}
//	for (i = step; i < len; i++){
//		s2[i] = s[i-step];
//	}
//}
//#include <stdio.h>
//#include <process.h>
//
//#define TABINC 12 //tab increment size
//
//int main(){
//	int c, nb, pos;//position of character in line
//	pos = 1;
//	while ((c = getchar()) != ';'){
//		if (c == '\t'){
//			nb = TABINC - (pos - 1) % TABINC;
//			while (nb > 0){
//				putchar(' ');
//				pos++;
//				--nb;
//			}
//		}else if (c == '\n'){
//			putchar(c);
//			pos = 1;
//		}else{
//			putchar(c);
//			pos++;
//		}
//	}
//	system("pause");
//	return 0;
//}
//#include <stdio.h>
//#include <process.h>
//
//#define TABINC 8
//#define INBLANK 1
//#define OUTBLANK 0
//
//int main(){
//	int c, nb, nt, sumt,sumb,temp, pos, flag;
//	pos = 0;
//	nb = 0;
//	nt = 0;
//	sumt = 0;
//	sumb = 0;
//	flag = OUTBLANK;
//	while((c= getchar())!= ';'){
//		if (c == ' '){
//			++pos;
//			nb++;
//			flag = INBLANK;
//		}else if (c != ' '){
//			++pos;
//			if ((pos - nb - 1) % TABINC != 0 && flag){//need to add \t
//				putchar('\t');
//				nb = nb - (TABINC - (pos - nb - 1) % TABINC);
//				sumt ++;
//			}
//			if(nb > TABINC && flag){
//				nt = nb / TABINC;
//				nb = nb % TABINC;
//				while (nt > 0){
//					putchar('\t');
//					nt--;
//					sumt ++;
//				}
//				while (nb > 0){
//					putchar(' ');
//					nb--;
//					sumb ++;
//				}
//			}else if (nb < TABINC && flag){
//				while (nb > 0){
//					putchar(' ');
//					nb--;
//					sumb ++;
//				}
//			}
//			putchar(c);
//			flag = OUTBLANK;
//		}
//		
//	}
//	printf("sumt:%d, sumb:%d\n",sumt, sumb);
//	system("pause");
//	return 0;
//}

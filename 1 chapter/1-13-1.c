//#include <stdio.h>
//void main(){
//	int length[20] = {0};//the number of words whose lengths are the percific length.
//	int i, j, c, temp;
//	temp = 0;
//	while ((c = getchar()) != ';'){
//		if (c > 47){//in ASCII, >47 represent 0-9 and a-z, A-Z
//			temp++;
//		}else{
//			if (temp != 0){
//				length[temp-1]++;
//				temp = 0;
//			}else
//				continue;
//		}
//		
//	}
//	for (i = 0;i<20;i++){
//		printf("%d\t:",i+1);
//		for (j = 0; j < length[i]; j++){
//			printf("*");
//		}
//		printf("\n");
//	}
//	system("pause");
//}

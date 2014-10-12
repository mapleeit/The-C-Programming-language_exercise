//#include <stdio.h>
//#include <stdlib.h>
//
//#define MAXLENGTH 20//how many chars the longest word may have
//
//void main(){
//	int length[MAXLENGTH] = {0};//the number of words whose lengths are the percific length.
//	int **a, i, j, c, temp, maxRow;
//	temp = 0;
//	maxRow = 0;
//	while ((c = getchar()) != ';'){
//		if ((c > 47 && c < 58)||(c>64 && c<91)||(c>96 && c<123)){//in ASCII, represent 0-9 and a-z, A-Z
//			temp++;
//		}else{
//			if (temp != 0){
//				length[temp-1]++;
//				temp = 0;
//			}else
//				continue;
//		}		
//	}
//	for (i = 0; i < MAXLENGTH; i ++ ){
//		if (maxRow < length[i]){
//			maxRow = length[i];
//		}
//	}
//	//dynamic allocate 2D array
//	a = (int**)malloc(maxRow*sizeof(int*));
//	if (a == NULL){
//		printf("first allocation failed!\n");
//	}else {
//		printf("first allocation success!\n");
//	}
//	for (i = 0; i< maxRow; i++){
//		a[i] = (int*)malloc(MAXLENGTH*sizeof(int));
//		if (a[i] == NULL){
//			printf("second allocation failed!\n");
//		}else {
//			printf("second allocation success!\n");
//		}
//		//init this 2D array
//		for (j = 0; j < MAXLENGTH; j++){
//			a[i][j] = 0;
//		}
//	}
//	//operate the array
//	for (j = 0;j < MAXLENGTH; j++){
//		for (i = length[j]; i > 0; i--){
//			a[i-1][j] = 1;
//		}
//	}
//	for (i = 1; i <= MAXLENGTH; i++){
//		if(i < 10 ){
//			printf("%d  ",i);
//		}else{
//			printf("%d ",i);
//		}
//	}
//	printf("\n");
//	for (i = 0; i < maxRow;i ++){
//		for (j = 0; j< MAXLENGTH; j++){
//			if(a[i][j] == 0){
//				printf("   ");
//			}else{
//				printf("*  ");
//			}
//				
//		}
//		printf("\n");
//	}
//	system("pause");
//}

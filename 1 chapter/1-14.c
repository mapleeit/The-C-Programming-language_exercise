////calculate how many times every char showed up
//#include <stdio.h>
//
//#define CHARNUMBER 62//26+26+10
//void main(){
//	int c, i, j;
//	int arr[CHARNUMBER] = {0};
//	while ((c = getchar()) != ';'){
//		if (c > 47 && c <58){
//			arr[c - 48]++;//arr[9]
//		}else if(c > 64 && c <91){
//			arr[c - 55]++;//arr[35]
//		}else if(c > 96 && c <123){
//			arr[c - 61]++;//arr[61]
//		}
//	}
//	for (i = 0; i < CHARNUMBER; i++){
//		if (i<10){
//			printf("%d\t:", i);
//		}else if (i> 9 && i < 36){
//			printf("%c\t:", i + 55);
//		}else{
//			printf("%c\t:", i + 61);
//		}
//		for(j = 0;j < arr[i];j ++){
//			printf("*");
//		}
//		printf("\n");
//	}
//	system("pause");
//}
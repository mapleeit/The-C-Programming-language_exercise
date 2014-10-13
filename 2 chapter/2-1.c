#include <stdio.h>
#include <limits.h>
//用打印标准头文件中的相应值实现
//int main(){
//	printf("signed char min = %d\n", SCHAR_MIN);
//	system("pause");
//	return 0;
//}
//结果为-128


//用计算的方法实现
int main(){
	printf("signed char min = %d\n", (unsigned char)~0);
	system("pause");
	return 0;
}
//结果是-127
#include <stdio.h>
#include <process.h>

unsigned invert(unsigned, int, int);

int main(){

	printf("%d\n",invert(051, 3, 2)); // 期望输出37D
	
	system("pause");
	return 0;
}

unsigned invert(unsigned x, int p, int n){
	unsigned offset_right_n, middle_n, invert_middle_n, cache, m;

	cache = x & ~(~0 << (p - n +1)); // 保留最右面的p - n + 1位原始数据 
	offset_right_n = x >> (p - n + 1); // 把x右移p - n + 1位后
	middle_n = offset_right_n & ~(~0 << n); // 取出来x的中部需要按位取反的部分
	invert_middle_n  = middle_n ^ (~(~0 << (p - n +1))); // 把需要按位取反的部分取反
	m = x >> (p + 1) << (p + 1); // 把x的前p + 1位清零
	m = m | (invert_middle_n << (p - n + 1)) | cache; // 得到最后的结果
	return m;
}
#include <stdio.h>
#include <process.h>

unsigned setbits(unsigned t, int p,int n,unsigned y);

int main(){

	//printf("%d\n",getbits(0177700,6,4));
	printf("%d\n", setbits(025, 3, 2, 02));
	system("pause");
	return 0;
}

unsigned setbits(unsigned t, int p, int n,unsigned y){
	static int right_x_temp, right_y_temp;
	int temp;
	right_x_temp = getbits(t, p, n);
	right_y_temp = getbits(t, n, n);
	t = t >> (p + 1 - n);
	t = t & (~0 << n);
	t = t | right_y_temp;
	t = t << (p + 1 -n);
	t = t | right_x_temp;
	return t;
}

unsigned getbits(unsigned x, int p, int n){
	return (x >> (p + 1 - n)) & ~(~0 << n);
}
#include <stdio.h>
#include <process.h>

unsigned invert(unsigned, int, int);

int main(){

	printf("%d\n",invert(051, 3, 2)); // �������37D
	
	system("pause");
	return 0;
}

unsigned invert(unsigned x, int p, int n){
	unsigned offset_right_n, middle_n, invert_middle_n, cache, m;

	cache = x & ~(~0 << (p - n +1)); // �����������p - n + 1λԭʼ���� 
	offset_right_n = x >> (p - n + 1); // ��x����p - n + 1λ��
	middle_n = offset_right_n & ~(~0 << n); // ȡ����x���в���Ҫ��λȡ���Ĳ���
	invert_middle_n  = middle_n ^ (~(~0 << (p - n +1))); // ����Ҫ��λȡ���Ĳ���ȡ��
	m = x >> (p + 1) << (p + 1); // ��x��ǰp + 1λ����
	m = m | (invert_middle_n << (p - n + 1)) | cache; // �õ����Ľ��
	return m;
}
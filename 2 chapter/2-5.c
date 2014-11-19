#include <stdio.h>
#include <process.h>

#define MAX 2000;

int any(char *,char *);

int main(){
	char s1[] = "hello,world!";
	char s2[] = "wo";
	int result;
	result = any(s1, s2);
	printf("%d\n", result);
	system("pause");
}

int any(char *s1, char *s2){
	int i = 0;
	int j = 0;
	int temp = MAX;
	while(s1[i]){
		while(s2[j]){
			if (s1[i] == s2[j]){
				temp = (temp > i) ? i : temp; 
				break;
			}
			j++;
		}
		j = 0;
		i++;
	}
	return temp;
}
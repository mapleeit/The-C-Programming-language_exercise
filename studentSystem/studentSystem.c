/*
* title : student system
* function : 
*	���������ʽ��ʾѧ���ɼ�
*	���Բ���һ��ѧ���ĳɼ�
*	����ɾ��һ��ѧ���ĳɼ�
*	�����޸�һ��ѧ���ĳɼ�
*	���Խ�ѧ���ĳɼ�ȫ����ӡ����
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LEN sizeof(Student)

typedef struct Student{
	char num[10], name[20];
	float English_score,AMaths_score,Philosophy_score,Computer_score,Electron_score ,sum;
	struct Student* next;
}Student;


void inputInfo(Student *);
void Insert(Student *);
void Delete(Student *);
void Alter(Student *);
void Output(Student*);
Student *Search(char *, Student *);
int choose(Student*);

void inputInfo(Student *p){
	printf("������ѧ����ѧ��\n"); scanf("%s",&p->num);
	printf("������ѧ��������\n"); scanf("%s",&p->name);
	printf("������ѧ����Ӣ��ɼ�\n"); scanf("%f",&p->English_score);
	printf("������ѧ���ĸ����ɼ�\n"); scanf("%f",&p->AMaths_score);
	printf("������ѧ�������ܳɼ�\n"); scanf("%f",&p->Philosophy_score);
	printf("������ѧ���ļ�����ɼ�\n"); scanf("%f",&p->Computer_score);
	printf("������ѧ���ĵ��Ӽ����ɼ�\n"); scanf("%f",&p->Electron_score);//����ѧ��������ѧ�ŷ�����Ϣ
	p->sum = p->AMaths_score + p->Computer_score + p->Electron_score + p->English_score + p->Philosophy_score;//����ѧ����Ƴɼ����ܷ���
	p->next = NULL;
}

void Insert(Student *head){
	Student *temp;
	Student *insertInfo;
	insertInfo = (Student*)malloc(LEN);
	temp = head;
	while (temp->next != NULL){
		temp = temp->next;
	}
	inputInfo(insertInfo);
	temp->next = insertInfo;
	printf("insert successfully!!\n");
}
void Delete(Student *head){
	Student *result;
	char *num;
	num = (char*)malloc(10*sizeof(char));
	printf("����������Ҫɾ����ѧ����ѧ��\n");
	scanf("%s", num);
	result = Search(num, head);
	/*printf("%s", result->next->name);*/
	result->next = result->next->next;
	printf("delete successfully!\n");
}
void Alter(Student *head){
	Student *result;
	Student *insertInfo;
	char *num;
	insertInfo = (Student*)malloc(LEN);
	num = (char*)malloc(10*sizeof(char));
	printf("����������Ҫ�޸ĵ�ѧ����ѧ��\n");
	scanf("%s", num);
	result = Search(num, head);
	inputInfo(insertInfo);
	insertInfo->next = result->next->next;
	result->next = insertInfo;
	printf("alter successfully!\n");
}
void Output(Student* head){
	Student *temp;
	temp = head;
	while (temp->next != NULL){
		temp = temp->next;
		printf("ѧ����ѧ�ţ�%s\nѧ����������%s\nӢ��ɼ���%4.1f\n�����ɼ���%4.1f\n���ܳɼ���%4.1f\n������ɼ���%4.1f\n���Ӽ����ɼ���%4.1f\n�ܷ֣�%.1f\n*************\n",temp->num,temp->name,temp->English_score,temp->AMaths_score,temp->Philosophy_score,temp->Computer_score,temp->Electron_score,temp->sum);
	}
	printf("output finshed!\n");
}

Student *Search(char *m, Student *head){
	Student *temp;
	temp = head;
	while(temp->next != NULL){
		if(strcmp(temp->next->num,m) == 0){
			return temp;
		}
		temp = temp->next;
	}
	return NULL;
}

int choose(Student* p){
	int i;
	printf("��ѡ����Ҫ���еĲ���:1.����ѧ���ɼ�,2.ɾ��ѧ���ɼ�,3.�޸�ѧ���ɼ�,4.��ӡѧ���ɼ�,5.�˳�\n");
	scanf("%d",&i);
	switch(i)
	{ 
		case 1: Insert(p);choose(p);break;
		case 2: Delete(p);choose(p);break;
 		case 3: Alter(p);choose(p);break;
		case 4: Output(p);choose(p);break;
		case 5: break;
	}
}

int main(){
	Student* head;
	head = (Student*)malloc(LEN);
	head->next = NULL;
	choose(head);
	free(head);
	system("pause");
	return 0;
}
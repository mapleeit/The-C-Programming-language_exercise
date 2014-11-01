/*
* title : student system
* function : 
*	以链表的形式表示学生成绩
*	可以插入一个学生的成绩
*	可以删除一个学生的成绩
*	可以修改一个学生的成绩
*	可以讲学生的成绩全部打印出来
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
	printf("请输入学生的学号\n"); scanf("%s",&p->num);
	printf("请输入学生的姓名\n"); scanf("%s",&p->name);
	printf("请输入学生的英语成绩\n"); scanf("%f",&p->English_score);
	printf("请输入学生的高数成绩\n"); scanf("%f",&p->AMaths_score);
	printf("请输入学生的马哲成绩\n"); scanf("%f",&p->Philosophy_score);
	printf("请输入学生的计算机成绩\n"); scanf("%f",&p->Computer_score);
	printf("请输入学生的电子技术成绩\n"); scanf("%f",&p->Electron_score);//输入学生的姓名学号分数信息
	p->sum = p->AMaths_score + p->Computer_score + p->Electron_score + p->English_score + p->Philosophy_score;//计算学生五科成绩的总分数
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
	printf("请输入你想要删除的学生的学号\n");
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
	printf("请输入你想要修改的学生的学号\n");
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
		printf("学生的学号：%s\n学生的姓名：%s\n英语成绩：%4.1f\n高数成绩：%4.1f\n马哲成绩：%4.1f\n计算机成绩：%4.1f\n电子技术成绩：%4.1f\n总分：%.1f\n*************\n",temp->num,temp->name,temp->English_score,temp->AMaths_score,temp->Philosophy_score,temp->Computer_score,temp->Electron_score,temp->sum);
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
	printf("请选择你要进行的操作:1.插入学生成绩,2.删除学生成绩,3.修改学生成绩,4.打印学生成绩,5.退出\n");
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
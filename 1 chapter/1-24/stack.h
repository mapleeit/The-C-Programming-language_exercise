/*	stack.h -- ջͷ�ļ�	*/

#define EMPTY_TOP (-1)

/*	�������Ͷ���	*/

typedef char Stack_Item ;
typedef struct stack
{
	Stack_Item * array ;
	int capacity ;
	int top ;
} * Stack ;

/*	�ӿں�������	*/

/*	����:	��������ʼ��һ��ջ	*/
/*	����ǰ:	pstack ָ��һ��ջ, capacity ��ָʾջ��С�ı���	*/
/*	������:	��� capacity �ǺϷ���ȡֵ��Χ && �ڴ����ɹ�, ��ջ������, ������ʼ��Ϊ��, ���� 1; ���򷵻� 0	*/
/*	ʱ�临�Ӷ�:	O (1)	*/
int Initialize_S (Stack * const pstack, const int capacity) ;

/*	����:	ȷ��ջ�Ƿ�Ϊ��	*/
/*	����ǰ:	pstack ָ��һ���ѳ�ʼ����ջ	*/
/*	������:	�����ջΪ��, ���� 1; ���򷵻� 0	*/
/*	ʱ�临�Ӷ�: O (1)	*/
int IsEmpty_S (const Stack * const pstack) ;

/*	����:	ȷ��ջ�Ƿ�����	*/
/*	����ǰ:	pstack ָ��һ���ѳ�ʼ����ջ	*/
/*	������:	�����ջ����, ���� 1; ���򷵻� 0	*/
/*	ʱ�临�Ӷ�:	O (1)	*/
int IsFull_S (const Stack * const pstack) ;

/*	����:	��ջ�����һ��Ԫ��	*/
/*	����ǰ:	pstack ָ��һ���ѳ�ʼ����ջ, si1�Ǵ���ӵ�����	*/
/*	������:	���ջδ��, ��ջ�������һ������, ���� 1; ���򷵻� 0	*/
/*	ʱ�临�Ӷ�:	O (1)	*/
int Push_S (const Stack * const pstack, const Stack_Item st1) ;

/*	����:	��ջ�е���һ��Ԫ��	*/
/*	����ǰ:	pstack ָ��һ���ѳ�ʼ����ջ, pst1 ��ָ���������ݵ�ָ��	*/
/*	������:	�����ջ��Ϊ��, ��ջ������һ��Ԫ��,���� 1; ���򷵻� 0	*/
/*	ʱ�临�Ӷ�:	O (1)	*/
int Pop_S (const Stack * const pstack, Stack_Item * const pst1) ;

/*	����:	�ͷ�һ��ջ��ռ�õ��ڴ�ռ�	*/
/*	����ǰ:	pstack ָ��һ���ѳ�ʼ����ջ	*/
/*	������:	��ջռ�õ��ڴ�ռ䱻�ͷ�	*/
/*	ʱ�临�Ӷ�:	O (1)	*/
void Release_S (const Stack * const pstack) ;
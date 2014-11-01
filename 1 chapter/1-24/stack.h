/*	stack.h -- 栈头文件	*/

#define EMPTY_TOP (-1)

/*	数据类型定义	*/

typedef int Stack_Item ;
typedef struct stack
{
	Stack_Item * array ;
	int capacity ;
	int top ;
} * Stack ;

/*	接口函数声明	*/

/*	操作:	创建并初始化一个栈	*/
/*	操作前:	pstack 指向一个栈, capacity 是指示栈大小的变量	*/
/*	操作后:	如果 capacity 是合法的取值范围 && 内存分配成功, 该栈被创建, 并被初始化为空, 返回 1; 否则返回 0	*/
/*	时间复杂度:	O (1)	*/
int Initialize_S (Stack * const pstack, const int capacity) ;

/*	操作:	确定栈是否为空	*/
/*	操作前:	pstack 指向一个已初始化的栈	*/
/*	操作后:	如果该栈为空, 返回 1; 否则返回 0	*/
/*	时间复杂度: O (1)	*/
int IsEmpty_S (const Stack * const pstack) ;

/*	操作:	确定栈是否已满	*/
/*	操作前:	pstack 指向一个已初始化的栈	*/
/*	操作后:	如果该栈已满, 返回 1; 否则返回 0	*/
/*	时间复杂度:	O (1)	*/
int IsFull_S (const Stack * const pstack) ;

/*	操作:	向栈中添加两个元素	*/
/*	操作前:	pstack 指向一个已初始化的栈, si1, si2 是待添加的数据	*/
/*	操作后:	如果栈未满, 向栈中添加这两个数据, 返回 1; 否则返回 0	*/
/*	时间复杂度:	O (1)	*/
int Push_S (const Stack * const pstack, const Stack_Item st1, const Stack_Item st2) ;

/*	操作:	从栈中弹出两个元素	*/
/*	操作前:	pstack 指向一个已初始化的栈, pst1, pst2 是指向两个数据的指针	*/
/*	操作后:	如果该栈不为空, 从栈顶弹出两个元素, 保持二者原有相对顺序, 返回 1; 否则返回 0	*/
/*	时间复杂度:	O (1)	*/
int Pop_S (const Stack * const pstack, Stack_Item * const pst1, Stack_Item * const pst2) ;

/*	操作:	释放一个栈所占用的内存空间	*/
/*	操作前:	pstack 指向一个已初始化的栈	*/
/*	操作后:	该栈占用的内存空间被释放	*/
/*	时间复杂度:	O (1)	*/
void Release_S (const Stack * const pstack) ;
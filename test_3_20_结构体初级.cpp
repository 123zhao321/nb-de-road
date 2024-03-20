#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//// 定义结构体
//struct Stu
//{
//	// 结构体的类型
//	char name[20];
//	int age;
//	char id[20];
//	char sex;
//}; // 这里有分号“；”
//// 结构体可以嵌套数组，参数，还有结构体，指针
//int main()
//{
//	// 创建结构体
//	struct Stu s = { "张三",19,"2022984150305",'m'};
//	printf("%s %d %s %c", s.name, s.age, s.id, s.sex);
//	return 0;
//}


//// 定义结构体
//struct Str
//{
//	int x;
//	int y;
//};
//// 结构体传参
//void print1(struct Str t) // 传值调用 -- 传参数
//{
//	printf("%d %d\n", t.x, t.y);
//}
//
//void print2(struct Str* pt) // 传址调用 -- 传地址
//{
//	printf("%d %d\n", pt->x, pt->y);
//}
//
//int main()
//{
//	struct Str s = { 5,6 };
//	print1(s);
//	print2(&s);
//	return 0;
//}

//// 结构体嵌套结构体
//struct st
//{
//	int a;
//	int b;
//};
//struct Str
//{
//	struct st sb;
//	int x;
//	int y;
//};
//int main()
//{
//	struct Str s = { {1,2},3,4 };
//	printf("%d %d %d %d\n", s.sb.a, s.sb.b, s.x, s.y);
//	struct Str* ps = &s;
//	printf("%d %d %d %d\n",ps->sb.a,ps->sb.b,ps->x,ps->y);
//	return 0;
//}
// 传值与传址的区别
// 传值是把整个结构体的所有参数都传过去，然后在栈区重新开辟空间，
// 在栈上生成新的结构体，时间和空间都很浪费，是原结构体的临时拷贝
// 调用方法：新结构体名.变量
// 调用方法：新结构体名.嵌套结构体名.变量 （假如有嵌套结构体）
// 
// 传址只需要结构体的地址，只需要4/8个字节，还支持修改结构体的值
// 调用方法：指针名称->变量
// 调用方法：指针名称->嵌套结构体名.变量 （假如有嵌套结构体）
// 
// 函数传参的时候，参数是需要压栈的。
// 如果传递一个结构体对象的时候，结构体过大，
// 参数压栈的的系统开销比较大，所以会导致性能的下降。
// 
// 结论:结构体传参的时候，要传结构体的地址。

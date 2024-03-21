#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//
// 本文是在vs2022环境下运行及指导
// 
// 推荐书籍：《明解C语言》，《C和指针》，《C陷阱和缺陷》，
//《C语言》-谭浩强（只看语法），《c primer plus》(不推荐)
// 
// 要点：
// *p++表示先获取指针p所指向的值，然后再将指针p的值增加1。
// 
// bug的起源
// bug的本意是臭虫
// 引起计算机或者程序崩溃的原因
// 
// 在debug调试运行下产生的是调试版本的exe程序，体积会很大，是程序员自己用的
// 在release模式运行时是优化版本，体积很小是发给用户的，
// 运行速度快，不可调试，优化的时候会有一定概率出错（测试人员使用的版本）
//
//void add(int x)
//{
//	printf("%d\n", x * x * x);
//}
//int main()
//{
//	int a = 10;
//	add(a);
//	printf("%d\n", a);
//	return 0;
//}
// 
// 在vs中
// F5是仅调试
// ctrl + F5是仅执行
// F9是切换、设置/取消断点（逻辑上的下一个断点）
// F10是逐过程，会一步步运行程序（不进入函数）
// F11是逐语句，更仔细会进入到函数里面一步步运行
// 
// 在适当的位置可以设置断点
// 断点也可以加上条件，比如第几次循环的时候是断点直接， i == 5
// 
// 局部变量放在栈区上面
// 栈区存放的顺序是由高地址到低地址
// 比如，程序是先int i；再int arr[10];
// 在栈上面就是变量i，下面是数组arr
// 
// 如果程序是先创建数组，再创建变量
// 那么上面高地址是数组，低地址是变量
// 
// 又因为数组访问的时候是由低地址到高地址
// 当数组越界的时候会向高地址非法占用
// 如果非法占用的时候正好修改了循环变量，就会死循环/程序崩溃
// 
// 在vc环境中栈区中的数组与变量没有间隙，是紧紧存放的（就是没有分隔的）
// 在gcc中数组与变量会隔一个整型的空间（就是有一个分隔的）
// 在vs中会隔两个整型大小的空间（就是有两个分隔的）
// 
// 
// 常见的coding技巧:
// 1.使用assert      （断言）
// 2.尽量使用const
// 3.养成良好的编码风格
// 4.添加必要的注释
// 5.避免编码的陷阱
// 
// 示例（使用coding技巧）
// 1、strlen()
//
//#include<string.h>
//int main()
//{
//	char arr[] = "hello";
//	int len = strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
// 自定义my_strlen()
//int my_strlen(const char* ch)
//{
//	assert(*ch!=NULL);
//	int count = 0;
//	while (*ch++)
//	{
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "hello";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
// 
// 解读：const char* ch
// const 在*的前面是指*ch指向地址的内容不能改变
// 但是指针*ch可以移动
// 
// 2、strcpy()
// 
//#include<string.h>
//int main()
//{
//	char arr1[20] = "xxxxxxxxxxxxxx";
//	char arr2[] = "hello";
//	printf("%s\n", strcpy(arr1, arr2));
//	return 0;
//}
// 
// 条件：
// strcpy函数的返回值是被修改函数的首元素指针
// 他的参数是两个char*类型的指针
// 
//#include <assert.h>
//char* my_strcpy(char* dest,const char* str)
//{
//	assert(str != NULL);
//	assert(dest != NULL);
//	char* strat = dest;
//	while (*dest++ = *str++);
//	return strat;
//}
//int main()
//{
//	char arr1[20] = "xxxxxxxxxxxxxx";
//	char arr2[] = "hello";
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}
// 
// *p++表示先获取指针p所指向的值，然后再将指针p的值增加1。
// 
// 解读：while (*dest++ = *str++);
// whlie是一个循环没什么好说的
// str是一个地址，指向arr2数组
// *str是arr2数组的首元素
// 同理，*dest是arr1数组的首元素
// 
// 将目标数组赋值到被修改的函数
// 修改后，指针移向下一位
// 依次循环
// 当*str是\0时，*dest被赋值为\0，
// 
// 等号表达式的结果是等号右边的值，
// 所以此时while的括号里面是\0，会被判断为假，循环终止
// 
// const 保护后面的指针指向的内容，防止被修改
// 也是防止使用者将前后的数组写反
// 
// assert()是断言函数，头文件是#include<assert.h>
// 括号里面是断言执行的条件
// 比如，上面就是传过去的指针不是空指针，都是有效的数组才行
// 有断言可以帮助程序员得知哪里出问题了
// 
// 如果断言条件为真，断言就没影响
// 是一层保险
// 
// 这是最终的版本，优化了一些地方
// 1、while语句的的条件已经很简洁了
// 2、有const保护后面的指针内容
// 3、有assert断言提示程序员
// 4、返回值是目的数组首元素的指针，可以将my_strcpy函数与printf函数链式访问
// 
//
//int main()
//{
//	int n = 5;
//	int* p = &n;
//	printf("%d %d\n", n, *p);
//	return 0;
//}
// 
// 解读：int* p = &n;
// p是一个指针变量，此时指向的是n
// *p是解引用，*p就是n，n就是*p
// 或者说，int* p = arr[10];
// p是一个指针变量，是arr的地址，也是arr的首元素地址
// *p是数组arr，*p==arr，也是arr[0]，*p==arr[0]
//
//int main()
//{
//	int n = 5;
//	const int* p = &n;
//	// *p = 10;//error
//	int m = 15;
//	p = &m;
//	printf("%d %d %d\n", n, m,*p);
//	return 0;
//}
// 
// 解读：const int* p = &n；
// const 在*的左边，const保护的是*p，即n不可被修改，但是可以将m的地址给p，虽然指向的内容m还是不能修改
// 
//int main()
//{
//	int n = 5;
//	int* const p = &n;
//	*p = 10;
//	int m = 15;
//	// p = &m; // error
//	printf("%d %d %d\n", n, m, *p);
//	return 0;
//}
// 
// 解读：int* const p = &n；
// const 在*的右边，const保护的是地址p，即p只能指向n，但是可以修改n的值了，将n赋值为10
// 
//int main()
//{
//	int n = 5;
//	const int* const p = &n;
//	// *p = 10; // error
//	int m = 15;
//	// p = &m; // error
//	printf("%d %d %d\n", n, m, *p);
//	return 0;
//}
// 
// 解读：const int* const p = &n;
// 在*的左右都有const保护，那么*p不能改变，p也不能改变，*p始终等于n，p始终指向n
//
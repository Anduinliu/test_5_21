 #define _CRT_SECURE_NO_WARNINGS  1

#include"test_5_21.h"
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//
//	return 0;
//}
// 声明并没有开辟空间
// 
//所有的变量声明的时候，不能设置初始值
// 
// 全局变量可以跨文件访问
// 函数可以跨文件访问
// 
//关键字 static

// 结论1：static修饰全局变量,代表的是该变量只在本文件内被访问
// 不能被外部文件直接访问
//
// 结论2：static修饰函数，该函数只能在本文件内被访问，不能在外部其他文件直接访问
//
// 结论3：static修饰局部变量，更改局部变量的生命周期
// 临时变量 -> 全局变量 - 作用域不变
// 
// 
//static 项目维护,提供安全保证

static void fun()
{
	static int i = 0;
	i++;
	printf("%d\n", i);
}
int main()
{
	for (int i = 0; i < 10; i++)
	{
		fun();
		
	}

	return 0;
}
//1 1 1 1 1 1 1 1 1 1
//i局部变量，局域临时性
//函数调用开辟空间并初始化
//函数结束释放空间 
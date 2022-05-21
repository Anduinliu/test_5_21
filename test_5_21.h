#pragma once
//.h基本都是要被多个源文件包含，可能有一个问题，
//头文件被重复包含的问题
//解决问题方案：#pragma once


//1.c的头文件
//2.所有的变量的声明
//3.所有的函数的声明
//4.#define,类型typedef,struct


//变量声明必须带上extern
//编译器有可能会把int g_bal看成初始化

//函数声明建议带上extern


#include<stdio.h>

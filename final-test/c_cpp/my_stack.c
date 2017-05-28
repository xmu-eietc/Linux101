/*
 * my_stack的实现文件
 * 如果采用C++的实现，那也可以把此文件名改为.cpp
 * 但是记住g++才是编译C++的编译器
 *
 */

#include<stdio.h>

#include "include/my_stack.h"

#define length 10

int num=0,mystack[length];


int  stack_is_full()
{
	if(num==length)
		return 1;
	else 
		return 0;
}

int  stack_is_empty()
{
	if(num==0)
		return 1;
	else 
		return 0;
}

void stack_push(int x)
{
	mystack[num]=x;
	num++;
}


int stack_pop()
{
	num--;
	return mystack[num];
}

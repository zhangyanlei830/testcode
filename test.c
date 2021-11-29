/*===============================================================
*   Copyright (C) 2021 All rights reserved.
*
*   文件名称：test.c
*   创 建 者：今天也要早睡
*   创建日期：2021年11月29日
*   描    述：
*
*   更新日志：
*
================================================================*/
#include <stdio.h>
#include <string.h>

typedef struct zhangyl{
	char name[10];
	int age;
	int money;
}zhangyl, *p_zhangyl;

static void func1()
{
	printf("func1\n");
}

int main(int argc, char *argv[])
{
	//括号
	zhangyl lei;
	strcpy(lei.name, "zhangyanlei");
	return 0;
}

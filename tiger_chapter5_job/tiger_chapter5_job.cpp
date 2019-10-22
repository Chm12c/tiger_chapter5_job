// tiger_chapter5_job.cpp : 定义控制台应用程序的入口点。
#include "stdafx.h"

//////////第1部分. 三种注释方法的说明。注释就是代码不能编译和运行，打开注释后才能。
//尝试打开注释和注释：下面四行看操作后的颜色变化，1种删除和加上//，2种删除/**/和重新加上，3种0改成1，再改成0
//#include <stdio.h>
/* #include <stdio.h> */
#if 0
#include <stdio.h>
#endif
//三种注释方式：一是注释目标行前用//；二是注释目标放到/*与*/之间；三是注释目标放到#if 0与#endif之间。
//打开注释方法：前两种删掉对应的符号即//及/**/, 最后一种0改成1。


/////////////第2部分. 第五章猫工程例题，每个例题都放到#if 0与#endif之间。
////////调试某例题时：改成#if 1即可，调试完后改成#if 0即注释掉该例题。 再调试别的例题，重复同样的操作。

#if 0
//练习题5 - 1： 输入一个正整数 n，输出 1～n 之和。要求自定义函数求 1～n 之和，写出函数定义和调
//用函数。若要计算 m～n（m<n）之和，又该如何定义？

#include <stdio.h>
int main(void)
{
	int n;
	int sum(int n);
	scanf("%d", &n);
	printf("sum = %d\n", sum(n));
	return 0;
}
int sum(int n)
{
	int result, i;
	result = 0;
	for (i = 1; i <= n; i++)
		result = result + i;
	return result;
}
#endif

#if 0
//练习5 - 2： 输入 2 个数，输出其中较大的数。要求定义和调用函数 max(a, b)找出并返回 a、b 中较
大的数。
//这里写你的代码，模仿上面联系5-1及猫工程（第五章）对应例题
#endif

#if 0
//练习5 - 3：
//这里写你的代码，模仿上面联系5-1及猫工程对应例题
#endif
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//4.2 题目2：
//char* GetMemory(void)
//{
//	static char p[] = "hello world";//放在静态区
//	//char p[] = "hello world";//储存在栈空间；出函数就销毁  ---- err
//	return p;//返回栈空间地址
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);//非法访问
//}
//int main()
//{
//	Test();
//	return 0;
//}

//4.3 题目3：
//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);//忘记释放开辟的内存
//	//改进如下
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}

//4.4 题目4：
void Test(void)
{
	char* str = (char*)malloc(100);//str指向malloc开辟的地址
	strcpy(str, "hello");//将hello\0拷贝到str指向的内存中
	printf(str);
	free(str);//开辟的内存释放了
	//改进
	str = NULL;
	//
	if (str != NULL)//str指向已释放的内存地址
	{
		strcpy(str, "world");//非法访问内存
		printf(str);
	}
}
int main()
{
	Test();
	return 0;
}

//
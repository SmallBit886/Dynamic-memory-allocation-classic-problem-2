#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//4.2 ��Ŀ2��
//char* GetMemory(void)
//{
//	static char p[] = "hello world";//���ھ�̬��
//	//char p[] = "hello world";//������ջ�ռ䣻������������  ---- err
//	return p;//����ջ�ռ��ַ
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);//�Ƿ�����
//}
//int main()
//{
//	Test();
//	return 0;
//}

//4.3 ��Ŀ3��
//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);//�����ͷſ��ٵ��ڴ�
//	//�Ľ�����
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}

//4.4 ��Ŀ4��
void Test(void)
{
	char* str = (char*)malloc(100);//strָ��malloc���ٵĵ�ַ
	strcpy(str, "hello");//��hello\0������strָ����ڴ���
	printf(str);
	free(str);//���ٵ��ڴ��ͷ���
	//�Ľ�
	str = NULL;
	//
	if (str != NULL)//strָ�����ͷŵ��ڴ��ַ
	{
		strcpy(str, "world");//�Ƿ������ڴ�
		printf(str);
	}
}
int main()
{
	Test();
	return 0;
}

//
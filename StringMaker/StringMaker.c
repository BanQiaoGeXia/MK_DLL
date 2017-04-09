#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "StringMaker.h"


//匈牙利型转下划线型
char *Hungary2DownLine(const char *src)
{
	// char * hungary_test = "aaa_bbCccDdd";
	if(src == NULL)
	{
		printf("src == NULL\n");
		return NULL;
	}
	int index = 0;
	int length = strlen(src);
	char *dst = (char *)malloc(length * 2);
	memset(dst, 0, length * 2);
	
	for(int i=0; i < length; i++)
	{
		char c = src[i];
		if(c >= 'A' && c <= 'Z')
		{
			dst[index] = '_';
			index ++;
			c += 32;
		}
		dst[index] = c;
		index ++;
	}
	dst[index] = '\0';
	return dst;
}

//匈牙利型转下划线增强型
int Hungary2DownLineX(const char *src, char **dst)
{
	// char * hungary_test = "aaa_bbCccDdd";
	if(src == NULL || dst == NULL)
	{
		printf("src == NULL || dst == NULL\n");
		return -1;
	}
	int index = 0;
	int length = strlen(src);
	char *dstx = *dst;
	
	for(int i=0; i < length; i++)
	{
		char c = src[i];
		if(c >= 'A' && c <= 'Z')
		{
			dstx[index] = '_';
			index ++;
			c += 32;
		}
		dstx[index] = c;
		index ++;
	}
	dstx[index] = '\0';
	return 0;
}

//匈牙利型转驼峰型
char *Hungary2Camelback(const char *src)
{
	// char * hungary_test = "aaa_bbCccDdd";
	if(src == NULL)
	{
		printf("src == NULL\n");
		return NULL;
	}
	int index = 0;
	int length = strlen(src);
	char *dst = (char *)malloc(length * 2);
	memset(dst, 0, length * 2);
	
	for(int i=0; i < length; i++)
	{
		char c = src[i];
		if(c == '_')
		{
			i ++;
			c = src[i] - 32;
		}
		dst[index] = c;
		index ++;
	}
	dst[index] = '\0';
	return dst;
}

//匈牙利型转驼峰增强型
int Hungary2CamelbackX(const char *src, char **dst)
{
	// char * hungary_test = "aaa_bbCccDdd";
	if(src == NULL || dst == NULL)
	{
		printf("src == NULL || dst == NULL\n");
		return -1;
	}
	int index = 0;
	int length = strlen(src);
	char *dstx = *dst;
	
	for(int i=0; i < length; i++)
	{
		char c = src[i];
		if(c == '_')
		{
			i ++;
			c = src[i] - 32;
		}
		dstx[index] = c;
		index ++;
	}
	dstx[index] = '\0';
	return 0;
}

//匈牙利型转帕斯卡型
char *Hungary2Pascal(const char *src)
{
	// char * hungary_test = "aaa_bbCccDdd";
	if(src == NULL)
	{
		printf("src == NULL\n");
		return NULL;
	}
	int index = 0;
	int length = strlen(src);
	char *dst = (char *)malloc(length * 2);
	memset(dst, 0, length * 2);
	
	dst[index] = src[index] - 32;
	index ++;
	for(int i=1; i < length; i++)
	{
		char c = src[i];
		if(c == '_')
		{
			i ++;
			c = src[i] - 32;
		}
		dst[index] = c;
		index ++;
	}
	dst[index] = '\0';
	return dst;
}

//匈牙利型转帕斯卡增强型
int Hungary2PascalX(const char *src, char **dst) 
{
	// char * hungary_test = "aaa_bbCccDdd";
	if(src == NULL || dst == NULL)
	{
		printf("src == NULL || dst == NULL\n");
		return -1;
	}
	int index = 0;
	int length = strlen(src);
	char *dstx = *dst;
	dstx[index] = src[index] - 32;
	index ++;
	for(int i=1; i < length; i++)
	{
		char c = src[i];
		if(c == '_')
		{
			i ++;
			c = src[i] - 32;
		}
		dstx[index] = c;
		index ++;
	}
	dstx[index] = '\0';
	return 0;
}

//下划线型转匈牙利型
char *DownLine2Hungary(const char *src)
{
	// char * hungary_test = "aaa_bbCccDdd";
	if(src == NULL)
	{
		printf("src == NULL\n");
		return NULL;
	}
	int index = 0;
	int tags = 0;
	int length = strlen(src);
	char *dst = (char *)malloc(length * 2);
	memset(dst, 0, length * 2);

	for(int i=0; i < length; i++)
	{
		char c = src[i];
		if(c == '_' && tags == 1)
		{
			i ++;
			c = src[i] - 32;
		}
		else if(c == '_')
		{
			tags = 1;
		}
		dst[index] = c;
		index ++;
	}
	dst[index] = '\0';
	return dst;
}

//下划线型转匈牙利增强型
int DownLine2HungaryX(const char *src, char **dst)
{
	// char * hungary_test = "aaa_bbCccDdd";
	if(src == NULL || dst == NULL)
	{
		printf("src == NULL || dst == NULL\n");
		return -1;
	}
	int index = 0;
	int tags = 0;
	int length = strlen(src);
	char *dstx = *dst;
	for(int i=0; i < length; i++)
	{
		char c = src[i];
		if(c == '_' && tags == 1)
		{
			i ++;
			c = src[i] - 32;
		}
		else if(c == '_')
		{
			tags = 1;
		}
		dstx[index] = c;
		index ++;
	}
	dstx[index] = '\0';
	return 0;
}

// //下划线型转驼峰型
// char *DownLine2Camelback(const char *str)
// {

// }

// //下划线型转驼峰增强型
// int DownLine2CamelbackX(const char *src, char **dst)
// {

// }

// //下划线型转帕斯卡型
// char *DownLine2Pascal(const char *str)
// {

// }

// //下划线型转帕斯卡增强型
// int DownLine2PascalX(const char *src, char **dst)
// {

// }

// //驼峰型转匈牙利型
// char *Camelback2Hungary(const char *str)
// {

// }

// //驼峰型转匈牙利增强型
// int Camelback2HungaryX(const char *src, char **dst)
// {

// }

// //驼峰型转下划线型
// char *Camelback2DownLine(const char *str)
// {

// }

// //驼峰型转下划线增强型
// int Camelback2DownLineX(const char *src, char **dst)
// {

// }

// //驼峰型转帕斯卡型
// char *Camelback2Pascal(const char *str)
// {

// }

// //驼峰型转帕斯卡增强型
// int Camelback2PascalX(const char *src, char **dst)
// {

// }

// //帕斯卡型转匈牙利型
// char *Pascal2Hungary(const char *str)
// {

// }

// //帕斯卡型转匈牙利增强型
// int Pascal2HungaryX(const char *src, char **dst)
// {

// }

// //帕斯卡型转下划线型
// char *Pascal2DownLine(const char *str)
// {

// }

// //帕斯卡型转下划线增强型
// int Pascal2DownLineX(const char *src, char **dst)
// {

// }

// //帕斯卡型转驼峰型
// char *Pascal2Camelback(const char *str)
// {

// }

// //帕斯卡型转驼峰增强型
// int Pascal2CamelbackX(const char *src, char **dst)
// {

// }







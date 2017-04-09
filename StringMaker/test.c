#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "StringMaker.h"

//gcc test.c StringMaker.c

int test1()
{
	char * hungary_test = "aaa_bbCccDdd";
	char * anticipated_test = "aaa_bb_ccc_ddd";
	printf("Input is %s\n", hungary_test);
	char * result = Hungary2DownLine(hungary_test);
	printf("result is %s \n", result);
	if(strcmp(anticipated_test, result) == 0){
		// 缺陷： 函数内部回开辟内存空间  必须在函数外部进行释放
		free(result);
		return 1;
	}	
	else	return 0;
}

int test2()
{
	char * hungary_test = "aaa_bbCccDdd";
	char * anticipated_test = "aaa_bb_ccc_ddd";
	printf("Input is %s\n", hungary_test);
	char * result = (char *)malloc(strlen(hungary_test) * 2);
	memset(result, 0, strlen(hungary_test) * 2);

	Hungary2DownLineX(hungary_test, &result);

	printf("result is %s \n", result);
	if(strcmp(anticipated_test, result) == 0){
		free(result);
		return 1;
	}
	else	return 0;
}

int test3()
{
	char * hungary_test = "aaa_bbCccDdd";
	char * anticipated_test = "aaaBbCccDdd";
	printf("Input is %s\n", hungary_test);
	char * result = Hungary2Camelback(hungary_test);
	printf("result is %s \n", result);
	if(strcmp(anticipated_test, result) == 0){
		// 缺陷： 函数内部回开辟内存空间  必须在函数外部进行释放
		free(result);
		return 1;
	}	
	else	return 0;
}

int test4()
{
	char * hungary_test = "aaa_bbCccDdd";
	char * anticipated_test = "aaaBbCccDdd";
	printf("Input is %s\n", hungary_test);
	char * result = (char *)malloc(strlen(hungary_test) * 2);
	memset(result, 0, strlen(hungary_test) * 2);

	Hungary2CamelbackX(hungary_test, &result);

	printf("result is %s \n", result);
	if(strcmp(anticipated_test, result) == 0){
		free(result);
		return 1;
	}
	else	return 0;
}

int test5()
{
	char * hungary_test = "aaa_bbCccDdd";
	char * anticipated_test = "AaaBbCccDdd";
	printf("Input is %s\n", hungary_test);
	char * result = Hungary2Pascal(hungary_test);
	printf("result is %s \n", result);
	if(strcmp(anticipated_test, result) == 0){
		// 缺陷： 函数内部回开辟内存空间  必须在函数外部进行释放
		free(result);
		return 1;
	}	
	else	return 0;
	return 0;
}

int test6()
{
	char * hungary_test = "aaa_bbCccDdd";
	char * anticipated_test = "AaaBbCccDdd";
	printf("Input is %s\n", hungary_test);
	char * result = (char *)malloc(strlen(hungary_test) * 2);
	memset(result, 0, strlen(hungary_test) * 2);

	Hungary2PascalX(hungary_test, &result);

	printf("result is %s \n", result);
	if(strcmp(anticipated_test, result) == 0){
		free(result);
		return 1;
	}
	else	return 0;
}

// int test7()
// {
// 	return 0;
// }

// int test8()
// {
// 	return 0;
// }

// int test9()
// {
// 	return 0;
// }

int main()
{
	if(test1()) printf("test1 successed\n********************\n\n");
	if(test2()) printf("test2 successed\n********************\n\n");
	if(test3()) printf("test3 successed\n********************\n\n");
	if(test4()) printf("test4 successed\n********************\n\n");
	if(test5()) printf("test5 successed\n********************\n\n");
	if(test6()) printf("test6 successed\n********************\n\n");
	// if(test7()) printf("********************\ntest7 successed\n********************\n");
	// if(test8()) printf("********************\ntest8 successed\n********************\n");
	// if(test9()) printf("********************\ntest9 successed\n********************\n");
	// if(test10()) printf("********************\ntest10 successed\n********************\n");
	// if(test11()) printf("********************\ntest11 successed\n********************\n");
	// if(test12()) printf("********************\ntest12 successed\n********************\n");
	return 0;
}

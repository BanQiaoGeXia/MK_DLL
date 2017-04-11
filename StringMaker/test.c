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

int test7()
{
	char * downline_test = "aaa_bb_ccc_ddd";
	char * anticipated_test = "aaa_bbCccDdd";
	printf("Input is %s\n", downline_test);
	char * result = DownLine2Hungary(downline_test);
	printf("result is %s \n", result);
	if(strcmp(anticipated_test, result) == 0){
		// 缺陷： 函数内部回开辟内存空间  必须在函数外部进行释放
		free(result);
		return 1;
	}	
	else	return 0;
}

int test8()
{
	char * downline_test = "aaa_bb_ccc_ddd";
	char * anticipated_test = "aaa_bbCccDdd";
	printf("Input is %s\n", downline_test);
	char * result = (char *)malloc(strlen(downline_test) * 2);
	memset(result, 0, strlen(downline_test) * 2);

	DownLine2HungaryX(downline_test, &result);

	printf("result is %s \n", result);
	if(strcmp(anticipated_test, result) == 0){
		free(result);
		return 1;
	}
	else	return 0;
}

int test9()
{
	char * downline_test = "aaa_bb_ccc_ddd";
	char * anticipated_test = "aaaBbCccDdd";
	printf("Input is %s\n", downline_test);
	char * result = DownLine2Camelback(downline_test);
	printf("result is %s \n", result);
	if(strcmp(anticipated_test, result) == 0){
		// 缺陷： 函数内部回开辟内存空间  必须在函数外部进行释放
		free(result);
		return 1;
	}	
	else	return 0;
}

int test10()
{
	char * downline_test = "aaa_bb_ccc_ddd";
	char * anticipated_test = "aaaBbCccDdd";
	printf("Input is %s\n", downline_test);
	char * result = (char *)malloc(strlen(downline_test) * 2);
	memset(result, 0, strlen(downline_test) * 2);

	DownLine2CamelbackX(downline_test, &result);

	printf("result is %s \n", result);
	if(strcmp(anticipated_test, result) == 0){
		free(result);
		return 1;
	}
	else	return 0;
}

int test11()
{
	char * downline_test = "aaa_bb_ccc_ddd";
	char * anticipated_test = "AaaBbCccDdd";
	printf("Input is %s\n", downline_test);
	char * result = DownLine2Pascal(downline_test);
	printf("result is %s \n", result);
	if(strcmp(anticipated_test, result) == 0){
		// 缺陷： 函数内部回开辟内存空间  必须在函数外部进行释放
		free(result);
		return 1;
	}	
	else	return 0;
}

int test12()
{
	char * downline_test = "aaa_bb_ccc_ddd";
	char * anticipated_test = "AaaBbCccDdd";
	printf("Input is %s\n", downline_test);
	char * result = (char *)malloc(strlen(downline_test) * 2);
	memset(result, 0, strlen(downline_test) * 2);

	DownLine2PascalX(downline_test, &result);

	printf("result is %s \n", result);
	if(strcmp(anticipated_test, result) == 0){
		free(result);
		return 1;
	}
	else	return 0;
}

int test13()
{
	char * camelback_test = "aaaBbCccDdd";
	char * anticipated_test = "aaa_bbCccDdd";
	printf("Input is %s\n", camelback_test);
	char * result = Camelback2Hungary(camelback_test);
	printf("result is %s \n", result);
	if(strcmp(anticipated_test, result) == 0){
		// 缺陷： 函数内部回开辟内存空间  必须在函数外部进行释放
		free(result);
		return 1;
	}	
	else	return 0;
}

int test14()
{
	char * camelback_test = "aaaBbCccDdd";
	char * anticipated_test = "aaa_bbCccDdd";
	printf("Input is %s\n", camelback_test);
	char * result = (char *)malloc(strlen(camelback_test) * 2);
	memset(result, 0, strlen(camelback_test) * 2);

	Camelback2HungaryX(camelback_test, &result);

	printf("result is %s \n", result);
	if(strcmp(anticipated_test, result) == 0){
		free(result);
		return 1;
	}
	else	return 0;
}

int test15()
{
	char * camelback_test = "aaaBbCccDdd";
	char * anticipated_test = "aaa_bb_ccc_ddd";
	printf("Input is %s\n", camelback_test);
	char * result = Camelback2DownLine(camelback_test);
	printf("result is %s \n", result);
	if(strcmp(anticipated_test, result) == 0){
		// 缺陷： 函数内部回开辟内存空间  必须在函数外部进行释放
		free(result);
		return 1;
	}	
	else	return 0;
}

int test16()
{
	char * camelback_test = "aaaBbCccDdd";
	char * anticipated_test = "aaa_bb_ccc_ddd";
	printf("Input is %s\n", camelback_test);
	char * result = (char *)malloc(strlen(camelback_test) * 2);
	memset(result, 0, strlen(camelback_test) * 2);

	Camelback2DownLineX(camelback_test, &result);

	printf("result is %s \n", result);
	if(strcmp(anticipated_test, result) == 0){
		free(result);
		return 1;
	}
	else	return 0;
}

int test17()
{
	char * camelback_test = "aaaBbCccDdd";
	char * anticipated_test = "AaaBbCccDdd";
	printf("Input is %s\n", camelback_test);
	char * result = Camelback2Pascal(camelback_test);
	printf("result is %s \n", result);
	if(strcmp(anticipated_test, result) == 0){
		// 缺陷： 函数内部回开辟内存空间  必须在函数外部进行释放
		free(result);
		return 1;
	}	
	else	return 0;
}

int test18()
{
	char * camelback_test = "aaaBbCccDdd";
	char * anticipated_test = "AaaBbCccDdd";
	printf("Input is %s\n", camelback_test);
	char * result = (char *)malloc(strlen(camelback_test) * 2);
	memset(result, 0, strlen(camelback_test) * 2);

	Camelback2PascalX(camelback_test, &result);

	printf("result is %s \n", result);
	if(strcmp(anticipated_test, result) == 0){
		free(result);
		return 1;
	}
	else	return 0;
}

int test19()
{
	char * camelback_test = "AaaBbCccDdd";
	char * anticipated_test = "aaa_bbCccDdd";
	printf("Input is %s\n", camelback_test);
	char * result = Pascal2Hungary(camelback_test);
	printf("result is %s \n", result);
	if(strcmp(anticipated_test, result) == 0){
		// 缺陷： 函数内部回开辟内存空间  必须在函数外部进行释放
		free(result);
		return 1;
	}	
	else	return 0;
}

int test20()
{
	char * camelback_test = "AaaBbCccDdd";
	char * anticipated_test = "aaa_bbCccDdd";
	printf("Input is %s\n", camelback_test);
	char * result = (char *)malloc(strlen(camelback_test) * 2);
	memset(result, 0, strlen(camelback_test) * 2);

	Pascal2HungaryX(camelback_test, &result);

	printf("result is %s \n", result);
	if(strcmp(anticipated_test, result) == 0){
		free(result);
		return 1;
	}
	else	return 0;
}

int test21()
{
	char * camelback_test = "AaaBbCccDdd";
	char * anticipated_test = "aaa_bb_ccc_ddd";
	printf("Input is %s\n", camelback_test);
	char * result = Pascal2DownLine(camelback_test);
	printf("result is %s \n", result);
	if(strcmp(anticipated_test, result) == 0){
		// 缺陷： 函数内部回开辟内存空间  必须在函数外部进行释放
		free(result);
		return 1;
	}	
	else	return 0;
}

int test22()
{
	char * camelback_test = "AaaBbCccDdd";
	char * anticipated_test = "aaa_bb_ccc_ddd";
	printf("Input is %s\n", camelback_test);
	char * result = (char *)malloc(strlen(camelback_test) * 2);
	memset(result, 0, strlen(camelback_test) * 2);

	Pascal2DownLineX(camelback_test, &result);

	printf("result is %s \n", result);
	if(strcmp(anticipated_test, result) == 0){
		free(result);
		return 1;
	}
	else	return 0;
}

int test23()
{
	char * camelback_test = "AaaBbCccDdd";
	char * anticipated_test = "aaaBbCccDdd";
	printf("Input is %s\n", camelback_test);
	char * result = Pascal2Camelback(camelback_test);
	printf("result is %s \n", result);
	if(strcmp(anticipated_test, result) == 0){
		// 缺陷： 函数内部回开辟内存空间  必须在函数外部进行释放
		free(result);
		return 1;
	}	
	else	return 0;
}

int test24()
{
	char * camelback_test = "AaaBbCccDdd";
	char * anticipated_test = "aaaBbCccDdd";
	printf("Input is %s\n", camelback_test);
	char * result = (char *)malloc(strlen(camelback_test) * 2);
	memset(result, 0, strlen(camelback_test) * 2);

	Pascal2CamelbackX(camelback_test, &result);

	printf("result is %s \n", result);
	if(strcmp(anticipated_test, result) == 0){
		free(result);
		return 1;
	}
	else	return 0;
}

int main()
{
	if(test1()) printf("test1 successed\n********************\n\n");
	if(test2()) printf("test2 successed\n********************\n\n");
	if(test3()) printf("test3 successed\n********************\n\n");
	if(test4()) printf("test4 successed\n********************\n\n");
	if(test5()) printf("test5 successed\n********************\n\n");
	if(test6()) printf("test6 successed\n********************\n\n");
	if(test7()) printf("test7 successed\n********************\n\n");
	if(test8()) printf("test8 successed\n********************\n\n");
	if(test9()) printf("test9 successed\n********************\n\n");
	if(test10()) printf("test10 successed\n********************\n\n");
	if(test11()) printf("test11 successed\n********************\n\n");
	if(test12()) printf("test12 successed\n********************\n\n");
	if(test13()) printf("test13 successed\n********************\n\n");
	if(test14()) printf("test14 successed\n********************\n\n");
	if(test15()) printf("test15 successed\n********************\n\n");
	if(test16()) printf("test16 successed\n********************\n\n");
	if(test17()) printf("test17 successed\n********************\n\n");
	if(test18()) printf("test18 successed\n********************\n\n");
	if(test19()) printf("test19 successed\n********************\n\n");
	if(test20()) printf("test20 successed\n********************\n\n");
	if(test21()) printf("test21 successed\n********************\n\n");
	if(test22()) printf("test22 successed\n********************\n\n");
	if(test23()) printf("test23 successed\n********************\n\n");
	if(test24()) printf("test24 successed\n********************\n\n");
	return 0;
}

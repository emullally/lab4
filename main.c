#include <stdio.h>
#include <unistd.h>
#include "myCString.h"

int main()
{
	char *inStr = "This is a test string.";
	int strLen = my_strlen(inStr);
	printf("inStr:  %s\n", inStr);
	printf("inStr is %d characters long\n", strLen);
	char *charLoc = my_strchr(inStr, 't');
	if(charLoc != NULL)
	{
		printf("Found a 't' at %s\n", charLoc);
	}
	char *cmpStr = "This is a rest string.";
	char *cmpStr2 = "This is a test string..";
	char *cmpStr3 = "This is a test string.";
	char *tar1 = "test";
	char *tar2 = "paste";
	char *tar3 = "this is a test string string.";
	char *strRet;
	char dest[40];
	int cmpRet = 5;
	printf("cmpStr:  %s\n", cmpStr);
	printf("cmpStr2:  %s\n", cmpStr2);
	printf("cmpStr3:  %s\n", cmpStr3);
	cmpRet = my_strcmp(inStr, cmpStr);
	printf("For cmpStr:  %d\n", cmpRet);
	cmpRet = my_strcmp(inStr, cmpStr2);
	printf("For cmpStr2: %d\n", cmpRet);
	cmpRet = my_strcmp(inStr, cmpStr3);	
	printf("For cmpStr3:  %d\n", cmpRet);
	strRet = my_strstr(inStr, tar1);
	if (strRet != NULL)
	{
		printf("tar1:  %s\n", strRet);
	}
	else
	{
		printf("tar1 failed.\n");
	}
	strRet = my_strstr(inStr, tar2);
	if (strRet != NULL)
	{
		printf("tar2:  %s\n", strRet);
	}
	else
	{
		printf("tar2 failed.\n");
	}
	strRet = my_strstr(inStr, tar3);
	if (strRet != NULL)
	{
		printf("tar3:  %s\n", strRet);
	}
	else
	{
		printf("tar3 failed.\n");
	}
	my_strcpy(dest, inStr);
	if (dest != NULL)
	{
		printf("dest:  %s\n", dest);
	}
	else
	{
		printf("strcpy failed.\n");
	}
	my_strncpy(dest, inStr, 11);
	if (dest != NULL)
	{
		printf("The first 11 chars in inStr:  %s\n", dest);
	}
	else
	{
		printf("strncpy failed.\n");
	}
	char destCat[100] = "Let's try to cat ";
	my_strcat(destCat, "these strings together.");
	if (destCat != NULL)
	{
		printf("cat result:  %s\n", destCat);
	}
	else
	{
		printf("cat failed.\n");
	}
	char destCatn[100] = "Let's count to 5: ";
	my_strncat(destCatn, "123456789", 5);
	if (destCatn != NULL)
	{
		printf("strncat result:  %s\n", destCatn);
	}
	else
	{
		printf("Strncat failed.\n");
	}
	return 0;
}

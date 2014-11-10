#include <stdio.h>
#include <unistd.h>

char *my_strcpy(char *dest, const char *source)
{
	int index; 
	for (index = 0; source[index] != '\0'; index++)
	{
		dest[index] = source[index];
	}
	dest[index] = '\0';
	return dest;
}

char *my_strncpy(char *dest, const char *source, int max)
{
	int index; 
	for (index = 0; source[index] != '\0' && index < max; index++)
	{
		dest[index] = source[index];
	}
	dest[index] = '\0';
	return dest;
}

char *my_strcat(char *dest, const char *source)
{
	int destLen, srcLen;
	int i, j;
	if (dest == NULL)
	{
		return dest;
	}
	for (i = 0; dest[i] != '\0'; i++)
	{	
	}
	for (j = 0; source[j] != '\0'; j++)
	{
		dest[i + j] = source[j];
	}
	dest[i + j] = '\0';
	return dest;
}

char *my_strncat(char *dest, const char *source, int max)
{
	int destLen, srcLen;
	int i, j;
	if (dest == NULL)
	{
		return dest;
	}
	for (i = 0; dest[i] != '\0'; i++)
	{	
	}
	for (j = 0; source[j] != '\0' && j < max; j++)
	{
		dest[i + j] = source[j];
	}
	dest[i + j] = '\0';
	return dest;
}

int my_strlen(const char *str)
{
	char nxtChararr[256];
	char* nxtChar = nxtChararr;
	my_strcpy(nxtChar,str);
	int index = 0;
	for (; *nxtChar != '\0'; nxtChar++)
	{
		index++;
	}
	return index;
}

char *my_strchr(const char *str, int c)
{
	int strLen = my_strlen(str);
	char nxtChararr[strLen + 1];
	char *nxtChar = nxtChararr;
	my_strcpy(nxtChar, str);
	for(; *nxtChar != '\0'; nxtChar++)
	{
		if(*nxtChar == c)
		{
			return nxtChar;
		}
	}
	return NULL;
}

int my_strcmp(const char *str1, const char *str2)
{
	int str1len = my_strlen(str1);
	char firstarr[str1len + 1];
	char *first = firstarr;
	my_strcpy(first, str1);
	int str2len = my_strlen(str2);
	char scndarr[str2len + 1];
	char *scnd = scndarr;
	my_strcpy(scnd, str2);

	for (; *first != '\0' && *scnd != '\0'; first++, scnd++)
	{
		if (*first < *scnd)
		{
			return -1;
		}
		else if (*first > *scnd)
		{
			return 1;
		}
	}
	if ((*first == '\0') && (*scnd == '\0'))
	{
		return 0;
	}
	else if (*first == '\0')
	{	
		return -1;
	}
		return 1;
}

char *my_strstr(const char *str, const char *target)
{
	int targLen = my_strlen(target);
	char targarr[targLen + 1];
	char *targ = targarr;
	my_strcpy(targ, target);
	int index;
	int tarLen = 0;
	int firstLen = my_strlen(str);
	char firstarr[firstLen + 1];
	char *first = firstarr;
	my_strcpy(first, str);
	tarLen = my_strlen(target);
	if (tarLen > (my_strlen(str)))
	{	
		return NULL;
	}
	first = my_strchr(first, *targ);
	while (first != NULL)
	{
		for (index = 0; index < tarLen ; index++)
		{
			if (first[index] == '\0')
			{
				return NULL;
			}
			if (first[index] != targ[index])
			{	
				break;
			}	
		}	
		if(index == tarLen)	
		{
			return first;
		}
		first = my_strchr(first, *targ);
	}
	return NULL;
}



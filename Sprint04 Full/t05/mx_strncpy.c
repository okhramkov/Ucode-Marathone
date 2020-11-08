#include <stdio.h>

char *mx_strncpy(char *dst, const char *src, int len)
{
	if (dst == NULL)
		return NULL;
	char *ptr = dst;
	while (*src && len--)
	{
		*dst = *src;
		dst++;
		src++;
	}
	*dst = '\0';
	return ptr;
}

int main(void)
{
	char *src = "Techie Delight";
	char dst[20];
	int len = 18;
	printf("%s", mx_strncpy(dst, src, len));
	return 0;
}

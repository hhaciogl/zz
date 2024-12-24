#include <stdio.h>
#include <string.h>

void ok(int expr, char *msg);
int is(char *str1, char *str2);


void zz_1();
void zz_2();

int main()
{
	zz_1();
	zz_2();
	return (0);
}

void ok(int expr, char *msg)
{
	static int number;

	number++;
	if (expr)
		printf("ok %d - %s\n", number, msg);
	else
		printf("not ok %d - %s\n", number, msg);
}

int is(char *str1, char *str2)
{
	if (NULL == str1 && NULL == str2)
		return (1);
	else if (NULL == str1 || NULL == str2)
		return (0);
	else
		return(0 == strcmp(str1, str2));
}
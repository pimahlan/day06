#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
	int lenght;
	lenght = 0;
	while(*str)
	{
		lenght++;
		str++;
	}
	return(lenght);
}



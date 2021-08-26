#include <unistd.h>

int main (int argc, char **argv)
{
	argv++;
	if(argc == 2)
	{
		write(1, "coucou", 1);
	}
	else
	{
		write(1, "bonjour", 1);
	}	
	return(0);
}

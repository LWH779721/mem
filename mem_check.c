#include <stdio.h>
#include <stdlib.h>

void *mmalloc (unsigned long counts, const char* file , const unsigned long line)
{
	void *buf;
	
	printf("%s , %ld\n", file , line);
  	if (NULL == (buf = malloc(counts)))
	{
		return NULL;
	}

	return buf;
}

void mfree (void *p)
{
	if (p)
	{
		free(p);
	}
}

void mdump (void)
{
    
}

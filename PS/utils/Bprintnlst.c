#include "../push_swap.h"

void printnlst(t_nlist* l)
{
	size_t	i = 0;
	while (l)
	{
		printf("%zi: %i\n", i, l->num);
		l = l->next;
		i++;
	}
	if (l == NULL)
		printf("%zi: NULL\n", i);
}

void printaAB(t_nlist* a, t_nlist* b)
{
	printf("\nn: a       b");
		size_t	i = 0;
		int	p=0;
		// int n;
	while ((a || b))
	{
		printf("\n%zi: ", i);
		if (a != NULL)
		{
			//n = a->num;
			p = printf("%i", a->num);
			a = a->next;
		}
		while (p++ < 8)
			printf(" ");
		if (b){
			p = printf("%i", b->num);
			b = b->next;
		}
		
		
		i++;
		p = 0;
	}
		printf("\n%zi: \n", i);
}
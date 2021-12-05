#include "../includes/libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*p;

	p = lst;
	while (p)
	{
		f(p->content);
		p = p->next;
	}
}

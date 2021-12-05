#include "../includes/libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*p;
	t_list	*temp;

	p = *lst;
	while (p)
	{
		temp = p;
		p = p->next;
		del(temp->content);
		free(temp);
	}
	*lst = 0;
}

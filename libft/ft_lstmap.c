#include "../includes/libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*p;

	if (!lst)
		return (0);
	new = ft_lstnew(f(lst->content));
	if (!new)
		return (0);
	lst = lst->next;
	p = new;
	while (lst)
	{
		p->next = ft_lstnew(f(lst->content));
		lst = lst->next;
		p = p->next;
		if (!p)
		{
			del(p);
			free(p);
			return (0);
		}
	}
	return (new);
}

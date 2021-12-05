#include "../includes/libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*p;

	if (!lst)
		return (0);
	p = lst;
	while (p->next)
		p = p->next;
	return (p);
}

/*
#include <stdio.h>
int main()
{
	char *str = "testr";
	char *str2 = "aaaaa";
	t_list *lst = ft_lstnew(str);
	t_list *lst2 = ft_lstnew(str2);
	t_list *lst4;
	ft_lstadd_front(&lst2, lst);
	printf("%s\n", (char *)lst2->content);
	printf("%s\n", (char *)lst2->next->content);
	lst4 = ft_lstlast(lst2);
	printf("%s\n", (char *)lst4->content);
}*/
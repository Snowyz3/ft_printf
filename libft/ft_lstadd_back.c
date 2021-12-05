#include "../includes/libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*p;

	if (!*lst)
		*lst = new;
	else
	{
		p = ft_lstlast(*lst);
		p->next = new;
	}
}
/*
#include <stdio.h>
int main()
{
	char *str = "testr";
	char *str2 = "aaaaa";
	t_list *lst = ft_lstnew(str);
	t_list *lst2 = ft_lstnew(str2);
	printf("%s\n", (char *)lst->content);
	printf("%s\n\n", (char *)lst2->content);
	ft_lstadd_back(&lst, lst2);
	printf("%s\n", (char *)lst->content);
	lst = lst->next;
	printf("%s\n", (char *)lst->content);
}*/
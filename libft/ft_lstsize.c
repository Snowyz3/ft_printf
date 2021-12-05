#include "../includes/libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*p;
	int		i;

	p = lst;
	i = 0;
	while (p)
	{
		p = p->next;
		i++;
	}
	return (i);
}
/*
#include <stdio.h>
int main()
{
	char *str = "testr";
	char *str2 = "aaaaa";
	t_list *lst = ft_lstnew(str);
	t_list *lst2 = ft_lstnew(str2);
	ft_lstadd_front(&lst2, lst);
	printf("%s\n", (char *)lst2->content);
	printf("%s\n", (char *)lst2->next->content);
	printf("%d\n", ft_lstsize(lst));
	printf("%d\n", ft_lstsize(lst2));
}*/
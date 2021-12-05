#include "../includes/libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*lst;

	lst = malloc(sizeof(*lst) * 1);
	if (!lst)
		return (0);
	lst->content = content;
	lst->next = 0;
	return (lst);
}
/*
#include <stdio.h>
int main()
{
	char *str = "testr";
	t_list *lst = ft_lstnew(str);
	printf("%s\n", (char *)lst->content);
}*/
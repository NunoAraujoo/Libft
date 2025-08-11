/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntomas-g <ntomas-g@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 13:18:15 by ntomas-g          #+#    #+#             */
/*   Updated: 2025/04/23 15:10:41 by ntomas-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

/*int	main(void)
{
	t_list	*node3 = malloc(sizeof(t_list));
	t_list	*node2 = malloc(sizeof(t_list));
	t_list	*node1 = malloc(sizeof(t_list));
	t_list	**lst = &node1;
	int		i;

	i = 0;
	node1->next = node2;
	node1->next->next = node3;
	node3->next = NULL;
	printf("%d\n", i);
	i = ft_lstsize(node1);
	printf("%d\n", i);
}*/
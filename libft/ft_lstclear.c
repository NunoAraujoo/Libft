/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntomas-g <ntomas-g@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 18:32:43 by ntomas-g          #+#    #+#             */
/*   Updated: 2025/04/24 18:38:18 by ntomas-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*slot;
	t_list	*temp;

	if (!lst || !del)
		return ;
	slot = *lst;
	while (slot)
	{
		temp = slot;
		slot = slot->next;
		ft_lstdelone(temp, del);
	}
	*lst = NULL;
}

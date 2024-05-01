/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-fons <cda-fons@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 18:47:12 by cda-fons          #+#    #+#             */
/*   Updated: 2024/04/29 20:17:41 by cda-fons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*swap;
	t_list	*swap2;

	swap = *lst;
	swap2 = *lst;
	while (swap)
	{
		swap2 = swap2->next;
		(del)(swap->content);
		free(swap);
		swap = swap2;
	}
	*lst = NULL;
}

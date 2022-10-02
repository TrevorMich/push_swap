/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_min_p_0.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioduwole <ioduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 19:40:31 by ioduwole          #+#    #+#             */
/*   Updated: 2022/09/27 19:45:56 by ioduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	cnt(t_node **head)
{
	t_node	*tmp;
	int		count;

	tmp = *head;
	count = 0;
	while (tmp)
	{
		count++;
		tmp = tmp->next;
	}
	return (count);
}

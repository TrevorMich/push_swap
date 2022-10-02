/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioduwole <ioduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 11:16:14 by ioduwole          #+#    #+#             */
/*   Updated: 2022/09/29 15:58:56 by ioduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	min_d(t_node **head)
{
	t_node	*tmp;
	int		min;

	tmp = *head;
	min = tmp->data;
	while (tmp)
	{
		if (min > tmp->data)
		{
			min = tmp->data;
		}
		tmp = tmp->next;
	}
	return (min);
}

int	max_d(t_node **head)
{
	t_node	*tmp;
	int		max;

	tmp = *head;
	max = tmp->data;
	while (tmp)
	{
		if (max < tmp->data)
		{
			max = tmp->data;
		}
		tmp = tmp->next;
	}
	return (max);
}

int	max_p(t_node **head)
{
	t_node	*tmp;
	int		max_position;
	int		max;
	int		i;

	i = 0;
	max_position = i;
	tmp = *head;
	max = tmp->data;
	while (tmp)
	{
		if (tmp->data > max)
		{
			max = tmp->data;
			max_position = i;
		}
		i++;
		tmp = tmp->next;
	}
	return (max_position);
}

int	min_p(t_node **head)
{
	t_node	*tmp;
	int		min_position;
	int		min;
	int		i;

	i = 0;
	min_position = i;
	tmp = *head;
	min = tmp->data;
	while (tmp)
	{
		if (tmp->data < min)
		{
			min = tmp->data;
			min_position = i;
		}
		i++;
		tmp = tmp->next;
	}
	return (min_position);
}

void	push_swap(t_node **head)
{
	t_node	*head_b;

	head_b = NULL;
	if (!is_sorted(*head) && cnt(head) == 2)
		swap(head);
	if (!is_sorted(*head) && cnt(head) == 3)
		sort_three(head);
	if (!is_sorted(*head) && cnt(head) == 4)
	{
		if (min_p(head) == 0)
			sort_min_p_0(head);
		while (min_p(head) != 0)
		{
			if (min_p(head) == 1)
				sort_min_p_1(head);
			if (min_p(head) == 2)
				sort_min_p_2(head);
			if (min_p(head) == 3)
				sort_min_p_3(head);
		}
	}
	if (!is_sorted(*head) && cnt(head) == 5)
	{
		if(min_p(head) == 0)
		
	}
}

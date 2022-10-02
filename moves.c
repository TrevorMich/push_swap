/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioduwole <ioduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 20:58:16 by ioduwole          #+#    #+#             */
/*   Updated: 2022/09/27 00:29:34 by ioduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_node **head)
{
	t_node	*tmp;
	t_node	*tmp1;

	tmp = *head;
	tmp1 = tmp->next;
	tmp->next = tmp1->next;
	tmp1->next = tmp;
	*head = tmp1;
	printf("sa\n");
}

void	rotate(t_node **head)
{
	t_node	*tmp;
	t_node	*tmp1;
	t_node	*tmp2;

	tmp = *head;
	tmp1 = tmp->next;
	tmp2 = tmp;
	while (tmp2->next != NULL)
	{
		tmp2 = tmp2->next;
	}
	tmp2->next = tmp;
	tmp->next = NULL;
	*head = tmp1;
	printf("ra\n");
}

void	reverse_rotate(t_node **head)
{
	t_node	*tmp;
	t_node	*tmp1;
	t_node	*tmp2;

	tmp = *head;
	tmp1 = tmp;
	while (tmp1->next->next)
	{
		tmp1 = tmp1->next;
	}
	tmp2 = tmp1->next;
	tmp2->next = tmp;
	tmp1->next = NULL;
	*head = tmp2;
	printf("rra\n");
}

void	push(t_node **stack_a, t_node **stack_b)
{
	t_node	*tmp;
	t_node	*tmp1;

	tmp = *stack_a;
	tmp1 = tmp->next;
	tmp->next = *stack_b;
	*stack_a = tmp1;
	*stack_b = tmp;
}

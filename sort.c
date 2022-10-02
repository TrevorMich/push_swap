/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioduwole <ioduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 13:43:16 by ioduwole          #+#    #+#             */
/*   Updated: 2022/09/27 19:46:54 by ioduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_node **head)
{
	t_node	*head_b;
	int		numbers;

	head_b = NULL;
	numbers = cnt(head);
	if (numbers == 3)
	{
		if (max_p(head) == 0)
		{
			rotate(head);
			if (!is_sorted(*head))
				swap(head);
		}
		if (min_p(head) == 0 && max_p(head) == 1)
		{
			swap(head);
			rotate(head);
		}
		if (min_p(head) == 1)
			swap(head);
		if (min_p(head) == 2)
			reverse_rotate(head);
	}
}

void	sort_min_p_0(t_node **head)
{
	t_node	*head_b;
	int		numbers;

	head_b = NULL;
	numbers = cnt(head);
	if (numbers == 4)
	{
		if (min_p(head) == 0)
		{
			push(head, &head_b);
			printf("pb\n");
			sort_three(head);
			push(&head_b, head);
			printf("pa\n");
		}
	}
}

void	sort_min_p_1(t_node **head)
{
	t_node	*head_b;
	int		numbers;

	head_b = NULL;
	numbers = cnt(head);
	if (numbers == 4)
	{
		if (min_p(head) == 1)
		{
			swap(head);
			push(head, &head_b);
			printf("pb\n");
			sort_three(head);
			push(&head_b, head);
			printf("pa\n");
		}
	}
}

void	sort_min_p_2(t_node **head)
{
	t_node	*head_b;
	int		numbers;

	head_b = NULL;
	numbers = cnt(head);
	if (numbers == 4)
	{
		if (min_p(head) == 2)
		{
			reverse_rotate(head);
			reverse_rotate(head);
			push(head, &head_b);
			printf("pb\n");
			sort_three(head);
			push(&head_b, head);
			printf("pa\n");
		}
	}
}

void	sort_min_p_3(t_node **head)
{
	t_node	*head_b;
	int		numbers;

	head_b = NULL;
	numbers = cnt(head);
	if (numbers == 4)
	{
		if (min_p(head) == 3)
		{
			reverse_rotate(head);
			push(head, &head_b);
			printf("pb\n");
			sort_three(head);
			push(&head_b, head);
			printf("pa\n");
		}
	}
}

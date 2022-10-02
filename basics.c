/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basics.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioduwole <ioduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 20:04:25 by ioduwole          #+#    #+#             */
/*   Updated: 2022/09/23 21:44:16 by ioduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	insert_last(t_node **head, int x)
{
	t_node	*new;
	t_node	*last_node;

	new = malloc(sizeof(t_node));
	new->data = x;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		last_node = *head;
		while (last_node->next != NULL)
		{
			last_node = last_node->next;
		}
		last_node->next = new;
	}
}

void	create_list(char **str, t_node **head)
{
	int		i;

	i = 1;
	while (str[i])
	{
		insert_last(head, ft_atoi(str[i]));
		i++;
	}
}

void	print_list(t_node **head)
{
	t_node	*tmp;

	tmp = *head;
	while (tmp)
	{
		printf("%d\n", tmp->data);
		tmp = tmp->next;
	}
}

void	clear_list(t_node **head)
{
	t_node	*tmp;

	while (*head)
	{
		tmp = *head;
		*head = tmp->next;
		free (tmp);
		tmp = *head;
	}
}

int	is_sorted(t_node *head)
{
	t_node	*tmp;

	tmp = head;
	while (tmp->next)
	{
		if (tmp->data > tmp->next->data)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

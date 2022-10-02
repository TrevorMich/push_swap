/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioduwole <ioduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 20:05:31 by ioduwole          #+#    #+#             */
/*   Updated: 2022/09/26 19:17:56 by ioduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_node	*head;

	head = NULL;
	if (argc > 1)
	{
		if (!checks(argv))
			return (1);
		create_list(argv, &head);
		push_swap(&head);
		print_list(&head);
		clear_list(&head);
	}
	return (0);
}

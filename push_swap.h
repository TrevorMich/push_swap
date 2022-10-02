/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioduwole <ioduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 19:51:37 by ioduwole          #+#    #+#             */
/*   Updated: 2022/09/27 19:38:34 by ioduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include <stdio.h>

typedef struct s_node
{
	int				data;
	struct s_node	*next;
}	t_node;

int		is_num(char **argv);
int		is_duplicate(char **str);
int		checks(char **str);
int		is_sorted(t_node *head);
int		cnt(t_node **head);
int		min_d(t_node **head);
int		max_p(t_node **head);
int		min_p(t_node **head);
void	insert_last(t_node **head, int x);
void	create_list(char **str, t_node **head);
void	print_list(t_node **head);
void	clear_list(t_node **head);
void	swap(t_node **head);
void	rotate(t_node **head);
void	reverse_rotate(t_node **head);
void	push_swap(t_node **head);
void	sort_three(t_node **head);
void	sort_min_p_0(t_node **head);
void	sort_min_p_1(t_node **head);
void	sort_min_p_2(t_node **head);
void	sort_min_p_3(t_node **head);
void	push(t_node **stack_a, t_node **stack_b);

#endif
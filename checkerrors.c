/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkerrors.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioduwole <ioduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 13:23:44 by ioduwole          #+#    #+#             */
/*   Updated: 2022/09/05 20:14:10 by ioduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_bound(const char *str)
{
	long	i;
	long	nbr;
	int		isneg;

	i = 0;
	nbr = 0;
	isneg = 0;
	if (str[i] != '\0' && str[i] == '-')
	{
		isneg = 1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		nbr = (nbr * 10) + (str[i] - '0');
		i++;
	}
	if (isneg == 1)
		nbr *= -1;
	if (!(nbr >= -2147483648 && nbr <= 2147483647))
		return (0);
	return (1);
}

int	is_num(char **argv)
{
	int	i;
	int	j;
	int	c;

	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			c = argv[i][j];
			if ((c >= '0' && c <= '9') || c == '+' || c == '-')
			{
				if (((c == '+' || c == '-') && !ft_isdigit(argv[i][j + 1]))
					|| ((c == '+' || c == '-') && ft_isdigit(argv[i][j - 1])))
				{
					printf("Warning, invalid integer(s)!\n");
					return (0);
				}
			}
			j++;
		}
		i++;
	}
	return (1);
}

int	is_duplicate(char **str)
{
	int	i;	
	int	j;

	i = 1;
	while (str[i] != NULL)
	{
		j = i + 1;
		while (str[j] != NULL)
		{
			if ((ft_strncmp(str[i], str[j], ft_strlen(str[i])) == 0)
				&& (ft_strlen(str[i]) == ft_strlen(str[j])))
			{
				printf("Error, duplicate detected, check numbers again!\n");
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	checks(char **str)
{
	int	i;

	i = 1;
	if (!is_num(str))
		return (0);
	if (is_duplicate(str))
		return (0);
	while (str[i])
	{
		if (!(is_bound(str[i])))
		{
			printf("Warning, integer value out of bound!.\n");
			return (0);
		}
		i++;
	}
	return (1);
}

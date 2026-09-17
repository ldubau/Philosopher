/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonpouet <leonpouet@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 18:19:58 by leonpouet         #+#    #+#             */
/*   Updated: 2026/09/17 11:11:53 by leonpouet        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

long	ft_atol(char *str)
{
	long	nbr;
	int		i;

	i = 0;
	nbr = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		nbr *= 10;
		nbr += (str[i] - '0');
		i++;
	}
	return (nbr);
}

int	is_digit(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

int	free_all(t_table *table, int n)
{
	int i;

	i = 0;
	if (table->philos)
		free(table->philos);
	if (table->forks)
		free(table->forks);
	return (0);
	while (i < n)
	{
		pthread_mutex_destroy(&table->forks[i].fork);
		i++;
	}
}



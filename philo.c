/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonpouet <leonpouet@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 12:26:09 by leonpouet         #+#    #+#             */
/*   Updated: 2026/09/17 10:21:05 by leonpouet        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int main(int ac, char **av)
{
	t_table	table;

	if (ac != 5 && ac != 6)
		return (1);

	if (!parsing(&table, av))
		return (1);

	data_init

	dinner_start

	clean_table
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldubau <ldubau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 12:26:09 by leonpouet         #+#    #+#             */
/*   Updated: 2026/09/17 17:11:30 by ldubau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int main(int ac, char **av)
{
	t_table	table;

	gettimeofday();
	if (ac != 5 && ac != 6)
		return (1);

	if (!parsing(&table, av))
		return (1);

	init_data(&table);

	// dinner_start

	free_all(&table, table.philo_nbr); // clean_table
	return (0);
}

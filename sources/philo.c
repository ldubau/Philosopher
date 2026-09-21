/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonpouet <leonpouet@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 12:26:09 by leonpouet         #+#    #+#             */
/*   Updated: 2026/09/21 09:56:19 by leonpouet        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/philo.h"

int main(int ac, char **av)
{
	t_table	table;


	if (ac != 5 && ac != 6)
		return (1);

	if (!parsing(&table, av))
		return (1);

	if (!init_data(&table))
		return (1);

	// dinner_start

	int i = 0;
	while (i < table.philo_nbr)
	{
		printf("\033[32mphilo id = %d\n\033[33mleft fork = %d\n\033[34mright fork = %d\n\033[0m\n", table.philos[i].id, table.philos[i].left_fork->fork_id, table.philos[i].right_fork->fork_id);
		i++;
	}

	free_all(&table, table.philo_nbr); // clean_table
	return (0);
}

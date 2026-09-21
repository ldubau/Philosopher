/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dinner_start.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldubau <ldubau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 11:50:02 by ldubau            #+#    #+#             */
/*   Updated: 2026/09/21 17:56:00 by ldubau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	eat(t_table *table)
{
	pthread_mutex_lock(&);
	pthread_mutex_lock(&);

	pthread_mutex_unlock(&);
	pthread_mutex_unlock(&);
}

void	dinner_start(t_table *table)
{
	int	i;

	i = 0;
	table->start_simulation = get_time_ms();
	while (i < table->philo_nbr)
		table->philos[i++].last_meal = table->start_simulation;
}

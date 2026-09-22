/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dinner_start.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonpouet <leonpouet@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 11:50:02 by ldubau            #+#    #+#             */
/*   Updated: 2026/09/22 10:45:20 by leonpouet        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	eat(t_philo *philo)
{
	pthread_mutex_t	*first;
	pthread_mutex_t	*second;

	if (philo->id % 2 == 1)
	{
	first = philo->right_fork;
	second = philo->left_fork;
	}
	else
	{
	first = philo->left_fork;
	second = philo->right_fork;
	}

	pthread_mutex_lock(first);
	mtx_printf(philo, "has taken a fork");
	pthread_mutex_lock(second);
	mtx_printf(philo, "has taken a fork");

	mtx_printf(philo, "is eating");
	philo->nbr_meal++;

	philo->last_meal = get_time_ms();
	pthread_mutex_unlock(first);
	pthread_mutex_unlock(second);
}

void	dinner_start(t_table *table)
{
	int	i;

	i = 0;
	table->start_simulation = get_time_ms();
	while (i < table->philo_nbr)
		table->philos[i++].last_meal = table->start_simulation;
}

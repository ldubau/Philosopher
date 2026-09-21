/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutex_function.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldubau <ldubau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 11:54:00 by ldubau            #+#    #+#             */
/*   Updated: 2026/09/21 16:23:44 by ldubau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	mtx_sim(t_table *table)
{

}

void	mtx_printf(t_philo *philo, char *msg)
{
	long	time;

	pthread_mutex_lock(&philo->table->print_mutex);
	time = get_time_ms() - philo->table->start_simulation;
	printf("%ld %d %s", time, philo->id, msg);
	pthread_mutex_unlock(&philo->table->print_mutex);
}

void	mtx_take_fork(t_table *table)
{

}

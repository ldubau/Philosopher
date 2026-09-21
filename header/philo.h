/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonpouet <leonpouet@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/11 15:41:45 by leonpouet         #+#    #+#             */
/*   Updated: 2026/09/17 17:40:51 by leonpouet        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <pthread.h>
# include <sys/time.h>
# include <limits.h>
# include <stdbool.h>

typedef pthread_mutex_t t_mtx;

typedef struct s_table t_table;

typedef struct s_fork
{
	t_mtx	fork;
	int		fork_id;
}	t_fork;

typedef struct s_philo
{
	int			id;
	int			nbr_meal;
	bool		full;
	t_fork		*left_fork;
	t_fork		*right_fork;
	pthread_t	thread_id;
	t_table		*table;
}	t_philo;

typedef struct s_table
{
	long	philo_nbr;
	long	time_to_die;
	long	time_to_eat;
	long	time_to_sleep;
	long	max_meals;
	long	start_simulation;
	bool	end_simulation;
	t_fork	*forks;
	t_philo	*philos;
}	t_table;

// UTILS

long	ft_atol(char *str);
int		is_digit(char *s);
int		free_all(t_table *table, int n);
long	get_time_ms(void);

// PARSING

int	parsing(t_table *table, char **av);

// INIT

int		init_data(t_table *table);

# endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenkhat <mbenkhat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 15:36:43 by mbenkhat          #+#    #+#             */
/*   Updated: 2022/03/12 12:26:20 by mbenkhat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include <pthread.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <sys/time.h>

typedef struct s_philo
{
	int				nbr;
	pthread_t		thread;
	pthread_mutex_t	forkmutex;
	pthread_mutex_t	mealmutex;
	int				last_meal;
	int				time;
	int				n_t_eat;
}			t_philo;

typedef struct s_data
{
	int				n_of_philos;
	int				time_to_die;
	int				time_to_eat;
	int				time_to_sleep;
	int				n_of_times_to_eat;
	int				n_eat;
	int				died;
	t_philo			*philo;
}			t_data;

int		check_params(int ac, char **av);
t_data	*arg_to_struct(char **av);
int		ft_strlen(char *str);
int		ft_atoi(const char *str);
int		ft_sleep(int time, t_data *data, t_philo *ph);

#endif
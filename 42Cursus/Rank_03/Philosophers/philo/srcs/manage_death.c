/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_death.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrimah <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 18:07:47 by yrimah            #+#    #+#             */
/*   Updated: 2023/03/14 18:07:50 by yrimah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/philosophers.h"

int	is_dead(t_philo *philo)
{
	int	in_life;

	pthread_mutex_lock(&(philo->params->m_is_dead));
	in_life = philo->params->is_dead;
	pthread_mutex_unlock(&(philo->params->m_is_dead));
	return (in_life);
}

int	stop_threads(t_philo *philo)
{
	pthread_mutex_lock(&(philo->params->m_is_dead));
	philo->params->is_dead = 1;
	pthread_mutex_unlock(&(philo->params->m_is_dead));
	return (1);
}

static int	check_philo_death(t_philo *philo, long cur_time)
{
	int	dead;
	int	last_meal;

	dead = 0;
	pthread_mutex_lock(&(philo->m_last_meal));
	last_meal = cur_time - philo->last_meal;
	pthread_mutex_unlock(&(philo->m_last_meal));
	if (last_meal > philo->params->time_to_die)
	{
		pthread_mutex_lock(&(philo->params->console_mutex));
		pthread_mutex_lock(&(philo->params->m_is_dead));
		philo->params->is_dead = 1;
		pthread_mutex_unlock(&(philo->params->m_is_dead));
		printf("%09ld %d died\n", cur_time, philo->pos);
		pthread_mutex_unlock(&(philo->params->console_mutex));
		dead = 1;
	}
	return (dead);
}

void	*check_death(void *arg)
{
	t_args		*params;
	t_philo		**philos;
	long		cur_time;
	int			cur;

	philos = (t_philo **)arg;
	params = philos[0]->params;
	while (1)
	{
		cur = 0;
		cur_time = get_timestamp() - params->start_time;
		while (cur < params->num)
		{
			if (check_philo_death(&(*philos)[cur], cur_time))
				return (NULL);
			cur++;
		}
		ft_usleep(1);
	}
	return (NULL);
}

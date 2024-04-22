/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybellocq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 17:56:54 by ybellocq          #+#    #+#             */
/*   Updated: 2023/07/06 16:32:24 by ybellocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	exit_error(char *msg)
{
	if (msg)
		free(msg);
	ft_putstr_fd("error", 2);
	exit(EXIT_FAILURE);
}

int	send_bitnull(int s_pid, char *msg)
{
	static int	count = 0;

	if (count++ != 8)
	{
		if (kill(s_pid, SIGUSR1) == -1)
			exit_error(msg);
		return (0);
	}
	return (1);
}

int	send_bit(int pid, char *str)
{
	static char	*msg = 0;
	static int	bit = 0;
	static int	s_pid = 0;

	if (str)
		msg = ft_strdup(str);
	if (!msg)
		exit_error(0);
	if (pid)
		s_pid = pid;
	if (msg[bit / 8])
	{
		if (msg[bit / 8] & (0x80 >> (bit % 8)))
		{
			if (kill(s_pid, SIGUSR2) == -1)
				exit_error(msg);
		}
		else if (kill(s_pid, SIGUSR1) == -1)
			exit_error(msg);
		return (bit++, 0);
	}
	if (!send_bitnull(s_pid, msg))
		return (0);
	free(msg);
	return (1);
}

void	handler(int signum)
{
	int	end;

	end = 0;
	if (signum == SIGUSR1)
		end = send_bit(0, 0);
	else if (signum == SIGUSR2)
	{
		ft_putstr_fd("Error Server.\n", 2);
		exit(EXIT_FAILURE);
	}
	if (end)
	{
		ft_putstr_fd("Message send Ok.\n", 1);
		exit(EXIT_SUCCESS);
	}
}

int	main(int argc, char **argv)
{
	if (argc != 3 || !ft_str_isnumeric(argv[1]))
		exit(EXIT_FAILURE);
	signal(SIGUSR1, handler);
	signal(SIGUSR2, handler);
	send_bit(ft_atoi(argv[1]), argv[2]);
	while (1)
		pause();
}

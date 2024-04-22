/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybellocq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 15:45:45 by ybellocq          #+#    #+#             */
/*   Updated: 2023/07/07 13:37:03 by ybellocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	exit_error(int c_pid, char *msg)
{
	if (msg)
		free(msg);
	kill(c_pid, SIGUSR2);
	exit(EXIT_FAILURE);
}

char	*disp_string(char *msg)
{
	ft_printf("%s\n", msg);
	free(msg);
	return (NULL);
}

void	handler(int signum, siginfo_t *info, void *context)
{
	static int	bitshift = 0;
	static char	byte = 0xFF;
	static char	*msg = 0;
	static int	c_pid;

	(void) context;
	if (info->si_pid)
		c_pid = info->si_pid;
	if (signum == SIGUSR1)
		byte ^= 0x80 >> bitshift;
	else if (signum == SIGUSR2)
		byte |= 0x80 >> bitshift;
	if (++bitshift == 8)
	{
		if (byte)
			msg = ft_strjoin_char(msg, byte);
		else
			msg = disp_string(msg);
		byte = 0xFF;
		bitshift = 0;
	}
	if (kill(c_pid, SIGUSR1) == -1)
		exit_error(c_pid, msg);
}

int	main(void)
{
	struct sigaction	sa_signal;
	sigset_t			block_mask;

	sigemptyset(&block_mask);
	sigaddset(&block_mask, SIGINT);
	sigaddset(&block_mask, SIGQUIT);
	sa_signal.sa_handler = 0;
	sa_signal.sa_mask = block_mask;
	sa_signal.sa_flags = SA_SIGINFO;
	sa_signal.sa_sigaction = handler;
	sigaction(SIGUSR1, &sa_signal, NULL);
	sigaction(SIGUSR2, &sa_signal, NULL);
	ft_putstr_fd("PID of this server is ", 1);
	ft_putnbr_fd(getpid(), 1);
	ft_putchar_fd('\n', 1);
	while (1)
		pause();
}

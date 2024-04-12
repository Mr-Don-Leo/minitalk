/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbabayan <mbabayan@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 15:44:30 by mbabayan          #+#    #+#             */
/*   Updated: 2024/03/25 15:38:25 by mbabayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

/// @brief The handler function for the server, which receives the
/// signal from the client.
/// @details The handler function receives the signal from the client.
/// The static 'i' variable is used to keep track of the bit position,
/// and the static 'c' variable is used to store the character.
/// @process it checks if the signal is SIGUSR1, then it sets the bit
/// at the 'i' position in the 'c' variable. If the 'i' variable is 8
/// (which means that the character is complete) which then it prints
/// the character and resets the 'i' and 'c' variables.
static void	handler(int signum)
{
	static char	c = 0;
	static char i = 0;

	if (signum == SIGUSR1)
		c |= 1 << i;
	i++;
	if (i == 8)
	{
		ft_putchar_fd(c, 1);
		i = 0;
		c = 0;
	}
}

/// @brief The main function of the server
/// @details Retrieves the Process ID, which is a unique
/// identifier assigned by the operating system to the process.
/// @process The main function retrieves the Process ID and
/// prints it, It then sets the signal handlers for SIGUSR1 and
/// SIGUSR2. The server then enters an infinite loop, waiting for
/// signals from the client.
int	main(void)
{
	int	pid;

	pid = getpid();
	ft_putstr_fd("Welcome to my minitalk!\n", 1);
	ft_putstr_fd("Server PID: ", 1);
	ft_putnbr_fd(pid, 1);
	ft_putchar_fd('\n', 1);
	signal (SIGUSR1, handler);
	signal (SIGUSR2, handler);
	while (1)
	{
		pause();
	}
}

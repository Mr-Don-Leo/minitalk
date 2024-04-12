/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbabayan <mbabayan@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 12:23:58 by mbabayan          #+#    #+#             */
/*   Updated: 2024/04/12 17:01:25 by mbabayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk_bonus.h"

/// @brief Checks the arguments.
/// @details Checks if the number of arguments is valid, if the PID is valid,
/// and if the message is not empty.
/// @process The function checks if the number of arguments is 3, if the PID
/// is a number and if the message is not empty. If any of the conditions are
/// not met, the function prints an error message.
/// @param argc The number of arguments.
/// @param argv The arguments.
int argument_check(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc != 3)
	{
		ft_putstr_fd("\nError: Invalid number of arguments\n", 2);
		return (-1);
	}
	while (argv[1][i])
	{
		if (!ft_isdigit(argv[1][i]) || ft_strlen(argv[1]) > 31) 
		{
			ft_putstr_fd("\nError: Invalid PID\n", 2);
			return (-1);
		}
		i++;
	}
	if (argv[2] == 0)
	{
		ft_putstr_fd("\nError: Empty message\n", 2);
	}
	return (0);
}

/// @brief Sends a character to the server.
/// @details Declares and initializes the variable 'i' to 0 for the loop.
/// @process The function sends 8 signals to the server, each signal representing
/// a bit of the character. If the bit is 1, it sends SIGUSR1, if the bit is 0,
/// it sends SIGUSR2. The function then shifts the character to the right by 1
/// and waits for 100 microseconds.
/// @param pid The Process ID of the server.
/// @param c The character to be sent.
void send_char(int pid, char c)
{
	int i;

	i = 0;
	while (i < 8)
	{
		if (c & 1)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		c >>= 1;
		usleep(100);
		i++;
	}
}

/// @brief The main function of the client.
/// @details Initializes the variables and checks the arguments.
/// @process The main function initializes the variables and checks, if the
/// arguments are valid. It then sends the message to the server.
/// @param argc The number of arguments.
/// @param argv The arguments.
int main(int argc, char **argv)
{
	char *string;
	int pid;

	if (argument_check(argc, argv) == -1)
	{
		ft_putstr_fd("Usage: ./client [PID] [string]\n", 2);
		return (-1);
	}
	pid = ft_atoi(argv[1]);
	string = argv[2];
	string = ft_strjoin(string, "\n");
	while (*string)
	{
		send_char(pid, *string);
		string++;
	}
	return (0);
}
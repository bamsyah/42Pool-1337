/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamsyah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 13:42:57 by bamsyah           #+#    #+#             */
/*   Updated: 2022/09/07 13:58:48 by bamsyah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;

	(void) ac;
	i = 0;
	while (av[0][i])
	{
		write(1, &av[0][i], 1);
		i++;
	}
	write(1, "\n", 1);
}

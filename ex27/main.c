/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 04:17:23 by asoler            #+#    #+#             */
/*   Updated: 2022/04/01 04:24:42 by asoler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_display_file(char *s);

int	main(int argc, char *argv[])
{
	if (argc == 1)
		write(2, "File name missied.\n", 20);
	else if (argc > 2)
		write(2, "Too many arguments.\n", 21);
	else
	{
		ft_display_file(argv[1]);
	}
}

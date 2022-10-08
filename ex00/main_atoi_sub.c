/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_atoi_sub.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusyamas <yuppiy2000@icloud.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 20:25:20 by yusyamas          #+#    #+#             */
/*   Updated: 2022/10/08 22:50:30 by yusyamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define FT_NULL '\0'

int	c_rush_00_atoi(char *c)
{
	int	num;

	num = 0;
	while (*c != FT_NULL)
	{
		num *= 10;
		num += *c - 48;
		c += 1;
	}
	return (num);
}

int	main(int argc, char *argv[])
{
	int	x;
	int	y;

	x = 1;
	y = 1;
	if (argc >= 3)
	{
		x = c_rush_00_atoi(argv[1]);
		y = c_rush_00_atoi(argv[2]);
	}
	rush(x, y);
	return (0);
}

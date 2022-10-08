/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusyamas <yuppiy2000@icloud.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 20:25:20 by yusyamas          #+#    #+#             */
/*   Updated: 2022/10/08 22:23:13 by yusyamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define FT_NULL '\0'

int	c_rush_00_atoi(char *c, int *flag)
{
	int	num;

	num = 0;
	while (*c != FT_NULL)
	{
		if (*c < 48 || *c > 57)
		{
			*flag = 0;
			break ;
		}
		num *= 10;
		num += *c - 48;
		c += 1;
	}
	if (num < 0)
	{
		*flag = 0;
	}
	return (num);
}

int	main(int argc, char *argv[])
{
	int	x;
	int	y;
	int	flag;

	flag = 1;
	x = 1;
	y = 1;
	if (argc >= 3)
	{
		x = c_rush_00_atoi(argv[1], &flag);
		y = c_rush_00_atoi(argv[2], &flag);
	}
	if (flag == 0)
	{
		x = 1;
		y = 1;
	}
	rush(x, y);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_atoi_sub.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miida <miida@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 20:25:20 by yusyamas          #+#    #+#             */
/*   Updated: 2022/10/08 23:19:16 by miida            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define FT_NULL '\0'

int	rush(int x, int y);

int	c_rush_00_atoi(char *c)
{
	int	num;

	num = 0;
	while (*c != FT_NULL)
	{
		num *= 10;
		num += *c - 'c';
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

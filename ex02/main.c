/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miida <miida@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 20:25:20 by yusyamas          #+#    #+#             */
/*   Updated: 2022/10/08 23:35:57 by miida            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define FT_NULL '\0'

int	rush(int x, int y);

int	c_rush_00_atoi(char *c, int *flag)
{
	int	num;

	num = 0;
	while (*c != FT_NULL)
	{
		if (*c < '0' || *c > '9')
		{
			*flag = 0;
			break ;
		}
		num *= 10;
		num += *c - '0';
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

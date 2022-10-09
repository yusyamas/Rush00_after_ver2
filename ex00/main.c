/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miida <miida@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 20:25:20 by yusyamas          #+#    #+#             */
/*   Updated: 2022/10/09 20:45:01 by miida            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define FT_NULL '\0'
#define INT_MAX 2147483647

void	ft_putchar(char c);

int		rush(int x, int y);

int	overflow_ast(int num)
{
	if (num <= INT_MAX / 10)
	{
		return (0);
	}
	return (1);
}

int	overflow_plus(int num, int x)
{
	if (num <= INT_MAX - x)
	{
		return (0);
	}
	return (1);
}

int	c_rush_00_atoi(char *c, int *flag)
{
	int	num;
	int	nbr;

	num = 0;
	while (*c != FT_NULL)
	{
		if (*c < '0' || *c > '9')
		{
			*flag = 0;
			break ;
		}
		if (overflow_ast(num))
		{
			*flag = 0;
		}
		num *= 10;
		nbr = *c - '0';
		if (overflow_plus(num, nbr))
		{
			*flag = 0;
		}
		num += nbr;
		c += 1;
	}
	return (num);
}

int	main(int argc, char *argv[])
{
	int	x;
	int	y;
	int	flag;

	flag = 1;
	if (argc >= 3)
	{
		x = c_rush_00_atoi(argv[1], &flag);
		y = c_rush_00_atoi(argv[2], &flag);
	}
	if (flag == 0)
	{
		write(2, "Error\n", 6);
		return (1);
	}
	rush(x, y);
	return (0);
}

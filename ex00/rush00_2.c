/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: RUSHS00(yusyamas,mogawa,miida)              +#+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 20:44:52 by miida             #+#    #+#             */
/*   Updated: 2022/10/07 20:44:52 by miida            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
	return ;
}

// x、yと呼ばれる、2つのint型の値を引数とする関数rushを作成せよ。
//横の長さがx、高さがyの長方形を標準出力に出力すること。
//o---o
//|   |
//o---o

void	vector_init(int x, int y, char **c)
{
	int	xx;
	int	yy;

	yy = 0;
	while (yy <= y - 1)
	{
		xx = 0;
		while (xx <= x)
		{
			c[yy][xx];
		}
	}
}

void	rush(int x, int y)
{
	char	c[10][10];

	vector_init(x, y, c);
}

int	main(void)
{
	rush(5, 5);
	return (0);
}

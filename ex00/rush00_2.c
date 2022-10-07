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

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
	return ;
}

#define T_L 'o'
#define T_R 'o'
#define B_L 'o'
#define B_R 'o'
#define HORIZ '-'
#define VERT '|'
#define SP ' '
#define EOL '\n'

// x、yと呼ばれる、2つのint型の値を引数とする関数rushを作成せよ。
//横の長さがx、高さがyの長方形を標準出力に出力すること。
//o---o
//|   |
//o---o
int	rush(int x, int y)
{
	int	xx;
	int	yy;

	yy = 0;
	while (yy <= y - 1)
	{
		xx = 0;
		while (xx <= x)
		{
			if (xx == 0 && yy == 0)
				ft_putchar(T_L);
			else if (xx == x - 1 && yy == 0)
				ft_putchar(T_R);
			else if (xx == 0 && yy == y - 1)
				ft_putchar(B_L);
			else if (xx == x - 1 && yy == y - 1)
				ft_putchar(B_R);
			else if (xx == 0 || xx == x - 1)
				ft_putchar(VERT);
			else if (xx == x)
				ft_putchar(EOL);
			else if (yy == 0 || yy == y - 1)
				ft_putchar(HORIZ);
			else
				ft_putchar(SP);
			xx += 1;
		}
		yy += 1;
	}
	return (0);
}

int	main(void)
{
	rush(5, 5);
	rush(5, 1);
	rush(1, 5);
	return (0);
}

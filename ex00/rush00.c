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

#include "ft_putchar.c"

#define T_L 'o'
#define T_R T_L
#define B_L T_L
#define B_R T_L

#define H '|'
#define V '-'
#define SP ' '

// x、yと呼ばれる、2つのint型の値を引数とする関数rushを作成せよ。
//横の長さがx、高さがyの長方形を標準出力に出力すること。
//o---o
//|   |
//o---o
int	rush(int x, int y)
{
	int	yy;
	int	xx;

	yy = 1;
	while (yy < y)
	{
		xx = 1;
		while (xx < x)
		{
			if (yy == 1)
			{
				if (xx == 1)
					ft_putchar(T_L);
				else if (xx == x)
					ft_putchar(T_R);
				else
					ft_putchar(H);
			}
			else if (1 < yy && yy < y)
			{
				if (xx == 1 || xx == x)
					ft_putchar(V);
				else
					ft_putchar(SP);
			}
			else if (yy == y)
			{
				if (xx == 1)
					ft_putchar(B_L);
				else if (xx == x)
					ft_putchar(B_R);
				else
					ft_putchar(H);
			}
			xx++;
			ft_putchar('\n');
		}
		yy++;
	}
	return (0);
}

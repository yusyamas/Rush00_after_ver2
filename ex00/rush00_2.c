/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00_2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusyamas <yuppiy2000@icloud.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 10:28:29 by yusyamas          #+#    #+#             */
/*   Updated: 2022/10/08 12:39:57 by yusyamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#define T_L 'o'
#define T_R 'o'
#define B_L 'o'
#define B_R 'o'
#define HORIZ '-'
#define VERT '|'
#define SP ' '
#define EOL '\n'
int		g_x;
int		g_y;

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

void	vector_init(int x, int y, char *c)
{
	int	place;

	place = 0;
	while (place < y * (x + 1))
	{
		c[place] = SP;
		place += 1;
	}
}

void	vector_vert_change(char *c, int x, int y, int *setting)
{
	int		place;
	int		cnt;
	char	tile;
	int		start;
	int		end;

	cnt = 0;
	while (cnt < 3)
	{
		if (cnt != 2)
		{
			start = 1;
			end = y - 2;
		}
		else
		{
			start = 0;
			end = y - 1;
		}
		while (start <= end)
		{
			place = start * (x + 1) + setting[cnt + 3];
			c[place] = (char)setting[cnt];
			start += 1;
		}
		cnt += 1;
	}
}

void	vector_vert_enter(char *c, int xline, int start, int end)
{
	int	place;

	place = 0;
	while (start <= end)
	{
		place = start * (g_x + 1) + xline;
		c[place] = EOL;
		start += 1;
	}
}

void	vector_horiz_change(char *c, int yline, int start, int end)
{
	int	place;

	place = 0;
	while (start <= end)
	{
		place = yline * (g_x + 1) + start;
		c[place] = HORIZ;
		start += 1;
	}
}

void	vector_dot_change(char *c, int place, char change)
{
	if (c[place] == SP)
	{
		c[place] = change;
	}
}

void	vector_print(char *c)
{
	int	place;

	place = 0;
	while (place < g_y * (g_x + 1))
	{
		ft_putchar(c[place]);
		place += 1;
	}
}

void	rush(int x, int y)
{
	char	c[100];
	int		place;
	int		setting[6];

	vector_init(x, y, c);
	setting[0] = 124;
	setting[1] = 124;
	setting[2] = 10;
	setting[3] = 0;
	setting[4] = x - 1;
	setting[5] = x;
	vector_vert_change(c, 0, 1, y - 2);
	vector_vert_change(c, x - 1, 1, y - 2);
	vector_vert_enter(c, x, 0, y - 1);
	vector_horiz_change(c, 0, 1, y - 2);
	vector_horiz_change(c, y - 1, 1, y - 2);
	place = 0;
	vector_dot_change(c, place, T_L);
	place = x - 1;
	vector_dot_change(c, place, T_R);
	place = (y - 1) * (x + 1);
	vector_dot_change(c, place, B_L);
	place = y * (x + 1) - 2;
	vector_dot_change(c, place, B_R);
	vector_print(c);
}

int	main(void)
{
	rush(5, 5);
	return (0);
}

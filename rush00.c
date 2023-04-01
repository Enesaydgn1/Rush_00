/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaydogan <enes_aydogan65@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 14:22:10 by eaydogan          #+#    #+#             */
/*   Updated: 2023/03/26 15:44:12 by eaydogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush_line(int x, char ilk, char orta, char son)
{
	int j;

	j = 1;

	while (j <= x)
	{
		if (j == 1)
			ft_putchar(ilk);
		else
		{
			if (j == x)
				ft_putchar(son);
			else
				ft_putchar(orta);
		}
		j++;
	}
	ft_putchar('\n');
}


void	rush(int x, int y)
{
	int i;

	i = 1;

    if(x <= 0 || y <= 0){
      write(1, "Hatalı giriş negatif ve sıfır değeri girilemez!\n", 53);
        return;
    }
	while (i <= y)
	{
		if (i == 1 || i == y)
			rush_line(x, 'o', '-', 'o');
		else
			rush_line(x, '|', ' ', '|');
		i++;
	}
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfusaro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/04 16:23:21 by cfusaro           #+#    #+#             */
/*   Updated: 2017/09/06 13:25:49 by cfusaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_i_j(int i, int j)
{
	ft_putchar((i / 10) + '0');
	ft_putchar((i % 10) + '0');
	ft_putchar(' ');
	ft_putchar((j / 10) + '0');
	ft_putchar((j % 10) + '0');
}

void	ft_print_comb2(void)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 99)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_print_i_j(i, j);
			j++;
			if (i < 98 || j <= 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
		i++;
	}
}

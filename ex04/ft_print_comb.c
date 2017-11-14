/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfusaro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/04 09:47:40 by cfusaro           #+#    #+#             */
/*   Updated: 2017/09/06 13:21:15 by cfusaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_config(int i, int j, int k)
{
	ft_putchar(i + 48);
	ft_putchar(j + 48);
	ft_putchar(k + 48);
	if (!(i == 7 && j == 8 && k == 9))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int i;
	int j;
	int k;

	i = 0;
	while (i < 10)
	{
		j = i + 1;
		while (j < 10)
		{
			k = j + 1;
			while (k < 10)
			{
				ft_print_config(i, j, k);
				k++;
			}
			j++;
		}
		i++;
	}
}

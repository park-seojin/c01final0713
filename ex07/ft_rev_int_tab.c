/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _ft_rev_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojpark <qkrtjwls8546@naver.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 21:58:03 by seojpark          #+#    #+#             */
/*   Updated: 2020/07/13 14:15:21 by seojpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int a;
	int b;
	int idx;

	idx = 0;
	while (idx < size / 2)
	{
		a = tab[idx];
		b = tab[size - idx - 1];
		tab[idx] = b;
		tab[size - idx - 1] = a;
		idx++;
	}
}

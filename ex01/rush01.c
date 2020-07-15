/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoima <omoima@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 08:24:30 by omoima            #+#    #+#             */
/*   Updated: 2020/07/15 10:54:57 by omoima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

extern void ft_putchar(char c);

void rush(int x, int y){
	int i;
	int curr;
	i = 0;
	curr = 0;

	while (i < y){
		while (curr < x){
			if (curr == 0 && i == 0){
				ft_putchar('/');
			}
			else if (curr == (x-1) && i == 0){
				ft_putchar('\\');
			}
			else if (curr == 0&&i == (y-1)){
				ft_putchar('\\');
			}
			else if (curr == (x-1)&&i == (y-1)){
				ft_putchar('/');
			}
			else if ((i == 0||i == (y-1))){
				ft_putchar('*');
			}
			else if (curr == 0||curr == (x-1)){
				ft_putchar('*');
			}
			else {
				ft_putchar(' ');
			}
			curr++;
		}
		ft_putchar('\n');
		curr = 0;
		i++;
	}
}

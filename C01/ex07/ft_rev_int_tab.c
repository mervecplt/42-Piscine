/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanpola <mcanpola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 08:38:22 by mcanpola          #+#    #+#             */
/*   Updated: 2024/08/20 08:52:49 by mcanpola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_rev_int_tab(int *tab, int size){
	int i;
	int swap;
	
	i = 0;
	while ( i < ( size / 2))
	{
		swap = tab[i];
		tab[i]=tab[size - 1 - i];
		tab[size - 1 - i]=swap;
		i++;
	}
}
int main(){
	int tab[6] = {1,2,3,4,5,6};
	int size = 6;
	ft_rev_int_tab(tab, size);
	printf("%d,%d,%d,%d,%d,%d",tab[0],tab[1],tab[2],tab[3],tab[4],tab[5]);
}

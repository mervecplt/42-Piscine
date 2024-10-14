/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanpola <mcanpola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 09:53:37 by mcanpola          #+#    #+#             */
/*   Updated: 2024/08/20 10:04:11 by mcanpola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_sort_int_tab(int *tab,int size)
{
	int i;
	int exchng;
	
	while(size>0)
	{
		i=0;
		while(i<size-1)
		{
			if(tab[i]>tab[i+1])
			{
				exchng=tab[i];
				tab[i]=tab[i+1];
				tab[i+1]=exchng;
			}
		  i++;
		}
		size--;
	}
}

int main()
{
	int tab[5]={7,9,3,4,2};
	int size = 5;
	ft_sort_int_tab(tab,size);
	printf("%d,%d,%d,%d,%d",tab[0],tab[1],tab[2],tab[3],tab[4]);
	return (0);
}
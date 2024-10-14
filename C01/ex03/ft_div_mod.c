/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanpola <mcanpola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 11:02:27 by mcanpola          #+#    #+#             */
/*   Updated: 2024/08/17 15:42:14 by mcanpola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod){
	
	if(b !=0)
	{
		*div = a/b;
		*mod = a % b;
	}
}

int main()
{
	int a = 1;
	int b = 3;
	int div;
	int mod;

	ft_div_mod(a,b,&div,&mod);
	
	printf("div : %d\n",div);
	printf("div : %d",mod);
}
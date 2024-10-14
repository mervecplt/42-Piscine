/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanpola <mcanpola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 15:46:12 by mcanpola          #+#    #+#             */
/*   Updated: 2024/08/17 15:57:40 by mcanpola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
 
 void	ft_ultimate_div_mod(int *a, int *b){
		int div;
		int mod;
		
		div = *a / *b;
		mod = *a % *b;
		
		*a = div;
		*b = mod;
 }

 int main(){
		int a = 42;
		int b = 5;
		
		ft_ultimate_div_mod(&a,&b);
		printf("a = %d and b = %d", a, b);
		
 }
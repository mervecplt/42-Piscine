/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   merve1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanpola <mcanpola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 11:04:20 by mcanpola          #+#    #+#             */
/*   Updated: 2024/08/19 12:59:51 by mcanpola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void mer(int *a, int *b){
	
	int me;
	me = *a;
	*a = *b;
	*b = me;
	
}

int main()
{
	int a=5;
	int b = 10;
	mer(&a,&b);
	printf("a= %d  b = %d ",a,b);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanpola <mcanpola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 08:23:16 by mcanpola          #+#    #+#             */
/*   Updated: 2024/08/20 08:32:57 by mcanpola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(char *str){
	
	int i;
	i = 0;

	while ( str[i] != '\0')
	{
		i++;
	}
    return i;

}

int main()
{
	char x[] = "dfghjkkl";
	int length = ft_strlen(x);
	printf("%d", length);
}
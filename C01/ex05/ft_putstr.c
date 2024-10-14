/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanpola <mcanpola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 16:00:10 by mcanpola          #+#    #+#             */
/*   Updated: 2024/08/17 16:07:16 by mcanpola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str){
	int i;
	i=0;
	while(str[i] != '\0')
	{
		write(1,&str[i],1);
		i++;
	}
}

int main(void){
	char *message = "Hello world!";
	
	ft_putstr(message);
}
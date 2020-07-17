/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamotaun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 10:13:18 by kamotaun          #+#    #+#             */
/*   Updated: 2020/07/17 08:56:29 by kamotaun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
char* strdup(char* src){
	
	int size = 0;
	while(src[size])
		size++;
	char* cpy = (char*)malloc(sizeof((char)*2048);
	if(cpy == NULL)
		return((char*)NULL);
	int i = 0; 
	while(src[i] != '\0')
		{
			cpy[i] = src[i];
			i++;
		}
	cpy[i] = '\0';

	return cpy;
}

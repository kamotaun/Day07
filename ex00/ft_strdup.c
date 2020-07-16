/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamotaun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 10:13:18 by kamotaun          #+#    #+#             */
/*   Updated: 2020/07/16 10:30:50 by kamotaun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
char* strdup(char* src){
	
	int size = 0;
	while(src[size])
		size++;
	char* cpy = (char*)malloc(sizeof((char)*size + 1));
	if(cpy == NULL)
		return((char*)NULL);

	while(*src)
		*cpy++ = *src++;
	*cpy = '\0';

	return cpy;
}

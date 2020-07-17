/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamotaun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 12:19:19 by kamotaun          #+#    #+#             */
/*   Updated: 2020/07/17 10:02:23 by kamotaun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int *ft_range(int min, int max){
	if(min >=  max)
		return NULL;

	int *table;

	if(!*table)
		return NULL;

    table = (int*)malloc(sizeof(*table)*(max - min));

	int i = 0;

	while(min < max){
		table[i] = min;
		i++; min++;
	}
	return (table);
}

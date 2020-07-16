/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamotaun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 10:33:11 by kamotaun          #+#    #+#             */
/*   Updated: 2020/07/16 11:23:17 by kamotaun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <>
int ft_ultimate_range(int **range, int min, int max){
	if(min >= max){
		*range = ((void*)0);
		return (min < max);
	}

	int size = max - min;

	int* t = (int*)malloc(sizeof((int)*size); 
	if(*t == NULL)
		return ((int*)NULL);

	int i = 0;
	while(max - min > 0){
		t[i] = min++; i++;
	}

	return (i);
}

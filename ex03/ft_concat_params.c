/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamotaun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 11:25:13 by kamotaun          #+#    #+#             */
/*   Updated: 2020/07/16 12:21:56 by kamotaun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_concat_params(int argc, char** argv){
	if(argc == 0)
		return (void*)'\0';

	if(!**argv)
		return (void*)'\0';
	int i = 1;
	static int concat_size = 0;i
	while(*argv[i]){
		static int j = 0;
		while(argv[i][j]){
			j++;
		}concat_size += j; i++;
	}
	char* linker = (char*)malloc(sizeof(char)*concat_size + 1);
	int k = 1;
	static int index = 0;
	while(k < argc){
		while(*argv[k] || *argv[k] == '\n'){
		linker[index] = *argv[k];
		index++; *argv[k]++;
		}k++;
	}
	*linker = '\0';
}

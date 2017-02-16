/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_is_digit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 16:40:29 by cledant           #+#    #+#             */
/*   Updated: 2017/02/16 10:45:27 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_strcat(char *restrict s1, char *restrict s2);

int		main(void)
{
	char	*dst = (char *)malloc(sizeof(char) * 300);
	char	*src = "Ceci est un test HAHAHAHAHAHAHAHAHAHAHAHA";
	char	*ptr;

	bzero(dst, sizeof(char) * 300);
	strcpy(dst, "Patate!");
	printf("str : %s\n", dst);
	ptr = ft_strcat(dst + 5, src + 10);
	printf("apres_ft_strcat\n");
	printf("str : %s\n", dst);
	printf("test ptr\n");
	printf("str : %s\n", ptr);
	return (0);
}

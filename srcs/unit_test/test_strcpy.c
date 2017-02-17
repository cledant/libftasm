/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_is_digit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 16:40:29 by cledant           #+#    #+#             */
/*   Updated: 2017/02/17 15:40:48 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_strcpy(char *dst, const char *src);

int		main(void)
{
	char	*base = "Ceci est un test HAHAHAHAHAHAHAHAHAHAHAHA";
	char	*ptr = NULL;
	char	*ptr2 = NULL;

	printf("str : %s\n", base);
	ptr = (char *)malloc(sizeof(char) * 300);
	bzero(ptr, 300);
	memset(ptr, '0', 299);
	ptr2 = ft_strcpy(ptr + 10, base);
	printf("apres_ft_strcpy\n");
	printf("str : %s\n", ptr);
	printf("str : %s\n", ptr2);
	return (0);
}

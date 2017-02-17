/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_is_digit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 16:40:29 by cledant           #+#    #+#             */
/*   Updated: 2017/02/17 18:53:27 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strnew(size_t size);

int		main(void)
{
	char	*base = "Ceci est un test HAHAHAHAHAHAHAHAHAHAHAHA";
	char	*ptr;

	printf("str : %s\n", base);
	ptr = ft_strnew(strlen(base));
	printf("apres_ft_strnew\n");
	strcpy(ptr, base);
	printf("str : %s\n", ptr);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_is_digit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 16:40:29 by cledant           #+#    #+#             */
/*   Updated: 2017/02/15 18:58:28 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_strdup(const char *s1);

int		main(void)
{
	char	*base = "Ceci est un test HAHAHAHAHAHAHAHAHAHAHAHA";
	char	*ptr = NULL;

	printf("str : %s\n", base);
	ptr = ft_strdup(base);
	printf("apres_ft_strdup\n");
	printf("str : %s\n", ptr);
	return (0);
}

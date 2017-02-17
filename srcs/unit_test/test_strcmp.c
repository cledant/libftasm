/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_is_digit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 16:40:29 by cledant           #+#    #+#             */
/*   Updated: 2017/02/17 20:03:47 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len);

int		main(void)
{
	char	*test = "";
	char	*test2 = "A";
	int		res1;
	int		res2;

	res1 = ft_strcmp(test, test2);
	res2 = strcmp(test, test2);
	printf("res ft_strcmp : %d\n", res1);
	printf("res strcmp : %d\n", res2);
	return (0);
}

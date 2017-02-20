/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_is_digit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 16:40:29 by cledant           #+#    #+#             */
/*   Updated: 2017/02/14 17:32:08 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_isdigit(int c);

int		main(void)
{
	int		c;

	c = '5';
	if (ft_isdigit(c) == 1)
	{
		printf("OK\n");
		return (0);
	}
	printf("NOP\n");
	return (0);
}

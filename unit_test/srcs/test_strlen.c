/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_is_digit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 16:40:29 by cledant           #+#    #+#             */
/*   Updated: 2017/02/15 12:42:23 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlen(const char *s);

int		main(void)
{
	size_t	len;
	char	*test = "Test this";

	len = ft_strlen(test);
	printf("size : %ld\n", len);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_is_digit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 16:40:29 by cledant           #+#    #+#             */
/*   Updated: 2017/02/15 19:50:21 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_tolower(int c);

int		main(void)
{
	char	*test = (char *)malloc(sizeof(char) * 200);
	char	*base = "CeCi EsT uN tEsT HaHaHaHaHOHOHOHOHoHoHoHoHoHAHIHIHIHI ZZZZZZ";
	size_t	i = 0;

	bzero(test, sizeof(char) * 200);
	memcpy(test, base, strlen(base));
	printf("str : %s\n", base);
	while (test[i] != '\0')
	{
		test[i] = ft_tolower(test[i]);
		i++;
	}
	printf("str : %s\n", test);
	return (0);
}

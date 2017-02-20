/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_is_digit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 16:40:29 by cledant           #+#    #+#             */
/*   Updated: 2017/02/15 19:54:08 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_toupper(int c);

int		main(void)
{
	char	*test = (char *)malloc(sizeof(char) * 200);
	char	*base = "CeCi EsT uN tEsT HaHaHaHaHOHOHOHOHoHoHoHoHoHAHIHIHIHI zzzzz";
	size_t	i = 0;

	bzero(test, sizeof(char) * 200);
	memcpy(test, base, strlen(base));
	printf("str : %s\n", base);
	while (test[i] != '\0')
	{
		test[i] = ft_toupper(test[i]);
		i++;
	}
	printf("str : %s\n", test);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_toupper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/20 13:06:49 by cledant           #+#    #+#             */
/*   Updated: 2017/02/20 13:08:27 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main_test.h"
#include "libfts.h"

void	test_toupper(void)
{
	char	*test = (char *)malloc(sizeof(char) * 200);
	char	*base = "0123456789-{[]}!<>?``||+=~_/@: CeCi EsT uN tEsT HaHaHaHaHOHOHOHOHoHoHoHoHoHAHIHIHIHI zzzzz";
	size_t	i = 0;

	printf("========FT_TOUPPER========\n\n");
	printf("Test String 1 :\n%s\n", base);
	bzero(test, sizeof(char) * 200);
	memcpy(test, base, strlen(base));
	while (test[i] != '\0')
	{
		test[i] = ft_toupper(test[i]);
		i++;
	}
	printf("Test ft_toupper :\n%s\n", test);
	i = 0;
	bzero(test, sizeof(char) * 200);
	memcpy(test, base, strlen(base));
	while (test[i] != '\0')
	{
		test[i] = toupper(test[i]);
		i++;
	}
	printf("Test ft_toupper :\n%s\n", test);
	printf("========FT_TOUPPER========\n\n");
	free(test);
}

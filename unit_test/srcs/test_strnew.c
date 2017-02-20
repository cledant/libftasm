/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_is_digit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 16:40:29 by cledant           #+#    #+#             */
/*   Updated: 2017/02/20 19:31:33 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main_test.h"
#include "libfts.h"

void	test_strnew(void)
{
	char	*base = "Ceci est un test HAHAHAHAHAHAHAHAHAHAHAHA";
	char	*ptr;

	printf("========BONUS FT_STRNEW========\n\n");
	printf("====TEST1====");
	printf("String that will be copied after ft_strnew:\n%s\n", base);
	ptr = ft_strnew(strlen(base));
	strcpy(ptr, base);
	printf("Copied string:\n%s\n", ptr);
	free(ptr);
	printf("====TEST2====\n");
	printf("Will be a size 0 string\n");
	ptr = ft_strnew(0);
	printf("Size 0 string:\n%s\n", ptr);
	free(ptr);
	printf("========FIN BONUS FT_STRNEW========\n\n");
}

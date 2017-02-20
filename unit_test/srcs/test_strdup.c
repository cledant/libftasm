/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strdup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/20 15:44:04 by cledant           #+#    #+#             */
/*   Updated: 2017/02/20 15:53:33 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfts.h"
#include "main_test.h"

void	test_strdup(void)
{
	char	*test1 = "";
	char	*test3 = "Bonjour !";
	char	*test4 = "This is a test \0toto\0lol\n";
	char	*ptr;
	char	*ptr2;

	printf("========TEST FT_STRDUP========\n\n");
	printf("====TEST1====\n");
	ptr = ft_strdup(test1);
	ptr2 = strdup(test1);
	printf("Base String 1\n%s\n", test1);
	printf("String 1 with ft_strdup:\n%s\n", ptr);
	printf("String 1 with strdup:\n%s\n", ptr2);
	free(ptr);
	free(ptr2);
	printf("====TEST2====\n");
	ptr = ft_strdup(test3);
	ptr2 = strdup(test3);
	printf("Base String 1\n%s\n", test3);
	printf("String 1 with ft_strdup:\n%s\n", ptr);
	printf("String 1 with strdup:\n%s\n", ptr2);
	free(ptr);
	free(ptr2);
	printf("====TEST3====\n");
	ptr = ft_strdup(test4);
	ptr2 = strdup(test4);
	printf("Base String 1\n%s\n", test4);
	printf("String 1 with ft_strdup:\n%s\n", ptr);
	printf("String 1 with strdup:\n%s\n", ptr2);
	free(ptr);
	free(ptr2);
	printf("========FIN TEST FT_STRDUP========\n\n");
}

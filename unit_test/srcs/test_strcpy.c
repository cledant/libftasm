/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/20 19:50:29 by cledant           #+#    #+#             */
/*   Updated: 2017/02/21 10:21:04 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfts.h"
#include "main_test.h"

void	test_strcpy(void)
{
	char	*dst = (char *)malloc(sizeof(char) * 300);
	char	*src = "Ceci-est-un-test-HAHAHAHAHAHAHAHAHAHAHAHA";
	char	*src_empty = "";
	char	*ptr;

	printf("========BONUS TEST STRCPY========\n\n");
	printf("====TEST 1====\n");						//TEST 1
	bzero(dst, sizeof(char) * 300);
	printf("String in dst:\n%s\n", dst);
	printf("Base string s2:\n%s\n", src);
	ptr = ft_strcpy(dst, src);
	printf("Test ft_strcpy :\n%s\n", dst);
	printf("Test ft_strcpy return :\n%s\n", ptr);
	bzero(dst, sizeof(char) * 300);
	ptr = strcpy(dst, src);
	printf("Test strcpy :\n%s\n", dst);
	printf("Test strcpy return :\n%s\n", ptr);
	printf("====TEST 2====\n");						//TEST 1
	bzero(dst, sizeof(char) * 300);
	memset(dst, '0', 50);
	printf("String in dst:\n%s\n", dst);
	printf("Base string s2:\n%s\n", src_empty);
	ptr = ft_strcpy(dst, src_empty);
	printf("Test ft_strcpy :\n%s\n", dst);
	printf("Test ft_strcpy return :\n%s\n", ptr);
	bzero(dst, sizeof(char) * 300);
	bzero(dst, sizeof(char) * 300);
	memset(dst, '0', 50);
	ptr = strcpy(dst, src_empty);
	printf("Test strcpy :\n%s\n", dst);
	printf("Test strcpy return :\n%s\n", ptr);
	printf("====TEST 3====\n");						//TEST 1
	bzero(dst, sizeof(char) * 300);
	memset(dst, '0', 50);
	printf("String in dst:\n%s\n", dst);
	printf("Base string s2:\n%s\n", src);
	ptr = ft_strcpy(dst + 10, src + 5);
	printf("Test ft_strcpy :\n%s\n", dst);
	printf("Test ft_strcpy return :\n%s\n", ptr);
	bzero(dst, sizeof(char) * 300);
	bzero(dst, sizeof(char) * 300);
	memset(dst, '0', 50);
	ptr = strcpy(dst + 10, src + 5);
	printf("Test strcpy :\n%s\n", dst);
	printf("Test strcpy return :\n%s\n", ptr);
	printf("========FIN BONUS TEST STRCPY========\n\n");
	free(dst);
}

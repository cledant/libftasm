/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_is_digit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 16:40:29 by cledant           #+#    #+#             */
/*   Updated: 2017/02/20 20:09:49 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfts.h"
#include "main_test.h"

void	test_strcat(void)
{
	char	*dst = (char *)malloc(sizeof(char) * 300);
	char	*src = "Ceci est un test HAHAHAHAHAHAHAHAHAHAHAHA";
	char	*src_empty = "";
	char	*ptr;

	printf("========TEST STRCAT========\n\n");
	printf("====TEST 1====\n");						//TEST 1
	bzero(dst, sizeof(char) * 300);
	strcpy(dst, "Patate!");
	printf("Base string s1:\n%s\n", dst);
	printf("Base string s2:\n%s\n", src);
	ptr = ft_strcat(dst + 5, src + 10);
	printf("Test ft_strcat :\n%s\n", dst);
	printf("Test ft_strcat return :\n%s\n", ptr);
	bzero(dst, sizeof(char) * 300);
	strcpy(dst, "Patate!");
	ptr = strcat(dst + 5, src + 10);
	printf("Test strcat :\n%s\n", dst);
	printf("Test strcat return :\n%s\n", ptr);
	printf("====TEST 2====\n");						//TEST 2
	bzero(dst, sizeof(char) * 300);
	strcpy(dst, "Patate!");
	printf("Base string s1:\n%s\n", dst);
	printf("Base string s2:\n%s\n", src);
	ptr = ft_strcat(dst, src);
	printf("Test ft_strcat :\n%s\n", dst);
	printf("Test ft_strcat return :\n%s\n", ptr);
	bzero(dst, sizeof(char) * 300);
	strcpy(dst, "Patate!");
	ptr = strcat(dst, src);
	printf("Test strcat :\n%s\n", dst);
	printf("Test strcat return :\n%s\n", ptr);
	printf("====TEST 3====\n");						//TEST 3
	bzero(dst, sizeof(char) * 300);
	printf("Base string s1:\n%s\n", dst);
	printf("Base string s2:\n%s\n", src);
	ptr = ft_strcat(dst, src);
	printf("Test strcat :\n%s\n", dst);
	printf("Test strcat return :\n%s\n", ptr);
	bzero(dst, sizeof(char) * 300);
	ptr = strcat(dst, src);
	printf("Test strcat :\n%s\n", dst);
	printf("Test strcat return :\n%s\n", ptr);
	printf("====TEST 4====\n");						//TEST 4
	bzero(dst, sizeof(char) * 300);
	strcpy(dst, "Patate!");
	printf("Base string s1:\n%s\n", dst);
	printf("Base string s2:\n%s\n", src_empty);
	ptr = ft_strcat(dst, src_empty);
	printf("Test ft_strcat :\n%s\n", dst);
	printf("Test ft_strcat return :\n%s\n", ptr);
	bzero(dst, sizeof(char) * 300);
	strcpy(dst, "Patate!");
	ptr = strcat(dst, src_empty);
	printf("Test strcat :\n%s\n", dst);
	printf("Test strcat return :\n%s\n", ptr);
	printf("====TEST 5====\n");						//TEST 5
	bzero(dst, sizeof(char) * 300);
	printf("Base string s1:\n%s\n", dst);
	printf("Base string s2:\n%s\n", src_empty);
	ptr = ft_strcat(dst, src_empty);
	printf("Test ft_strcat :\n%s\n", dst);
	printf("Test ft_strcat return :\n%s\n", ptr);
	bzero(dst, sizeof(char) * 300);
	ptr = strcat(dst, src_empty);
	printf("Test strcat :\n%s\n", dst);
	printf("Test strcat return :\n%s\n", ptr);
	printf("========FIN TEST STRCAT========\n\n");
	free(dst);
}

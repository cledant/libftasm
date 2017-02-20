/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/20 16:40:00 by cledant           #+#    #+#             */
/*   Updated: 2017/02/20 16:53:49 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main_test.h"
#include "libfts.h"

void	test_strcmp(void)
{
	char	*str1a = "AAAB";
	char	*str1b = "AAAC";
	char	*str2a = "";
	char	*str2b = "tutu";
	char	*str3 = "";
	char	*str4a = "LOL ";
	char	*str4b = "LOL \0HIDDEN\0haha";
	int		res1;
	int		res2;

	printf("========BONUS FT_STRCMP========\n\n");
	printf("====TEST1====\n");
	res1 = ft_strcmp(str1a, str1b);
	res2 = strcmp(str1a, str1b);
	printf("Str 1 :\n%s\nStr 2 :\n%s\n", str1a, str1b);
	printf("Result ft_strcmp : %d\n", res1);
	printf("Result strcmp : %d\n", res2);
	printf("====TEST2====\n");
	res1 = ft_strcmp(str1b, str1a);
	res2 = strcmp(str1b, str1a);
	printf("Str 1 :\n%s\nStr 2 :\n%s\n", str1b, str1a);
	printf("Result ft_strcmp : %d\n", res1);
	printf("Result strcmp : %d\n", res2);
	printf("====TEST3====\n");
	res1 = ft_strcmp(str2a, str2b);
	res2 = strcmp(str2a, str2b);
	printf("Str 1 :\n%s\nStr 2 :\n%s\n", str2a, str2b);
	printf("Result ft_strcmp : %d\n", res1);
	printf("Result strcmp : %d\n", res2);
	printf("====TEST4====\n");
	res1 = ft_strcmp(str2b, str2a);
	res2 = strcmp(str2b, str2a);
	printf("Str 1 :\n%s\nStr 2 :\n%s\n", str2b, str2a);
	printf("Result ft_strcmp : %d\n", res1);
	printf("Result strcmp : %d\n", res2);
	printf("====TEST5====\n");
	res1 = ft_strcmp(str3, str2a);
	res2 = strcmp(str3, str2a);
	printf("Str 1 :\n%s\nStr 2 :\n%s\n", str3, str2a);
	printf("Result ft_strcmp : %d\n", res1);
	printf("Result strcmp : %d\n", res2);
	printf("====TEST6====\n");
	res1 = ft_strcmp(str4a, str4b);
	res2 = strcmp(str4a, str4b);
	printf("Str 1 :\n%s\nStr 2 :\n%s\n", str4a, str4b);
	printf("Result ft_strcmp : %d\n", res1);
	printf("Result strcmp : %d\n", res2);
	printf("========FIN BONUS FT_STRCMP========\n\n");
}

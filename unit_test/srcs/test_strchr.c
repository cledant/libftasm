/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/20 18:03:20 by cledant           #+#    #+#             */
/*   Updated: 2017/02/20 19:06:10 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main_test.h"
#include "libfts.h"

void	test_strchr(void)
{
	char	*str1 = "AAABAAA";
	char	*str2 = "LOL \0HIDDEN\0haha";
	char	*str3 = "";
	char	*ptr;
	char	*ptr2;
	int		c1 = 'B';
	int		c2 = 'C';
	int		c3 = '\0';

	printf("========BONUS FT_STRCHR========\n\n");
	printf("====TEST1====\n");
	printf("Str 1 :\n%s\n", str1);
	printf("Char to find :\n%c\n", c1);
	ptr = ft_strchr(str1, c1);
	ptr2 = strchr(str1, c1);
	printf("Ft_strcmp result:\n%s\n", ptr);
	printf("Strcmp result:\n%s\n", ptr2);
	printf("====TEST2====\n");
	printf("Str 1 :\n%s\n", str2);
	printf("Char to find :\n%c\n", c3);
	ptr = ft_strchr(str1, c3);
	ptr2 = strchr(str1, c3);
	printf("Ft_strcmp result:\n%s\n", ptr);
	printf("Strcmp result:\n%s\n", ptr2);
	printf("====TEST2====\n");
	printf("Str 1 :\n%s\n", str1);
	printf("Char to find :\n%c\n", c2);
	ptr = ft_strchr(str1, c2);
	ptr2 = strchr(str1, c2);
	printf("Ft_strcmp result:\n%s\n", ptr);
	printf("Strcmp result:\n%s\n", ptr2);
	printf("====TEST3====\n");
	printf("Str 1 :\n%s\n", str3);
	printf("Char to find :\n%c\n", c2);
	ptr = ft_strchr(str3, c2);
	ptr2 = strchr(str3, c2);
	printf("Ft_strcmp result:\n%s\n", ptr);
	printf("Strcmp result:\n%s\n", ptr2);
	printf("========FIN BONUS FT_STRCHR========\n\n");
}

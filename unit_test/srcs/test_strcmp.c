/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_is_digit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 16:40:29 by cledant           #+#    #+#             */
/*   Updated: 2017/02/19 13:10:20 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strcmp(const char *s1, const char *s2);

int		main(void)
{
	char	*test = "AAAB";
	char	*test2 = "AAAC";
	int		res1;
	int		res2;

	res1 = ft_strcmp(test, test2);
	res2 = strcmp(test, test2);
	printf("res ft_strcmp : %d\n", res1);
	printf("res strcmp : %d\n", res2);
	return (0);
}

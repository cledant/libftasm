/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ret.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/16 17:17:57 by cledant           #+#    #+#             */
/*   Updated: 2017/02/16 17:20:51 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		bzero(void *ptr, size_t n);

int main (void)
{
	int ret = 1;
	char *ptr = NULL;

	ptr = (char *)malloc(sizeof(char) * 100);
	ret = bzero(ptr, 100);
	printf("ret : %d\n", ret);
	return (0);
}

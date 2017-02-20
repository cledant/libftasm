/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_cat_file.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/16 18:32:47 by cledant           #+#    #+#             */
/*   Updated: 2017/02/20 15:59:53 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main_test.h"
#include "libfts.h"

int		main(int argc, char **argv)
{
	int		fd;

	if (argc == 1 || argc > 2)
		return (0);
	fd = open(argv[1], O_RDONLY);
	ft_cat(fd);
	close(fd);
	return (0);
}

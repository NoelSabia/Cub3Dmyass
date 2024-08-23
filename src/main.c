/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabia <nsabia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 12:38:53 by nsabia            #+#    #+#             */
/*   Updated: 2024/08/23 16:30:09 by nsabia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/cub3d.h"

void	clean_exit(char *str)
{
	printf("Error\n");
	printf("%s\n", str);
	ft_free_all();
	exit(EXIT_FAILURE);
}


int	main(int argc, char *argv[])
{
	t_mlx	*mlx;

	if (argc < 2 || argc > 2)
		clean_exit("Usage: ./Cub3d <filename>.cub\n");
	mlx = ft_calloc(1, sizeof(t_mlx));
	mlx->parse = ft_calloc(1, sizeof(t_parsing));
	// mlx->ply = ft_calloc(1, sizeof(t_player));
	// mlx->ray = ft_calloc(1, sizeof(t_raytracing));
	// mlx->key_data = ft_calloc(1, sizeof(mlx_key_data_t));
	// mlx->f_txt = ft_calloc(1, sizeof(t_texture));
	mlx->mlx_p = mlx_init(SCREEN_WIDTH, SCREEN_HEIGHT, "Cub3D", 0);
	parsing(mlx, argv[1]);
	// init(mlx);
	ft_free_all();
	return (0);
}
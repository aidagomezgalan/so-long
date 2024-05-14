/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   msg.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aidgomez <aidgomez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 13:30:33 by aidgomez          #+#    #+#             */
/*   Updated: 2024/02/27 12:45:20 by aidgomez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	print_error(char *msg)
{
	ft_printf("Error\n");
	ft_printf("%s\n", msg);
}

void	print_end_game(char *msg)
{
	ft_printf("\n***********************\n");
	ft_printf("%s", msg);
	ft_printf("\n***********************\n");
	ft_printf("\nPulsa ESC para salir del juego\n\n");
}

void	print_instructions_game(void)
{
	ft_printf("\n***********************\n");
	ft_printf("|  GAME INSTRUCTIONS  |");
	ft_printf("\n***********************\n\n");
	ft_printf("Collect all the donuts.\n");
	ft_printf("Go to the wc.");
	ft_printf("\n------------------------------\n\n");
}

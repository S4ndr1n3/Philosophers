/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: santonie <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 12:51:31 by santonie            #+#    #+#             */
/*   Updated: 2022/06/29 12:51:34 by santonie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	main(int argc, char **argv)
{
	t_option	option;
	t_table		table;

	if (ft_parse_option(&option, argc, argv))
		return (ft_print_help());
	return (ft_init_table(&table, option));
}

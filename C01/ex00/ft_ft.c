/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flunkademic <flunkademic@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 22:01:03 by flunkademic       #+#    #+#             */
/*   Updated: 2025/10/11 14:20:43 by flunkademic      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    ft_ft(int *nbr)
{
    *nbr = 42;
}
int	main(void)
{
	int		number;

	ft_ft(&number);
	printf("%d\n", number);
    return (0);
}

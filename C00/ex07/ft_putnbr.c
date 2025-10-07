/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flunkademic <flunkademic@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 18:28:11 by flunkademic       #+#    #+#             */
/*   Updated: 2025/10/07 18:41:29 by flunkademic      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>

void    ft_putnbr(int nbr)
{
    char c;

    if (nbr == INT_MIN)
    {
        write(1, "-2147483648", 11);
        return;
    }
    if (nbr < 0)
    {
        write(1, "-", 1);
        nbr = -nbr;
    }
    if (nbr > 9)
        ft_putnbr(nbr / 10);

    c = nbr % 10 + '0';
    write(1, &c, 1);
}

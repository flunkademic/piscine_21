/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flunkademic <flunkademic@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 18:12:09 by flunkademic       #+#    #+#             */
/*   Updated: 2025/10/07 18:27:55 by flunkademic      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_print_comb2(void)
{
    char    x;
    char    y;

    x = '0';
    while (x <= 98)
    {
        y = x + 1;
        while (y <= 99)
        {
            char xt = x / 10 + '0';
            char xo = x % 10 + '0';
            char yt = y / 10 + '0';
            char yo = y % 10 + '0';

            write(1, &xt, 1);   /* OR write(1, &(char){x / 10 + '0'}, 1);*/
            write(1, &xo, 1);
            write(1, " ", 1);
            write(1, &yt, 1);
            write(1, &yo, 1);
            if (!(x == 98 && y == 99))
                write(1, ", ", 2);
            y++;
        }
        x++;
    }
}

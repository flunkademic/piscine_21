/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   07_main_putnbr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flunkademic <flunkademic@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 18:39:41 by flunkademic       #+#    #+#             */
/*   Updated: 2025/10/07 18:40:34 by flunkademic      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>

void    ft_putnbr(int nbr);

int main(void)
{
    ft_putnbr(INT_MAX);  // 2147483647
    write(1, "\n", 1);
    ft_putnbr(INT_MIN);  // -2147483648
    write(1, "\n", 1);
    ft_putnbr(42);       // 42
    write(1, "\n", 1);
    ft_putnbr(0);        // 0
    write(1, "\n", 1);
    ft_putnbr(-42);      // -42
    write(1, "\n", 1);
    return 0;
}

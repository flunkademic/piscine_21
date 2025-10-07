/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_main_is_negative.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flunkademic <flunkademic@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 17:00:51 by flunkademic       #+#    #+#             */
/*   Updated: 2025/10/07 17:07:05 by flunkademic      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>

void    ft_is_negative(int n);

int main(void)
{
    ft_is_negative(INT_MAX);
    write(1, "\n", 1);
    ft_is_negative(42);
    write(1, "\n", 1);
    ft_is_negative(0);
    write(1, "\n", 1);
    ft_is_negative(-42);
    write(1, "\n", 1);
    ft_is_negative(INT_MIN);
    write(1, "\n", 1);
    return (0);
}
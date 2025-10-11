/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flunkademic <flunkademic@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 19:12:04 by flunkademic       #+#    #+#             */
/*   Updated: 2025/10/11 19:25:06 by flunkademic      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
    int temp_div;
    int temp_mod;

    if (b == 0) {
        // Handle error - division by zero!
        printf("Error: Division by zero!\n");
        return;
    }

    temp_div = *a / *b;
    temp_mod = *a % *b;
    *a = temp_div;
    *b = temp_mod;
}

int main(void)
{
    int x = 10;
    int y = 3;
    
    printf("Before: x=%d, y=%d\n", x, y);
    ft_ultimate_div_mod(&x, &y);
    printf("After: x=%d, y=%d\n", x, y);
    return (0);
}

/*
void ft_ultimate_div_mod(int *a, int *b)
{
    int original_a = *a;  // Save original value
    int original_b = *b;  // Save original value
    
    *a = original_a / original_b;
    *b = original_a % original_b;
}
*/
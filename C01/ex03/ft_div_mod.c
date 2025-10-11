/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flunkademic <flunkademic@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 17:15:53 by flunkademic       #+#    #+#             */
/*   Updated: 2025/10/11 19:21:32 by flunkademic      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
    if (b == 0) {
        // Handle error - division by zero!
        printf("Error: Division by zero!\n");
        *div = 0;  // Or some error value
        *mod = 0;  // Or some error value
        return;
    }
    
    *div = a / b;    // Store division result where div points
    *mod = a % b;    // Store modulus result where mod points
}

int main(void)
{
    int x = 10;
    int y = 3;
    int division_result;    // Will store a/b result
    int modulus_result;     // Will store a%b result

    // Pass ADDRESSES so ft_div_mod can modify these variables
    ft_div_mod(x, y, &division_result, &modulus_result);
    
    printf("x=%d, y=%d, division=%d, modulus=%d\n", 
           x, y, division_result, modulus_result);
    return (0);
}
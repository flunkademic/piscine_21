/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flunkademic <flunkademic@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 22:18:40 by flunkademic       #+#    #+#             */
/*   Updated: 2025/10/11 14:21:22 by flunkademic      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_ultimate_ft(int *********nbr)
{
    *********nbr = 42;
}

int main(void)
{
    int nbr;
    int *ptr9 = &nbr;
    int **ptr8 = &ptr9;
    int ***ptr7 = &ptr8;
    int ****ptr6 = &ptr7;
    int *****ptr5 = &ptr6;
    int ******ptr4 = &ptr5;
    int *******ptr3 = &ptr4;
    int ********ptr2 = &ptr3;
    int *********ptr1 = &ptr2;

    ft_ultimate_ft(ptr1);
    printf("%d\n", nbr); 
    return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_main_print_alphabet.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flunkademic <flunkademic@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 15:59:16 by flunkademic       #+#    #+#             */
/*   Updated: 2025/10/07 16:39:43 by flunkademic      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/* Function prototype */
void ft_print_alphabet(void);

int main(void)
{
    ft_print_alphabet();
    write(1, "\n", 1);
    return (0);
}

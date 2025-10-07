/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_main_print_reverse_alphabet.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flunkademic <flunkademic@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 16:45:09 by flunkademic       #+#    #+#             */
/*   Updated: 2025/10/07 16:48:42 by flunkademic      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/* Function prototype */
void    ft_print_reverse_alphabet(void);

int main(void)
{
    ft_print_reverse_alphabet();
    write(1, "\n", 1);
    return (0);
}
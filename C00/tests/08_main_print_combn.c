/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   08_main_print_combn.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flunkademic <flunkademic@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 21:16:20 by flunkademic       #+#    #+#             */
/*   Updated: 2025/10/07 21:16:41 by flunkademic      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_combn(int n);

int main(void)
{
    ft_print_combn(6);
    write(1, "\n", 1);
    return 0;
}

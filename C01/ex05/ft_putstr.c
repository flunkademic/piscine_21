/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flunkademic <flunkademic@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 19:16:29 by flunkademic       #+#    #+#             */
/*   Updated: 2025/10/11 19:45:32 by flunkademic      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        write(1, &str[i], 1);
        i++;
    }
}
int main(void)
{
    ft_putstr("string");
    write(1, "\n", 1);
    return (0);
}

/*
void ft_putstr(char *str)
{
    while (*str != '\0')    // Dereference the pointer directly
    {
        write(1, str, 1);   // str is already a pointer
        str++;              // Move pointer to next character
    }
}

void ft_putstr(char *str)
{
    while (*str)           // *str != '\0' is implied
    {
        write(1, str++, 1); // Increment in the same line
    }
}
*/
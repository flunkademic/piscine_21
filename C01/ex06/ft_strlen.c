/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flunkademic <flunkademic@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 19:47:04 by flunkademic       #+#    #+#             */
/*   Updated: 2025/10/11 19:55:08 by flunkademic      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(char *str)
{
    int i = 0;
    
    while (str[i] != '\0')  // Or while (*str)
    {
        i++;
    }
    return i;
}

int main(void)
{
    ft_strlen("halloween");
    printf("'hello' length: %d\n", ft_strlen("hello"));
    printf("'42' length: %d\n", ft_strlen("42"));  
    printf("'' length: %d\n", ft_strlen(""));
    printf("'a' length: %d\n", ft_strlen("a"));
    return (0);
}

/*
int ft_strlen(char *str)
{
    char *start = str;  // Remember where we started
    
    while (*str)        // Loop to the end
    {
        str++;
    }
    
    return str - start; // Distance from start to end = length!
}
*/
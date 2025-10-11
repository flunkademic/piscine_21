/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flunkademic <flunkademic@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 14:21:29 by flunkademic       #+#    #+#             */
/*   Updated: 2025/10/11 17:03:41 by flunkademic      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_swap(int *a, int *b)
{
    int temp;
    
    temp = *a;  // Store the VALUE pointed to by a
    *a = *b;    // Assign the VALUE pointed to by b to the location pointed to by a
    *b = temp;  // Assign the stored VALUE to the location pointed to by b
}

int main(void)
{
    int x = 42;
    int y = 36;
    
    printf("Before: x = %d, y = %d\n", x, y);
    ft_swap(&x, &y);
    printf("After: x = %d, y = %d\n", x, y);
    
    return (0);
}


/*/ Memory Trick:
&variable → "Where do you live?"

*pointer → "What's inside your house?"

You don't ask "What's inside where you live?" → that's *&variable (redundant!)

🧩 LET'S BUILD A PHYSICAL ANALOGY
Imagine a treasure hunt:

text
x = 5:          [Treasure chest with "5" inside]
ptr1 = &x:      [Map #1 that leads to the treasure chest]  
ptr2 = &ptr1:   [Map #2 that leads to Map #1]
*ptr1 = "Follow Map #1 to get the treasure" = 5

**ptr2 = "Follow Map #2 to Map #1, then follow Map #1 to get treasure" = 5

&ptr1 = "Where can I find Map #1?" = address of ptr1

mystery(&ptr1) = "Give me the location of Map #1 so I can modify what it points to!"
*/
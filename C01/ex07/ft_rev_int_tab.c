/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flunkademic <flunkademic@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 19:55:38 by flunkademic       #+#    #+#             */
/*   Updated: 2025/10/11 20:51:45 by flunkademic      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
    int start;
    int end;
    int temp;

    start = 0;
    end = size - 1;
    while (start < end)
    {
        temp = tab[start];
        tab[start] = tab[end];
        tab[end] = temp;
        
        start++;
        end--;
    }
}

int main(void)
{
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {10, 20, 30};
    int arr3[] = {42};
    
    // Test 1
    printf("Before: ");
    for (int i = 0; i < 5; i++) printf("%d ", arr1[i]);
    ft_rev_int_tab(arr1, 5);
    printf("\nAfter:  ");
    for (int i = 0; i < 5; i++) printf("%d ", arr1[i]);
    printf("\n\n");
    
    // Test 2  
    printf("Before: ");
    for (int i = 0; i < 3; i++) printf("%d ", arr2[i]);
    ft_rev_int_tab(arr2, 3);
    printf("\nAfter:  ");
    for (int i = 0; i < 3; i++) printf("%d ", arr2[i]);
    printf("\n\n");
    
    return (0);
}


/*
1. POINTERS + ARRAYS ARE THE SAME

int arr[3] = {1, 2, 3};
int *ptr = arr;

// These are identical:
arr[1] = 10;
*(arr + 1) = 10;
ptr[1] = 10;
*(ptr + 1) = 10;



// 
What if we wanted to write this using your original ft_swap function?

void ft_swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void ft_rev_int_tab(int *tab, int size) {
    int start = 0;
    int end = size - 1;
    
    while (start < end) {
        ft_swap(&tab[start], &tab[end]);  // Reuse your swap function!
        start++;
        end--;
    }
}
*/
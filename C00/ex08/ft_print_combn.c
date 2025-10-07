/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flunkademic <flunkademic@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 18:42:33 by flunkademic       #+#    #+#             */
/*   Updated: 2025/10/07 21:16:11 by flunkademic      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_combn(int n)
{
	char	arr[10];
	int		i;

	if (n <= 0 || n >= 10)
		return ;

    i = 0; // initialize array with '0', '1', '2', ...
	while (i < n)
	{
		arr[i] = '0' + i;
		i++;
	}
	while (1)
	{
		write(1, arr, n); // print current combination
		if (arr[0] == '9' - n + 1) // check if this is the last one (starts with 9 - n + 1)
			break;
		write(1, ", ", 2);
		i = n - 1; // find the rightmost position we can increment
		while (i >= 0 && arr[i] == '9' - (n - 1 - i))
			i--;
		arr[i]++;
		while (++i < n) // reset all following digits
			arr[i] = arr[i - 1] + 1;
	}
}

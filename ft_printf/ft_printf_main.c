/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <misidori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 16:27:43 by misidori          #+#    #+#             */
/*   Updated: 2023/02/22 16:48:26 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	char			stringa[]   = "Ciao mamma";
	int				len;
	int				ft_len;
	char			carattere   = 'C';
	int				integer     = -42;
	int				esadecimale = 0xa4daeb3;
	int				array_i[]   = {1, 2, 3, 4};
	unsigned int	u_integer   = 42;

	ft_put_str("\n__PRINTF__\n");
	printf("Stringa: %s\t\tChar: %c\t\t\t%%: %%\t\tIntegerD: %d\n", stringa, carattere, integer);
	printf("Unsigned Int: %u\t\tIntegerI: %i\t\t\t\tAddress *str: %p\n", u_integer, integer, stringa);
	printf("Address *int: %p\tEsadecimale piccolo Int: %x\tEsadecimale grande int: %X\n", array_i, esadecimale, esadecimale);
	ft_put_str("\nAddress *str: ");
	len = printf("%p", stringa);
	printf(" di [%d] caratteri\n", len);
	printf("L'indirizzo di memoria di integer = -42 è: %p\n", &integer);
	printf("Se l'indirizzo fornito é NULL, il ritorno é %p\n", NULL);

	ft_put_str("\n__FT_PRINTF__\n");
	ft_printf("Stringa: %s\t\tChar: %c\t\t\t%%: %%\t\tIntegerD: %d\n", stringa, carattere, integer);
	ft_printf("Unsigned Int: %u\t\tIntegerI: %i\t\t\t\tAddress *str: %p\n", u_integer, integer, stringa);
	ft_printf("Address *int: %p\tEsadecimale piccolo Int: %x\tEsadecimale grande int: %X\n", array_i, esadecimale, esadecimale);
	ft_printf("\nAddress *str: ");
	ft_len = ft_printf("%p", stringa);
	ft_printf(" di [%d] caratteri\n", ft_len);
	ft_printf("L'indirizzo di memoria di integer = -42 x è: %p\n", &integer);
	ft_printf("Se l'indirizzo fornito é NULL, il ritorno é %p\n\n", NULL);

	return (0);
}

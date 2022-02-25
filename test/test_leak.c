/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_leak.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 15:16:20 by samajat           #+#    #+#             */
/*   Updated: 2022/02/13 15:26:39 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char *p = (char *) malloc(12);
    p = 0; // the leak is here
    printf("Hello, leak!\n");
    return 0;
}


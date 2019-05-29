/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GOL.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patrisor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 20:48:08 by patrisor          #+#    #+#             */
/*   Updated: 2019/05/28 04:31:13 by patrisor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GOF_H
# define GOF_H
# include "libft.h"
# include <X11/Xlib.h>
// TODO: Delete
# include <stdio.h>

# define GRID_HEIGHT 50
# define GRID_WIDTH 55
# define USER_PROMPT "Movement Controls:\na = left, d = right, w = up, s = down"

typedef struct	s_cell
{
	int			x;
	int			y;
	// TODO: Build oscillator
	// TODO: Build glider (ant)
}				t_cell;

#endif

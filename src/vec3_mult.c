/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_mult.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scollon <scollon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/08 12:39:37 by scollon           #+#    #+#             */
/*   Updated: 2016/02/08 13:30:35 by scollon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libvect.h"

t_vect3d	vec3_mult(const t_vect3d v3a, const float mult)
{
	t_vect3d	r;

	r.x = v3a.x * mult;
	r.y = v3a.y * mult;
	r.z = v3a.z * mult;
	return (r);
}

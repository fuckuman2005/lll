/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymiroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 16:09:12 by ymiroshn          #+#    #+#             */
/*   Updated: 2024/12/18 16:09:13 by ymiroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H
# define FT_ABS_H

# define ABS(Value) (Value < 0 ? -Value : Value)

#endif
/*
 value < 0 ? est un operateur conditionnel qui verifie
 si la valeur est inferieur a 0.
 si elle est vraie, elle retour -value qui est l'opposee.
 sinon elle retourne la valeur telle quelle.
*/

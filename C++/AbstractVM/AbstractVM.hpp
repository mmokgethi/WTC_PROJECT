/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AbstractVM.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmokgeth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 11:55:50 by mmokgeth          #+#    #+#             */
/*   Updated: 2018/07/16 11:55:54 by mmokgeth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ABSTRACTVM_H
# define ABSTRACTVM_H

# include <exception>

struct AbstractVM {
	struct DivideByZero : public std::exception { char const * what( void ) const _NOEXCEPT; };
	struct PopOnEmpty   : public std::exception { char const * what( void ) const _NOEXCEPT; };
	struct InvalidValue : public std::exception { char const * what( void ) const _NOEXCEPT; };
	struct PrintNotInt8 : public std::exception { char const * what( void ) const _NOEXCEPT; };
	struct UnknownInstruction : public std::exception { char const * what( void ) const _NOEXCEPT; };
	struct UnknownOperation : public std::exception { char const * what( void ) const _NOEXCEPT; };
	struct NotEnoughValues : public std::exception { char const * what( void ) const _NOEXCEPT; };
	struct AssertNotTrue : public std::exception { char const * what( void ) const _NOEXCEPT; };
	struct Overflow : public std::exception { char const * what( void ) const _NOEXCEPT; };
	struct Underflow : public std::exception { char const * what( void ) const _NOEXCEPT; };
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AbstractVM.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmokgeth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 11:55:37 by mmokgeth          #+#    #+#             */
/*   Updated: 2018/07/16 11:59:26 by mmokgeth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AbstractVM.hpp"

char const * AbstractVM::DivideByZero::what( void ) const _NOEXCEPT { return "Cannot divide by zero"; }
char const * AbstractVM::PopOnEmpty::what( void )   const _NOEXCEPT { return "Cannot pop empty stack"; }
char const * AbstractVM::InvalidValue::what( void ) const _NOEXCEPT { return "Instructions contain invalid value"; }
char const * AbstractVM::PrintNotInt8::what( void ) const _NOEXCEPT { return "Cannot print; top value not 8-bit integer"; }
char const * AbstractVM::UnknownInstruction::what( void ) const _NOEXCEPT { return "Unknown instruction"; }
char const * AbstractVM::UnknownOperation::what( void ) const _NOEXCEPT { return "Unknown operation"; }
char const * AbstractVM::NotEnoughValues::what( void ) const _NOEXCEPT { return "Not enough values in stack for operation"; }
char const * AbstractVM::AssertNotTrue::what( void ) const _NOEXCEPT { return "Assert evaluated to false"; }
char const * AbstractVM::Overflow::what( void ) const _NOEXCEPT { return "Overflow on a value"; }
char const * AbstractVM::Underflow::what( void ) const _NOEXCEPT { return "Underflow on a value"; }

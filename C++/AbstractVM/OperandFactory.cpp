/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OperandFactory.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmokgeth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 11:57:15 by mmokgeth          #+#    #+#             */
/*   Updated: 2018/07/16 11:57:18 by mmokgeth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "OperandFactory.hpp"
#include <iostream>
#include <cerrno>

OperandFactory::OperandFactory( void ) {}
OperandFactory::OperandFactory( OperandFactory const & obj ) { static_cast<void>(obj); }
OperandFactory::~OperandFactory( void ) {}
OperandFactory & OperandFactory::operator=( OperandFactory const & rhs ) { static_cast<void>(rhs); return *this; }

IOperand const * OperandFactory::createInt8( std::string const & value ) const {
	return new Operand<int8_t>(std::stoi(value));
}
IOperand const * OperandFactory::createInt16( std::string const & value ) const {
	return new Operand<int16_t>(std::stoi(value));
}
IOperand const * OperandFactory::createInt32( std::string const & value ) const {
	return new Operand<int32_t>(std::stoi(value));
}
IOperand const * OperandFactory::createFloat( std::string const & value ) const {
	return new Operand<float>(std::stof(value));
}
IOperand const * OperandFactory::createDouble( std::string const & value ) const {
	return new Operand<double>(std::stod(value));
}
IOperand const * OperandFactory::createOperand( eOperandType type, std::string const & value ) const {
	static IOPFP creators[] = {
		&OperandFactory::createInt8,
		&OperandFactory::createInt16,
		&OperandFactory::createInt32,
		&OperandFactory::createFloat,
		&OperandFactory::createDouble
	};
	IOperand const * created = nullptr;
	try {
		IOPFP func = creators[type];
		created = (this->*func)(value);
	} catch(std::exception & e) {
		throw AbstractVM::InvalidValue();
	}
	return created;
}

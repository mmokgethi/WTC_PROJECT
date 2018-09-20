/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Operand.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmokgeth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 11:56:47 by mmokgeth          #+#    #+#             */
/*   Updated: 2018/07/16 11:56:50 by mmokgeth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Operand.hpp"

//TEMPLATE DEFENINTION

template<class T> void add_flow_check(T val_a, T val_b) {
	T sum = val_a + val_b;
	if ((val_a < 0) == (val_b < 0)) {
		if (val_a < 0 && sum > val_b) throw AbstractVM::Underflow();
		else if (sum < val_b) throw AbstractVM::Overflow();
	}
}
template<class T> void mul_flow_check(T val_a, T val_b) {
	T max = std::numeric_limits<T>::max();
	T abs_a = (val_a < 0 ? val_a * -1 : val_a);
	T abs_b = (val_b < 0 ? val_b * -1 : val_b);
	if (abs_a > max/abs_b) {
		if ((val_a < 0) && (val_b < 0)) throw AbstractVM::Overflow();
		else if ((val_a > 0) && (val_b > 0)) throw AbstractVM::Overflow();
		else throw AbstractVM::Underflow();
	}
}

template<class T> Operand<T>::Operand( void ) { this->_value = std::to_string(static_cast<T>(0)); }
template<class T> Operand<T>::Operand( Operand<T> const & obj ) { *this = obj; }
template<class T> Operand<T>::~Operand( void ) {}
template<class T> Operand<T> & Operand<T>::operator=( Operand<T> const & rhs ) { this->_value = rhs._value; return *this; }

template<class T> Operand<T>::Operand( T value ) { this->_value = std::to_string(value); }
template<class T> Operand<T>::Operand( std::string str ) { this->_value = std::to_string(static_cast<T>(stod(str))); }

template<class T> IOperand const * Operand<T>::operator+( IOperand const & rhs ) const {
	if (this->getPrecision() < rhs.getPrecision()) return (rhs + *this);
	T lhs_val = static_cast<T>(stod(this->_value));
	T rhs_val = static_cast<T>(stod(rhs.toString()));
	add_flow_check<T>(lhs_val, rhs_val);
	OperandFactory * factory = new OperandFactory();
	IOperand const * ret_val = factory->createOperand(this->getType(), std::to_string(static_cast<T>(stod(this->_value)) + rhs_val));
	delete factory;
	return ret_val;
}

template<class T> IOperand const * Operand<T>::operator-( IOperand const & rhs ) const {
	if (this->getPrecision() < rhs.getPrecision()) return (rhs - *this);
	T lhs_val = static_cast<T>(stod(this->_value));
	T rhs_val = static_cast<T>(stod(rhs.toString()));
	add_flow_check<T>(lhs_val, rhs_val * -1);
	OperandFactory * factory = new OperandFactory();
	IOperand const * ret_val = factory->createOperand(this->getType(), std::to_string(lhs_val - rhs_val));
	delete factory;
	return ret_val;
}
template<class T> IOperand const * Operand<T>::operator*( IOperand const & rhs ) const {
	if (this->getPrecision() < rhs.getPrecision()) return (rhs * *this);
	T lhs_val = static_cast<T>(stod(this->_value));
	T rhs_val = static_cast<T>(stod(rhs.toString()));
	mul_flow_check<T>(lhs_val, rhs_val);
	OperandFactory * factory = new OperandFactory();
	IOperand const * ret_val = factory->createOperand(this->getType(), std::to_string(lhs_val * rhs_val));
	delete factory;
	return ret_val;
}
template<class T> IOperand const * Operand<T>::operator/( IOperand const & rhs ) const {
	double lhs_val = stod(this->toString());
	double rhs_val  = stod(rhs.toString());
	if (rhs_val == 0) throw AbstractVM::DivideByZero();
	eOperandType final_type = (this->getPrecision() < rhs.getPrecision() ? rhs.getType() : this->getType());
	OperandFactory * factory = new OperandFactory();
	IOperand const * ret_val = factory->createOperand(final_type, std::to_string(lhs_val / rhs_val));
	delete factory;
	return ret_val;
}
template<class T> IOperand const * Operand<T>::operator%( IOperand const & rhs ) const {
	long lhs_val = stol(this->toString());
	long rhs_val  = stol(rhs.toString());
	if (rhs_val == 0) throw AbstractVM::DivideByZero();
	eOperandType final_type = (this->getPrecision() < rhs.getPrecision() ? rhs.getType() : this->getType());
	OperandFactory * factory = new OperandFactory();
	IOperand const * ret_val = factory->createOperand(final_type, std::to_string(lhs_val % rhs_val));
	delete factory;
	return ret_val;
}

template<class T> std::string const & Operand<T>::toString( void ) const {
	return this->_value;
}

// CLASS TEMPLATE SPECIALIZATION

template<> int			Operand<int8_t>::getPrecision( void ) const		{ return Int8; }
template<> eOperandType	Operand<int8_t>::getType( void ) const			{ return Int8; }

template<> int			Operand<int16_t>::getPrecision( void ) const	{ return Int16; }
template<> eOperandType	Operand<int16_t>::getType( void ) const			{ return Int16; }

template<> int			Operand<int32_t>::getPrecision( void ) const	{ return Int32; }
template<> eOperandType	Operand<int32_t>::getType( void ) const			{ return Int32; }

template<> int			Operand<float>::getPrecision( void ) const		{ return Float; }
template<> eOperandType	Operand<float>::getType( void ) const			{ return Float; }

template<> int			Operand<double>::getPrecision( void ) const		{ return Double; }
template<> eOperandType	Operand<double>::getType( void ) const			{ return Double; }

// CLASS TEMPLATE HARD DECLARATION

template class Operand<int8_t>;
template class Operand<int16_t>;
template class Operand<int32_t>;
template class Operand<float>;
template class Operand<double>;

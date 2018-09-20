/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Operand.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmokgeth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 11:56:59 by mmokgeth          #+#    #+#             */
/*   Updated: 2018/07/16 11:57:02 by mmokgeth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPERAND_T
# define OPERAND_T

# ifndef OPERAND_T_DEFINED
    #  define OPERAND_T_DEFINED
    template<class T> class Operand;
    #  include "OperandFactory.hpp"
# endif

# include "IOperand.hpp"
# include "AbstractVM.hpp"
# include <string>
# include <limits>

// CLASS TEMPLATE DECLARATION

template<class T> class Operand : public IOperand {
public:
	Operand( void );
	Operand( T value );
	Operand( std::string str );
	Operand( Operand const & obj );
	~Operand( void );
	Operand & operator=( Operand const & rhs );
	int getPrecision( void ) const; // Precision of the type of the instance
	eOperandType getType( void ) const; // Type of the instance
	IOperand const * operator+( IOperand const & rhs ) const; // Sum
	IOperand const * operator-( IOperand const & rhs ) const; // Difference
	IOperand const * operator*( IOperand const & rhs ) const; // Product
	IOperand const * operator/( IOperand const & rhs ) const; // Quotient
	IOperand const * operator%( IOperand const & rhs ) const; // Modulo
	std::string const & toString( void ) const; // String representation of the instance
protected:
	std::string _value;
};

#endif

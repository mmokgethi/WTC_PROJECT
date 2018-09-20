/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IterStack.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmokgeth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 11:56:20 by mmokgeth          #+#    #+#             */
/*   Updated: 2018/07/16 11:56:25 by mmokgeth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITERSTACK_T
# define ITERSTACK_T

# include <deque>
# include <stack>

//****************************
// CLASS TEMPLATE DECLARATION
//****************************

// template <class T> class MutantStack : public std::stack< T, std::deque<T> > {
template <class T> class IterStack : public std::stack<T> {
public:
	typedef typename std::deque<T>::iterator iterator;
	IterStack( void );
	IterStack( IterStack const & obj );
	~IterStack( void );
	IterStack & operator=( IterStack const & rhs );

	IterStack<T>::iterator begin( void );
	IterStack<T>::iterator end( void );
protected:

private:

};

//****************************
// CLASS TEMPLATE DEFINITION
//****************************

template <class T> IterStack<T>::IterStack( void ) {}
template <class T> IterStack<T>::IterStack( IterStack<T> const & obj ) { *this = obj; }
template <class T> IterStack<T>::~IterStack( void ) {}
template <class T> IterStack<T> & IterStack<T>::operator=( IterStack<T> const & rhs ) {
	this->std::stack<T>::operator=(rhs);
	return *this;
}
template <class T> typename IterStack<T>::iterator IterStack<T>::begin( void ) {
	return this->c.begin();
}
template <class T> typename IterStack<T>::iterator IterStack<T>::end( void ) {
	return this->c.end();
}

#endif

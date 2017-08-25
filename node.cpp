/**
*	@file : node.hpp
*	@author :  Luke Dercher
*	@date : 2015.02.15
*	Purpose: Implementation file of templated double linked node class.
*/

#include "node.hpp"


template <class T>
node<T>::node()
{
    m_next = nullptr;

    m_prev = nullptr;

    m_value = T();

}

template <class T>
void node<T>::setValue(T value)
{
    m_value = value;
}

template <class T>
T node<T>::getValue()
{
    return m_value;
}

template <class T>
void node<T>::setNext(node<T>* prev)
{
    m_next = prev;
}

template <class T>
node<T>* node<T>::getNext()
{
    return m_next;
}

template <class T>
void node<T>::setPrev (node<T>* next)
{
    m_prev = next;
}

template <class T>
node<T>* node<T>::getPrev()
{
    return m_prev;
}

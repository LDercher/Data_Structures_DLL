#ifndef DoubleLL_H
#define DoubleLL_H
#include "node.cpp"
#include "util.hpp"
#include <stdexcept>

class DoubleLL {

private:



      node<int>* m_back;

      int m_size;

  //Member functions
 public:

   node<int>* m_front;
  /**
   * Public constructor to construct the DoubleLL
   */
  DoubleLL();

  /**
   * Destructor to destroy the DoubleLL
   */
  ~DoubleLL();

  /**
   * returns true if the DoubleLL is empty or returns false
   */
  bool isEmpty();

  /**
   * returns the size of the linked DoubleLL
   */
  int size();

  /**
   * add and element on a specific position
   * Should throw an exception if the value of position
   * is not in range of [0, this.size()]
   */
  void add(int elem, int position);

  /**
   * Deletes all the occurences of the elem from the DoubleLL
   */
  void deleteAll(int elem);

  /**
   * Should find the first occurence of the position of the element in the DoubleLL.
   * returns -1 if the element does not exist in the DoubleLL
   */
  int find(int elem);

 /**
  * Adds a node to the front of the DLL
  */
 void addFront(int elem);

 /**
  * Add a node to the end of the DLL
  */
 void addBack (int elem);

  /**
   * Prints all the elements of the DoubleLL with delimited with space
   */
  void print();
};

#endif //DOUBLY_LINKED_DoubleLL_H defined

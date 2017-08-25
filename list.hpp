#ifndef LIST_H
#define LIST_H
#include "node.hpp"

class list {
  //Member fields
  //IMPLEMENT ME
private:

      node<int>* m_front;

      node<int>* m_back;

      int m_size;

  //Member functions
 public:
  /**
   * Public constructor to construct the list
   */
  list();

  /**
   * Destructor to destroy the list
   */
  ~list();

  /**
   * returns true if the list is empty or returns false
   */
  bool isEmpty();

  /**
   * returns the size of the linked list
   */
  int size();

  /**
   * add and element on a specific position
   * Should throw an exception if the value of position
   * is not in range of [0, this.size()]
   */
  void add(int elem, int position);

  /**
   * Deletes all the occurences of the elem from the list
   */
  void deleteAll(int elem);

  /**
   * Should find the first occurence of the position of the element in the list.
   * returns -1 if the element does not exist in the list
   */
  int find(int elem);


  /**
   * Prints all the elements of the list with delimited with space
   */
  void print();
};

#endif //DOUBLY_LINKED_LIST_H defined
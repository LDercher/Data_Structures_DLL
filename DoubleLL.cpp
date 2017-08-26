#include "DoubleLL.hpp"

DoubleLL::DoubleLL() {

    m_size = 0;

    m_front = nullptr;

    m_back = nullptr;

}

DoubleLL::~DoubleLL() {

node<int>* curr = m_front;
node<int>* next = nullptr;

  while (curr != nullptr)
  {
    next = curr->getNext();

    delete curr;

    curr = next;
  }

}

bool DoubleLL::isEmpty() {

    if (m_size > 0)
    {
        return true;
    }
    else
    {
        return false;
    }

  return true;
}

int DoubleLL::size(){
  return m_size;
}

void DoubleLL::add(int elem, int position) {

  try {

    if( m_size < position)
    {

        throw std::out_of_range ("position out of bounds");

    }

  }
  catch(std::out_of_range &oor)
  {

      printf("exception found: %s \n",oor.what());

      return;

  }


  if (m_size == 0 && position == 0)
  {
      //if no elements in list
      m_back = new node<int>();

      m_back -> setValue(elem);

      m_front = m_back;

  }
  else
  {

      if ( position == 0)
      {
        	
      	addFront(elem);

      }
      else if (position == m_size)
      {
        
	addBack(elem);	

      }
      else
      {
	
      node<int>* pos = m_front;

     //loop through DLL to find node at pos
      for(int i = 0; i < (position - 1); i++)
      {
        pos = pos->getNext();
      }

      node<int>* new_node = new node<int>();
      
      new_node->setValue(elem);

      pos->getNext()->setPrev(new_node);

      new_node->setPrev(pos);

      new_node->setNext(pos->getNext());

      pos->setNext(new_node);

      }
  }

  m_size ++;

}

void DoubleLL::deleteAll(int elem) {

  node<int>* temp = m_front;

  while(find(elem) != -1)
  {
    while(temp->getValue()!= elem)
    {

      temp = temp->getNext();

    }
    
    if(temp == m_front)
    {

      m_front = m_front->getNext();

      m_front->setPrev(nullptr);

      delete temp;

    }
    else if(temp == m_back)
    {
      m_back = m_back->getPrev();

      m_back->setNext(nullptr);

      delete temp;

    }
    else
    {
      temp->getPrev()->setNext(temp->getNext());

      temp->getNext()->setPrev(temp->getPrev());

      delete temp;
      
    }
   
    m_size--;

  }

}

void DoubleLL::addFront(int elem)
{
   node<int>* new_node = new node<int>();

   new_node->setValue(elem);

   new_node->setNext(m_front);

   m_front->setPrev(new_node);

   m_front = new_node;

}

void DoubleLL::addBack(int elem)
{

   node<int>* new_node = new node<int>();

   new_node->setValue(elem);

   m_back->setNext(new_node);

   m_back = new_node;

}

int DoubleLL::find(int elem) {
  node<int>* temp = m_front;

     while (temp!= nullptr)
     {
          if (temp->getValue() == elem)
          {

              return temp->getValue();

          }

          temp = temp->getNext();
     }

     return -1;

}

void DoubleLL::print() {

  if(m_size > 0){
	
        node<int>* temp = m_front;

	printf("List: ");

        for (int i = 0; i < m_size; i++ )
        {
          printf("%i ", temp->getValue());
          temp = temp->getNext();
        }
	printf("\n\n");
      }
      else{

          printf("empty DoubleLL\n");

      }

     }

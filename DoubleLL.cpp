#include "DoubleLL.hpp"

DoubleLL::DoubleLL() {

    m_size = 0;

    m_front = nullptr;

    m_back = nullptr;

  //implMe();
}

DoubleLL::~DoubleLL() {


}

bool DoubleLL::isEmpty() {
  //IMPLEMENT ME

    if (m_size > 0)
    {
        return true;
    }
    else
    {
        return false;
    }

//  implMe();
  return true;
}

int DoubleLL::size(){
  //IMPLEMENT ME
//  implMe();
  return m_size;
}

void DoubleLL::add(int elem, int position) {
  //IMPLEMENT ME
  if (m_size == 0)
{
    m_back = new node<int>();

    m_back -> setValue(elem);

    m_front = m_back;
}
else
{
    node<int>* temp = new node<int>();

    temp -> setValue(elem);

    temp ->setPrev(nullptr);

    temp->setNext(m_front);

    m_front ->setPrev(temp);

    m_front=temp;

}

m_size ++;
  //implMe();
}

void DoubleLL::deleteAll(int elem) {
  //IMPLEMENT ME
  node<int>* temp = nullptr;
while (m_size != 0)
{
    if (m_size == 1)
    {
         delete m_front;

         m_front = nullptr;

         m_back = nullptr;

         m_size--;

    }
    else if (m_size > 1)
    {
        temp = m_front;

        m_front = m_front -> getNext();

        m_size--;

    }
  }
  //implMe();
}

int DoubleLL::find(int elem) {
  //IMPLEMENT ME
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
  //implMe();

}

void DoubleLL::print() {

  if(m_size > 0){

        for (int i = 0; i < m_size; i++ )
        {
          node<int>* temp = m_front;
          printf("DoubleLL item at %i contains %i", i, temp->getValue());
          temp = temp->getNext();
        }
      }
      else{

          printf("empty DoubleLL");

      }

     }

//  implMe();
  //IMPLEMENT ME

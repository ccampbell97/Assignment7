#include "linkedlist.h"

linkedlist::linkedlist()
{
  head = nullptr;
}

linkedlist::~linkedlist()
{
    // RECURSIVE
}

int linkedlist::count()
{
    // RECURSIVE
}

void linkedlist::addInOrder(int n)
{
  node *temp = head;
  if(n < temp->data || )
  {
    head = new node;
    head->data = n;
    head->next = temp;
  }
  while(temp != nullptr)
  {
    if(n < temp->next->data)
    {

    }
  }
}

void linkedlist::addToFront(int n)
{
  node *temp = head;
  head = new node;
  head->data = n;
  head->next = temp;
}

double linkedlist::average()
{
    // uses sum and count functions
}

int linkedlist::sum()
{
    /*int data;
    // RECURSIVE
    if(head == nullptr)
      return 0;
    return head->data + head->next;*/

}

void linkedlist::printList()
{
  while(head != nullptr)
  {
    cout << "List " << head->data << endl;
    head = head->next;
  }
}

void linkedlist::writeInorder(string &file)
{

}

void linkedlist::writeReversed(string &file)
{
    // RECURSIVE
}

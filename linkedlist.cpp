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

void linkedlist::writeInorder(string &file)
{

}

void linkedlist::writeReversed(string &file)
{
    // RECURSIVE
}

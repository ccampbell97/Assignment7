#include <iostream>
#include <string>
#include <fstream>
#include "linkedlist.cpp"

using namespace std;

void readFile(linkedlist &list, string &file)
{
  ifstream inputFile;
  int num;
  inputFile.open(file);
  inputFile >> num;
  while(!inputFile.eof())
  {
    list.addToFront(num);
    inputFile >> num;
  }

}

int main()
{
    linkedlist list;
    string file = "input.txt";
    readFile(list, file);
    list.printList();
    return 0;
}

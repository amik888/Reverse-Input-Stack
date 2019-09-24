#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

template<typename Item_Type>
class Stack
{
  private:
  vector<Item_Type> container;

  public:
  void push(const Item_Type& item) 
  {
    this -> container.push_back(item);
  }
  Item_Type& top() 
  {
    return this -> container.back();
  }
  const Item_Type& top() const 
  {
    return this -> container.back();
  }
  void pop() 
  {
    this -> container.pop_back();
  }
  bool empty() const 
  {
    return this -> container.empty();
  }
  size_t size() const 
  {
    return this -> container.size();
  }

  void display_all()
  {
    while (this -> container.empty() == false)
    {
      cout << this -> container.back() << " ";
      container.pop_back();
    }
  }

};

int main() 
{
  string word;
  fstream file;
  file.open("Phrase.txt");
  Stack<string> Phrase;

  cout << "Input: ";
  while (file >> word)
  {
    Phrase.push(word);
    cout << Phrase.top() << " ";
  }
  cout << endl << "Reversed: ";
  Phrase.display_all();

 return 0;
}
/* Sample main
 * Disclaimer: this file is not a unit test!

This is merely to work through compilation issues
or to provide a sandbox for testing functions
change it if you like, it is not graded

Background reading:

Vector
https://en.cppreference.com/w/cpp/container/forward_list
(This wiki the most “official”, but still unofficial, source of C++ knowledge
for end-programmers)

*/

#include "MyList.h"
#include "string"

int main() {
  MyList<std::string> l;

  cout << l.size() << endl;
  l.push_front("Naples");
  cout << l.front() << endl;
  l.push_front("Pompeii");
  l.push_front("Venice");
  l.insert(l.begin(), "Florence");
  l.insert(l.begin() + 2, "Sardinia");
  l.pop_front();
  cout << l.size() << endl;

  LinkedListIterator<std::string> iter = l.begin();
  while (iter->next != nullptr) {
    cout << iter->data << endl;
    iter + 1;
  }

  return 0;
}

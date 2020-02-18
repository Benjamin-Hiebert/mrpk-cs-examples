#include <iostream> // needed for cin, cout
#include <string> // needed for string usage
using namespace std; // std is a standard namespace for main c++ libraries
// there are other namespaces, and companies often use their own custom created
// ones

// Write code for a program  that asks the user for their name, age,
// favorite band, and how many hours of sleep they got each day this week.
// Average the number of hours they slept, then display their info.



// This program asks the user for their name, favorite band, and hours slept,
// then displays the average hours they slept per day this week.

int main() {

  //  Variables (same type on same line is ok)
  string name, favoriteBand;
  int hoursSlept;
  double averageSleep;

  cout << "Please enter your name, then favorite band "
       << "and then how many hours you slept this week" << endl;

  cin >> name >> favoriteBand >> hoursSlept;

  averageSleep = (float)hoursSlept / 7.0;

  cout << "Your name is " << name << ", your favorite band is " << favoriteBand << endl;
  cout << "You slept an average of " << averageSleep << " hours this week." << endl;

  // system("pause") is generally not needed on most home versions of visual studio
  // but can be useful if it doesnt pause

  return 0;
}

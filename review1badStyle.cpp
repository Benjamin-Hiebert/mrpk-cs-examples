#include <iostream>
#include <string>
using namespace std;

// Write code for a program  that asks the user for their name,
// favorite band, and how many hours of sleep they got each day this week.
// Average the number of hours they slept, then display their info.

int main() {
    string x, y; int a; float averagenumberofhourssleptthisweek;
    cout << "Please enter your name, then favorite band " << "and then how many hours you slept this week" << endl; 
  cin >> x;
  cin >> y;
                cin >> a;
  averagenumberofhourssleptthisweek = (float)a / 7;
  cout << "Your name is ";
  cout << x;
  cout << ", your favorite band is ";
  cout << y;
  cout << endl;
  cout << "You slept an average of ";
  cout << averagenumberofhourssleptthisweek;
                                     cout << " hours this week.";
  cout << endl;

  return 0;
}

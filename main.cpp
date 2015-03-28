// The New Boston //
// 11. Functions Using Multiple Parameters //



#include <iostream>

using namespace std;


class BuckysClass  {
// Again programs read/run from top to bottom.
// "Access specifier" put in "public" so main can access it (below)

public:
// This allows main to access all the functions within the class
  void coolSaying(){


    cout << "preaching to the choir"  << endl;

  }

  };






int main()

{

  BuckysClass buckysObject;  // In main you create an object to access the variables, functions, etc. in "BuckysClass"
  buckysObject.coolSaying();  //Now in the program it knows to create an object out of buckys class to use in the main program

  cin.ignore().get();
  return 0;
}

#include <iostream>
#include <string>
using namespace std;

int main() {
 //first give the direction
 cout << "Complete the word below" << endl;

 char x;
  cout << "P " <<"guin"<<endl;
  cout << "Your answer: ";
  cin >>x;

  if (x=='e') {
  cout << "Congrats! You got it right.";
  }
  else {
  cout << "Wrong! Please try again.";
  }

 return 0;
 }

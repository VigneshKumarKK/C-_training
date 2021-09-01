#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;


void test(string message, bool b) {
  cout << message <<"                          ";
  if (b)
    cout << " PASSED\n";
  else
    cout << " FAILED\n";
}


int stringLength(string s) {
  return s.length();
}


string stringClear(string s) {
  s.clear();
  return s;
}


bool stringEmpty(string s) {
  return s.empty();
}


char charAt(string s, int index) {
  return s.at(index);
}


string stringAppend(string left, string right) {
  return left+= right;
}


string stringInsert(string s, string toInsert) {
  return s.insert(7, toInsert);
}


string stringErase(string s) {
  return s.erase(6, 19);
}


string stringReplace(string s) {
  return s.replace(0, 7, "Things");
}


int stringFind(string s, char c) {
  return s.find(c);
}


int stringRFind(string s, char c) {
  return s.rfind(c);
}


int stringFirstNot(string s, char c) {
  return s.find_first_not_of(c);
}


int stringFirst(string s, char c) {
  return s.find_first_of(c);
}


string stringSubstring(string s) {
  return s.substr(7, 7);
}


string firstName(string s) {
  int firstSpaceIndex = s.find(' ');
  return s.substr(0, firstSpaceIndex);
}

string middleName(string s) {
  int firstSpaceIndex = s.find(' ');
  int lastSpaceIndex = s.find_last_of(' ');
  int lengthOfMiddleName = lastSpaceIndex - firstSpaceIndex - 1;
  return s.substr(firstSpaceIndex + 1, lengthOfMiddleName);
}

string lastName(string s) {
  return s.substr(s.find_last_of(' ') + 1, s.length() - 1);
}

string capitalize(string s) {
  char first = s[0];
  first = toupper(first);
  s[0] = first;
  return s;
}

bool include(string s, char c) {
  return s.find_first_of(c) != s.npos;
}

string substitute(string s, char target, char replacement) {
  int indexToReplace = 0;
  while (include(s, target)) {
    indexToReplace = s.find(target);
    s[indexToReplace] = replacement;
  }
  return s;
}

int main()
 {

  cout << "Testing your functions...\n\n";

  test( "Testing length()", stringLength("Now") == 3 );
  test( "Testing clear()", stringClear("Is") == "" );
  test( "Testing empty()", stringEmpty("") );
  test( "Testing at()", charAt("Elephant", 3) == 'p' );
  test( "Testing append()", stringAppend("There's a ", "natural mystic.") == "There's a natural mystic." );
  test( "Testing insert()", stringInsert("If you carefully.", "listen ") == "If you listen carefully." );
  test( "Testing erase()", stringErase("This could be the first trumpet") == "This crumpet" );
  test( "Testing replace()", stringReplace("Strings are not the way") == "Things are not the way" );
  test( "Testing find()", stringFind("Have to face reality now.", 'o') == 6 );
  test( "Testing rfind()", stringRFind("Have to face reality now.", 'o') == 22 );
  test( "Testing find_first_of()", stringFirst("XXXXOXXX", 'O') == 4);
  test( "Testing find_first_not_of()", stringFirstNot("XXXXOXXX", 'X') == 4);
  test( "Testing substr()", stringSubstring("Such a natural mystic") == "natural" );

  test( "Testing firstName()", firstName("Robert Nesta Marley") == "Robert" );
  test( "Testing middleName()", middleName("Robert Nesta Marley") == "Nesta" );
  test( "Testing lastName()", lastName("Robert Nesta Marley") == "Marley" );
  test( "Testing capitalize()", capitalize("eager") == "Eager" );
  test( "Testing include()", include("Robert", 'o') );
  test( "Testing substitute()", substitute("The Gxxgle", 'x', 'o') == "The Google" );

    return 0;
}
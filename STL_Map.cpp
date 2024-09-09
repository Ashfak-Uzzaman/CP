#include <iostream>
#include <map> // m[KEY]=Value;  // m[key] - value of element with key. O(logN)   /*Operation সব value তে হবে।*/
#include <algorithm>

using namespace std;
/*

m.count(key), m.find(key), m.erase(key), m.lower_bound(key), m.upper_bound(key) - similar to set

*/

/*map এ কোনো value assign না করলে initially value 0 থাকে। */

/*
 map<char,int>letter;
 letter['A'];  // এই key A এর value 0

  map<char,int>letter;

  letter['A']++;  // এই key A এর value 1

*/

int main()
{

  map<char, int> letter;
  letter['A']; // এই key A এর value 0

  auto itt = letter.begin(); // itterator

  cout << itt->first << " " << itt->second << endl;

  map<char, int> Letter;

  Letter['B']++; // এই key A এর value 1

  itt = Letter.begin();

  cout << itt->first << " " << itt->second << "\n"<< endl;

  auto ittt = Letter.rbegin();
  cout << ":"<<itt->first << " " << itt->second << "\n"<< endl; //Accessing last element 

  /****************************/

  map<int, int> mp;

  cout << mp.size() << endl; // mp.size() = 0

  cout << mp[50] << endl; // instantly create the element and the value will be 0

  cout << mp.size() << endl; // mp.size() = 1

  mp[25]; // It also instantly create the element and the value will be 0

  mp[45] = 5000;
  mp.insert(make_pair(55, 950)); // same as উপরের system
  mp[45] = ++mp[45];
  mp[45] = ++mp[45];
  cout << "\nhi  " << mp[45] << endl;

  map<string, int> m;

  m["Jubayer"] = 1050;
  m["Nahid"] = 1100;
  m["Ashfak"] = 1000;

  m.insert(make_pair("Abc", 950)); // same as উপরের system

  cout << m["Nahid"] << endl;
  printf("%d\n", m["Jubayer"]);

  cout << "m[\"Nahid\"] - m[\"Jubayer\"] = " << m["Nahid"] - m["Jubayer"] << endl; /*Operation সব value তে হবে।*/

  cout << m.size() << endl;

  m["Nahid"] = 1500; // it will udate the vaalue only!!!

  map<string, int>::iterator it;
  it = m.begin();

  for (it; it != m.end(); ++it)
  {
    cout << it->first << " " << it->second << endl; // *it error দিবে যেহেতু এটি এই পুরা map এর দিকে point করে আছে
  }
  cout << "\n";

  m["Ashu"] = 5000;

  it = m.find("Ashfak");

  if (it != m.end())
  {
    cout << "found " << it->first << " " << it->second << endl;
  }

  it = m.find("Ashu");

  if (it != m.end())
  {
    cout << "found " << it->first << " " << it->second << endl;
  }

  m.erase("Ashu"); // erasing "Ashu"

  it = m.find("Ashu");

  if (it == m.end())
  {
    cout << "Not found!!!" << endl;
  }
  cout << "\n";

  it = m.lower_bound("Ashfak");

  cout << it->first << " " << it->second << "\n";

  it = m.upper_bound("Jubayer");

  cout << it->first << " " << it->second << "\n\n";

  // for-each loop

  for (auto u : m)
  {
    cout << u.first << " " << u.second << endl;
  }





  return 0;
}
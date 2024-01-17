#include<bits/stdc++.h>

using namespace std;

int main()
{

  ofstream outfile;
  outfile.open("rapchik.txt", ios_base::app);
  string str;
  getline(cin,str);
  outfile <<str;
  outfile.close();

  return 0;
}

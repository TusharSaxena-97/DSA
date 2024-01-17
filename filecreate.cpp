#include<bits/stdc++.h>

using namespace std;

int main()
{
    fstream file;
      file.open("test.txt",ios::out);
      if(!file){
        cout<<"Error in file creation!";
        return 0;
      }else{ //File is created
        cout<<"File Creation successfull.";
      }

     file.close();
return 0;
}

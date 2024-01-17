#include<bits/stdc++.h>

using namespace std;

void TowerOfHanoi(int n, char source, char aux, char dest)
{
    if(n==1)
    {
     cout<<"Moving disc 1 from "<<source<<" to "<<dest<<endl;
     return;
    }

    TowerOfHanoi(n-1,source,dest,aux);

    cout<<"Moving Disc "<<n<<" from "<<source<<" to "<<dest<<endl;

    TowerOfHanoi(n-1,aux,source,dest);
}

int main()
{
 int t;
 cin>>t;

 while(t--)
 {
    int n;
    char source='A', dest='C', aux = 'B';
    cout<<"Enter The Number of Discs";
    cin>>n;

    TowerOfHanoi(n,source,aux,dest);
 }
 return 0;
}

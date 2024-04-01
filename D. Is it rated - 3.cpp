#include <iostream>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int x;
    cin>>x;
    if((s=="ABC" && x<2000) || (s=="ARC" && x<2800) || (s=="AGC" && x>=1200)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }


    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    //PAIRS IN C++ STL

    pair<int,int> p_array[3]; //Created an array of pair

    p_array[0]={1,2};
    p_array[1]={2,3};
    p_array[2]={3,1};

    for(int i=0; i < 3; i++)
    {
        cout<<p_array[i].first<<" ";
        cout<<p_array[i].second<<endl;
    }

    pair<int,string>p;
    p=make_pair(5,"Yellow");
    cout<<p.first<<" "<<p.second<<endl;
    pair<int,string> &q=p;

    q.first=9;
    cout<<p.first<<" "<<p.second<<endl;

    return 0;
}

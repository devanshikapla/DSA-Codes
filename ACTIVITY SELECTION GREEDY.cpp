#include <iostream>

using namespace std;

void print_max_activity(int s[] , int f[] , int n)
{
    int i;
    i=0;
    cout<<" "<<i;
    for(int j=0; j < n; j++ )
    {
        if(s[j] >= f[i])
        {
            cout<<" "<<j;
            i=j;
        }
    }
}

int main()
{
    int s[]={1,3,0,5,8,5};
    int f[]={2,4,6,7,8,9};
    int n=sizeof(s)/sizeof(s[0]);
    print_max_activity(s,f,n);
    return 0;
}

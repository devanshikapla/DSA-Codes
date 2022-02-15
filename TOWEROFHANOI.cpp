#include <iostream>

using namespace std;

//tower of hanoi 
void tower_of_hanoi(int n , char source_rod , char destination_rod , char helper_rod)
{
    if(n==0)
    {
        return;
    }
    tower_of_hanoi(n-1 , source_rod , helper_rod , destination_rod);
    cout<<"Move Disk "<<n<<" Source rod "<<source_rod<<" destination_rod "<<destination_rod<<endl;
    tower_of_hanoi(n-1 , helper_rod , destination_rod , source_rod);
}

int main()
{
    int n=5;
    tower_of_hanoi(n, 'A' ,'B','C');

    return 0;
}

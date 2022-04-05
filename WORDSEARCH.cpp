#include <iostream>

using namespace std;
int x[] = { -1, -1, -1,  0, 0,  1, 1, 1 };
int y[] = { -1,  0,  1, -1, 1, -1, 0, 1 };
// function for searching in a grid

bool search2D(char *grid , int i , int j ,string word, int row , int col)
{
    int len=word.length();
    for(int direction=0; direction < 8; direction++)
    {
        int k, rd=i+x[direction], cd=j+y[direction];
        for(k=1; k < len; k++)
        {
            if(rd >= row || rd < 0 || cd >=  col || cd < 0)
            {
                break;
            }
            if(*(grid+rd*col+cd)!=word[k])
            {
                break;
            }
            rd=rd+x[direction], cd=cd+y[direction];
        }
        if(k==len)
        {
            return true;
        }

    }
    return false;
}

void search(char *grid , string word, int row , int col)
{
    for(int i=0; i < row ;i++)
    {
        for(int j=0; j < col ;j++)
        {
            if(search2D(grid , i , j , word , row,col))
            {
                cout<<i<<j<<endl;
            }
        }
    }
}
int main()
{
    int R = 3, C = 13;
    char grid[R][C] = { "GEEKSFORGEEKS",
                        "GEEKSQUIZGEEK",
                        "IDEQAPRACTICE" };

   search((char *)grid, "GEEKS", R, C);
    cout << endl;
   search((char *)grid, "EEE", R, C);
}

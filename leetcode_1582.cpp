#include <iostream>
#include <vector>
using namespace std;
int mat[5][8] = {{0, 0, 0, 0, 0, 1, 0, 0}, {0, 0, 0, 0, 1, 0, 0, 1}, {0, 0, 0, 0, 1, 0, 0, 0}, {1, 0, 0, 0, 1, 0, 0, 0}, {0, 0, 1, 1, 0, 0, 0, 0}};
int calsum(int row, int col)
{
    int rowsum=0;
    int colsum=0;
    static int times=0;
    for (int k = 0; k < 8; k++)
    {
        // sum of that row
        rowsum += mat[row][k];
    }
    for (int k = 0; k < 5; k++)
    {
        // sum of that column
        colsum += mat[k][col];
    }
    // cout<<"row: "<<row<<" row sum = "<<rowsum<<"  col: "<<col<<"  column sum = "<<colsum<<endl;
    if (rowsum == colsum)
    {
        times++;
    }
    return times;
}
int main()
{
    //[[0,0,0,0,0,1,0,0],[0,0,0,0,1,0,0,1],[0,0,0,0,1,0,0,0],
    //[1,0,0,0,1,0,0,0],[0,0,1,1,0,0,0,0]]
    bool flag = false;
    int count;
    for (int i = 0; i < 5; i++)
    {
        int rowsum = 0, colsum = 0;
        for (int j = 0; j < 8; j++)
        {
            if (mat[i][j] == 1)
            {
                // cout<<"row : "<<i<<" col : "<<j<<endl;
                count=calsum(i,j);
            }
        }
    }
    cout<<"count is : "<<count;
    return 0;
}
#include <iostream>

using namespace std;

int curRow = 0;
int curCol = 0;
void Go(int curRow, int curCol, int step);
int main()
{
    Go(0, 0, 66);
    return 0;
}

void Go(int curRow, int curCol, int step)
{
    if(curRow > 5 || curCol > 5) return;
    int newstep = (curCol*6 + curRow + step) % 36;;  // newCol*6 + newRow
    int newCol = newstep / 6;
    int newRow = newstep - 6*newCol;

    cout << newRow+1 << "\t" << newCol+1;

}
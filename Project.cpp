// Amin Latifi 810798159
// Shervin Mahmoudi 810798161
// Morteza Fattah Pour 810798151

#include <iostream>
#include <fstream>

using namespace std;

bool TestNum(char sudoku[9][9], int row, int column, char value)
{

  for (int i = 0; i < 9; i++)
  {
    if (sudoku[row][i] == value)
      return false;
    if (sudoku[i][column] == value)
      return false;
    if (sudoku[(row / 3) * 3 + (i % 3)][(column / 3) * 3 + (i / 3)] == value)
      return false;
  }

  return true;
}

void PlaceNum(char sudoku[9][9])
{
  for (int r = 0; r < 9; r++)
  {
    for (int i = 0; i < 9; i++)
    {
      for (int j = 0; j < 9; j++)
      {
        if (sudoku[i][j] == '-')
        {
          char temp = '-';
          for (char k = '1'; k <= '9'; k++)
          {

            if (TestNum(sudoku, i, j, k))
            {
              if (temp == '-')
                temp = k;
              else
              {
                temp = '-';
                break;
              }
            }
          }

          if (temp != '-')
            sudoku[i][j] = temp;
        }
      }
    }
  }
}

void print(char sudoku[9][9])
{
#define B '='
#define C '+'
#define D '+'
#define E '|'
#define F '+'
#define G '+'
#define H '+'
#define I '+'
#define J '+'
#define L '+'
#define M '+'
#define N '|'
#define O '-'

  cout << " " << C;
  for (int i = 0; i < 23; i++)
    if (i == 7 || i == 15)
      cout << F;
    else
      cout << B;
  cout << D;
  cout << endl;
  for (int p = 0; p < 9; p++)
  {
    if (p == 3 || p == 6)
    {
      cout << " " << J;
      for (int i = 0; i < 23; i++)
      {
        if (i == 7 || i == 15)
          cout << M;
        else
          cout << O;
      }
      cout << L << endl
           << " " << E << " ";
    }
    else
      cout << " " << E << " ";

    for (int q = 0; q < 9; q++)
    {
      if (q == 3 || q == 6)
        cout << N << " ";

      cout << sudoku[p][q] << " ";
    }
    cout << E << endl;
  }
  cout << " " << G;
  for (int i = 0; i < 23; i++)
  {
    if (i == 7 || i == 15)
      cout << I;
    else
      cout << B;
  }
  cout << H;
}

bool PlaceNum2(char sudoku[9][9], int row, int column)
{
  if (column == 9)
  {
    column = 0;
    row++;
    if (row == 9)
      return true;
  }
  if (sudoku[row][column] != '-')
    return PlaceNum2(sudoku, row, column + 1);

  for (char i = '1'; i <= '9'; i++)
  {
    if (TestNum(sudoku, row, column, i))
    {
      sudoku[row][column] = i;
      if (PlaceNum2(sudoku, row, column + 1))
        return true;
      sudoku[row][column] = '-';
    }
  }

  return false;
}

int main()
{
  char sudoku[9][9];
  ifstream infile;
  infile.open("sudoku.txt");

  for (int i = 0; i < 9; i++)
  {
    for (int j = 0; j < 9; j++)
    {
      infile >> sudoku[i][j];
    }
  }
  PlaceNum(sudoku);
  if (PlaceNum2(sudoku, 0, 0))
    print(sudoku);
  else
    cout << "Solution was not found :(" << endl;

  infile.close();
  return 0;
}
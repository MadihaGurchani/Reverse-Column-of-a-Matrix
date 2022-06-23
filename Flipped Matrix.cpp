#include <iostream>

using namespace std;
const int maxRows = 5;
const int maxCols = 5;
void readMatrix(int arr[][maxCols]);
void displayMatrix(int a[][maxCols]);
void displayFlippedMatrix(int arr[][maxCols]);

int main()
{
   int a[maxRows][maxCols];
   readMatrix(a);
   cout<<"\n\n"<<"The original matrix is: "<<"\n";
   displayMatrix(a);
   cout << "\n\n" << "The flipped matrix is: " << '\n'; 
   displayFlippedMatrix(a);

    return 0;
}
void readMatrix(int arr[][maxCols])
{
    int row,col;
    for(row = 0; row < maxRows; row++)
    {
        for (col = 0; col < maxCols; col++)
        {
            cout << "\n" << "Enter " << row << ", " << col << " element: "; 
            cin>>arr[row][col];
        }
    cout<<"\n";
    }
}
void displayMatrix(int arr[][maxCols])
{
    int row,col;
    for(row = 0; row < maxRows; row++)
    {
        for (col = 0; col < maxCols; col++)
        {
            cout<<arr[row][col]<<"\t";
        }
    cout<<"\n";
    }
}
void displayFlippedMatrix(int a[][maxCols])
{
    int row,col;
    for (row = 0; row < maxRows; row ++)
    {
         for(col = maxCols - 1; col >= 0; col --)
        { 
            cout<<a[row][col]<<"\t";
         }
         cout<<"\n";
    }
}

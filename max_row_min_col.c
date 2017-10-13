#include <stdio.h>
#define SIZE 15

/***********************************
 * function recieves matrix and finds 
 * spots that the rows biggest number 
 * is also the smallest of its columb
 * 
 * input: matrix to be checked, empty 
 * matrix to be filled with spots in 
 * array that meet the guidelines
 * 
 * output: number of spots that meet 
 * the guidelines
 ************************************/
int find_max_row_min_col(int matin[][SIZE], int matout[][SIZE])
{
    int i;
    int row_biggest;
    int numbers_in_matout = 0;
    
    for(i=0; i<SIZE; i++)
    {
        row_biggest = biggest_in_row(matin[i]);                             //find biggest in row
        if (is_smallest_in_col(matin,row_biggest,matin[i][row_biggest]))    //check if its the smallest in it's columb
        {
            row_biggest[0][numbers_in_matouts] = i;                  //add row index to matout
            row_biggest[1][numbers_in_matouts] = row_biggest;        //add col index to matout
            numbers_in_matout++;                                       
        }
    }
    
    return numbers_in_matout; 
}


/********************************
 * function returns index of 
 * highest value in array
 * 
 * input: array of ints
 * 
 * output: index of highest value
 * ******************************/
int biggest_in_row(int a[])
{
    int i;
    int index;
    int biggest;
    
    biggest = a[0];
    index = 0;
    
    for(i=1; i<SIZE; i++)
    {
        if (a[i] > biggest)
        {
            biggest = a[i];
            index = i;
        }
    }
    
    return index;
}

/************************************************
 * function returns1 if given number is 
 * smallest in columb, 0 otherwise
 * 
 * input: 2d array, columb to be checked, number
 * that should be smallest
 * 
 * output: 1 if number is smallest, 0 otherwise
 ************************************************/
int is_smallest_in_col(int a[][SIZE], int col, int num)
{
    int i;
    
    for(i=0; i<SIZE; i++)
        if (a[i][col] < num)
            return 0;
        
    return 1;
}

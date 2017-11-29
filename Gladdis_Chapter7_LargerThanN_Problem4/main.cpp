/* 
 * File:   main.cpp
 * Author: Marcus Burton   
 * Created on November 28th 2017    
 * Purpose:  Program that accepts three arguments, an array, the size of the array, and a number n.
 *          display the numbers in the array that are greater than n.
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes
void array(int[], int, int);
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int SIZE;
   
    int n;
    cout<<"Please enter number"<<endl;
    cin>>n;
    cout<<"Please enter the size of your array"<<endl;
    cin>>SIZE;
     int a[SIZE];
    for(int i = 0; i <SIZE; i++)
    {
    do
    {
    cout<<"Now, enter as many the number for element "<<i+1<<" of your array (position "<<i<<endl;
    cin>>a[i];
    }while(!(a[i]>0));
    }
     array(a,SIZE, n);
    //Initialize Variables
    
    //Input Data/Variables
    
    //Process or map the inputs to the outputs
    
    //Display/Output all pertinent variables
    
    //Exit the program
    return 0;
}

void array(int *a, int size, int n)
{
    for(int i = 0; i < size; i++)
    {
        if(a[i]>n)
        {
            cout<<a[i]<<" is larger than your value, "<<n<<endl;;
        }
        else
            cout<<a[i]<<" is smaller than your value, "<<n<<endl;
    }
}
/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on Sept 25th, 2017, 9:05 PM
 * Purpose:  Creating a class template
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int SIZE=10;
    int max=0;
    int min=0;
    int array[SIZE];
    for(int i = 0; i<10; i++)
    {
        cout<<"Enter the number for array position "<<i+1<<" please"<<endl;
        cin>>array[i];
    }
    max=array[0];
    min=array[0];
    for(int i = 0; i<10;i++)
    {
        
        if(array[i]>max)
        {
            max=array[i];
        }
        if(array[i]<min)
        {
            min=array[i];
        }
    }
    cout<<min<<" "<<max<<endl;
    
    //Initialize Variables
    
    //Input Data/Variables
    
    //Process or map the inputs to the outputs
    
    //Display/Output all pertinent variables
    
    //Exit the program
    return 0;
}
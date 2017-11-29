/* 
 * File:   main.cpp
 * Author: Marcus Burton   
 * Created on November 28th 2017    
 * Purpose:  INSERT PURPOSE HERE
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
    int SIZE = 12;
    int a[SIZE];
    string month[] = {"Jan" , "Feb" , "March" , "April" , "May" , "June" , "July",
                      "August" , "September" , "October" , "November" , "December" };
    float total=0;
    float avg=0;
    float high=0;
    float low=0;
    int mnthigh;
    int mnthlow;
    //Initialize Variables
    for(int i =0;i<12;i++)
    {
        
        do
        {
        cout<<"Please enter the value for the month "<<month[i]<<endl;
        cin>>a[i];
        
        
        
        total+=a[i];
        
        }while(a[i]<0);
        
    }
    avg=total/12.0;
    for(int i=0;i<12;i++)
    {
        if(a[i]>high)
        {
            high=a[i];
            mnthigh=i;
        }
        if(a[i]<low)
        {
            low=a[i];
            mnthlow=i;
        }
    }
    cout<<"TOTAL RAIN FALL: "<<total<<" INCHES"<<endl;
    cout<<"AVERAGE RAIN FALL: "<<avg<<" INCHES"<<endl;
    cout<<"MOST RAIN FALL FELL IN "<<month[mnthigh]<<endl;
    cout<<"LEAST RAIN FALL FELL IN "<<month[mnthlow]<<endl;
    //Input Data/Variables
    
    //Process or map the inputs to the outputs
    
    //Display/Output all pertinent variables
    
    //Exit the program
    return 0;
}
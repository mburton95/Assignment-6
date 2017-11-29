/* 
 * 
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
    int SIZE = 5;
    int jars[SIZE];
    string sal[] = { "mild" , "medium" , "sweet", "hot" , "zesty" };
    int total;
    int highest=jars[0];
    int lowest=jars[0];
    int hgh=0;
    int lw=0;
    //Initialize Variables
    
    //Input Data/Variables
    for(int i=0;i<5;i++)
    {
        do
        {
            cout<<"Please enter the amount of "<<sal[i]<<" jars sold"<<endl;
            cin>>jars[i];
        }while(!(jars[i]>0));
        total+=jars[i];
        if(jars[i]>highest)
        {
            highest=jars[i];
            hgh=i;
        }
        if(jars[i]<lowest)
        {
            lowest=jars[i];
            lw=i;
        }
                    
    }
    cout<<"TOTAL SALES: "<<total<<" JARS"<<endl;
    cout<<"HIGHEST SELLING PRODUCT: "<<sal[hgh]<<endl;
    cout<<"LOWEST SELLING PRODUCT: "<<sal[lw]<<endl;
    
    //Process or map the inputs to the outputs
    
    //Display/Output all pertinent variables
    
    //Exit the program
    return 0;
}

/* 
 * File:   main.cpp
 * Author: Marcus Buron
 * Created on November 27th 2017
 * Purpose:  Account validation; matching user input to a 
 *           single-dimensional array
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    int actnmbr;
    int accnts[] = {5658845, 4520125, 7895122, 8777541, 8451277, 1302850,
                    8080152, 4562555, 5552012, 5050552, 7825877, 1250255,
                    1005231, 6545231, 3852085, 7576651, 7881200, 4581002};
   
    cout<<"This program will check to see if your 7 digit ID number is valid"<<endl;
    cout<<"Please enter your 7 digit account number"<<endl;
    cin>>actnmbr;
    
    
    for(int i = 0; i<18;i++)
    {
        if(actnmbr==accnts[i])
        {
            cout<<"The number is valid!"<<endl;
            return 0;
        }
        
    }
    cout<<"The number is invalid!"<<endl;
    
    
    return 0;
}


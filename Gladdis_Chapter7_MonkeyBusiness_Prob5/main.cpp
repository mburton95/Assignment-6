/* 
 * File:   main.cpp
 * Author: Marcus Burton   
 * Created on November 28th 2017    
 * Purpose:  Track the pounds of food that three monkeys eat each day during a typical week
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
    string days[] = {"monday" , "Tuesday" , "Wednesday" , "Thursday" , "Friday" };
    int row=3;
    int size=5;
    int food[row][size];
    int total;
    float avg;
    int maxfood;
    int minfood;
    int max=0;
    int maxd=0;
    int min=0;
    int mind=0;
   
    //Initialize Variables
    for(int monk =0; monk<row; monk++)
    {
    for(int i=0;i<5;i++)
    {
        do
        {
            cout<<"Enter the pounds of food eaten by monkey "<<monk+1<<" on "<<days[i]<<endl;
            cin>>food[monk][i];
            if(food[monk][i]<0)
                cout<<"Incorrect! Please enter a valid number"<<endl;
        }
        while(!(food[monk][i]));
    }
    }
    cout<<endl;
    cout<<endl;
    cout<<endl;
    
    for(int monk =0; monk<row; monk++)
    {
    for(int i=0;i<5;i++)
    {
        total +=food[monk][i];
        // find max food
        if(food[monk][i]>maxfood)
        {
            maxfood=food[monk][i];
            max=monk;
            maxd=i;
        }
        // find least food
        if(food[monk][i]<minfood)
        {
            minfood=food[monk][i];
            min=monk;
            mind=i;
                
        }
    cout<<endl;
    }
    }
    avg=total/(row*size);
    cout<<"TOTAL FOOD EATEN: "<<total<<endl;
    cout<<"Average food eaten is "<<avg<<" pounds"<<endl;
    cout<<"The least amount of food eaten during the week was by monkey "<<(min+1)<< " on "<<days[mind]<<
            "by eating "<<minfood<<" pounds of food"<<endl;
    cout<<"The most amount of food eaten during the week was by monkey "<<max+1<<" on  "<<days[maxd]<<
            " by eating "<<maxfood<<" pounds of food!"<<endl;
    //Input Data/Variables
    
    //Process or map the inputs to the outputs
    
    //Display/Output all pertinent variables
    
    //Exit the program
    return 0;
}
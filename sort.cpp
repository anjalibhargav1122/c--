#include <iostream>
#include <vector> 
using namespace std;

int main()
{
  
    vector<int>values = {1,0,2,2,1,0,0};
    int c=0;
    int t=0;
    int y=0;


        for(int i = 0;i<values.size();i++){
        if(values[i]==1){
            c = c+ 1;
        }
        else if (values[i]==0)
        {
            t = t+ 1;
        }
        else{
            y = y+1;
        }
        
    }

 int i = 0;
   while(t--){
    values[i]= 0;
    i++;
 }
 while(c--){
    values[i]= 1;
    i++;
 }
 while(y--){
    values[i]= 2;
    i++;
 }
     for(int i = 0;i<values.size();i++){
        cout<<values[i];
     }

}


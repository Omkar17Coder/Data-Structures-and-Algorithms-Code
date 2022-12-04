#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Celebrity Problem.
/*


A celebrity is a person who is known to all but does not know anyone at a party.
 If you go to a party of N people,
 find if there is a celebrity in the party or not.
A square NxN matrix M[][] is used to represent people at the party such
 that if an element of row i and column j  is set to
  1 it means ith person knows jth person. Here M[i][i] will always be 0.*/

bool knows( vector<vector<int> > & M,int a,int b){
    if(M[a][b]==1){
        return true;
    }
    else{
        return false;
    }
}
class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        stack<int>s;
        for(int i=0;i<n;i++){
            s.push(i);
        }
        while(s.size()>1){
            int a=s.top();
            s.pop();
            int b=s.top();
            s.pop();
            
            if(knows(M,a,b)){
                s.push(b);
            }
           else{
               s.push(a);
           }
          
        }
       bool row=false;
       bool column=false;
       
       int zerocount=0;
       int onecount=0;
       
       int candidate=s.top();
       for(int i=0;i<n;i++){
           if(M[candidate][i]==0){
               zerocount++;
           }
       }
       if(zerocount==n){
           row=true;
       }
       for(int i=0;i<n;i++){
           if(M[i][candidate]==1){
               onecount++;
       }
       }
       if(onecount==n-1){
           column=true;
       }
       
       if(row && column){
           return candidate;
       }
       else{
           return -1;
       }
        
    }
};

int main(){

    return 0;
}
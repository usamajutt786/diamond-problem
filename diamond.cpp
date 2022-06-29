#include<iostream> 
using namespace std; 
int main() 
{ 
     int i,j,k,N; 
    char a='*'; 
    cout<<"set the height of the diamond:";  //half of the total height. 
    cin>>N; 
    while(N!=0) 
    { 
      for (i=1;i<=N;i++) 
        { 
   for (j=1;j<=(N-i);j++) 
  { 
          
   cout<<" "; 
        } 
   for(k=1;k<=2*i-1;k++) 
   { 
   cout<<"*"; 
   } 
   cout<<endl; 
   } 
   for (i=2;i<=N;i++) 
   { 
   for (j=1;j<=(i-1);j++) 
   { 
      cout<<" "; 
   } 
   for(k=2*N-(2*i-1);k>0;k--) 
   { 
       cout<<a; 
   } 
   cout<<endl; 
        } 
        cout<<"set the height of the diamond:"; 
        cin>>N; 
    } 
    cout<<" ------------------------------------"<<endl;
    cout<<"| This Diamond is made by usama jutt |"<<endl;
    cout<<" ------------------------------------"<<endl;
    return 0; 
} 
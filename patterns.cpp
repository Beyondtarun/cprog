#include<iostream>
#include<conio.h>
using namespace std;
void rightHalfTriangle(int n);
void leftHalfTriangle(int n);
void fullPyramid(int n);


int main(){
    int n=0;
    cout<<"==============================================";
    cout<<"\n\t\t BEYONDTARUN";
    cout<<"\n==============================================";

    cout<<"\n\n\tEnter the value on Lines: ";
    cin>>n;
    cout<<"\n\tChoice(s)\n\n\t\t1. Right Half Triangle.\n\t\t2. Left Half Triangle.\n\t\t3. Full Pyramid.";
    int choice;
    cout<<"\n\n\tEnter choice: ";
    cin>>choice;
    cout<<"\n+++++++++++++++++++++++++++++++++++++++++++++\n\n";
    
    switch (choice)
    {
    case 1 : rightHalfTriangle(n);
             break;   
    case 2 : leftHalfTriangle(n);
             break;   
    case 3 : fullPyramid(n);
             break;   
    case 4 : rightHalfTriangle(n);
             break;   
    case 5 : rightHalfTriangle(n);
             break;   
    case 6 : rightHalfTriangle(n);
             break;   
    
    default: cout<<"\n\tWrong Choice";
             break;
    }
    return 0;
}
void rightHalfTriangle(int n){
    
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
}
void leftHalfTriangle(int n){
    
    for(int i=0;i<n;i++){
        for(int k=n-1-i;k>0;k--){
         cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
}

void fullPyramid(int n){
for(int i=0;i<n;i++){
    for(int k=n-1-i;k>0;k--)
    cout<<" ";
    for(int j=0;j<(i*2)+1;j++)
    cout<<"*";
    cout<<"\n";
}
}


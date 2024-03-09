#include <iostream>
using namespace std;
void pattern1(int n){
    int Ins=1;
    for (int i=0;i<n;i++){
        //spaces
        for(int j=0;j<(n-i-1);j++){
            cout<<" ";
        }
        //stars
        for(int j=0;j<Ins;j++){
            cout<<"*";
        }
        Ins+=2;
        //spaces
        for(int j=0;j<(n-i-1);j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void pattern2(int n){
    int InSt=2*n-1;
    for (int i=0;i<n;i++){
        //spaces
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        //stars
        for(int j=0;j<InSt;j++){
            cout<<"*";
        }
        InSt-=2;
        //spaces
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void pattern3(int n){
    int InS=0;
    for(int i=0;i<= 2*n;i++){
        if(i<n){
            //stars
            for(int j=0;j<n-i;j++){
                cout<<"*";
            }
            //spaces
            for(int j=0;j<InS;j++){
                cout<<" ";
            }
            //stars
            for(int j=0;j<n-i;j++){
                cout<<"*";
            }
            cout<<endl;
            InS+=2;
        }
        if(i>n){
            InS-=2;
             //stars
            for(int j=0;j<i-n;j++){
                cout<<"*";
            }
            //spaces
            for(int j=0;j<InS;j++){
                cout<<" ";
            }
            //stars
            for(int j=0;j<i-n;j++){
                cout<<"*";
            }
            cout<<endl;
        }
    }
}
void pattern4(int n){
    for(int i=0;i< 2*n-1;i++){
        for(int j=0;j<2*n-1;j++){
            int top=i;
            int left=j;
            int right=(2*n-2)-j;
            int bottom=(2*n-2)-i;
            cout<< n-(min(min(top,bottom),min(left,right)))<<" ";
        }
        cout<<endl;
    }
}
int main(){
    cout<<"enter the number of rows"<<endl;
    int n;
    cin>>n;
    pattern4(n);
    return 0;
}

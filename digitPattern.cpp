#include<bits/stdc++.h>
using namespace std;

int n=5;

void pattern_1(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j==n/2 || i==n-1 || (i<=n/2 && j==(n/2)-i)){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}

void pattern_2(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0 || i==n-1 || i==n/2 || (i<=n/2 && j==n-1) || (i>=n/2 && j==0)){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}

void pattern_3(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0 || i==n-1 || i==n/2 || j==n-1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}

void pattern_4(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j==n-1 || i==n/2 || (i<=n/2 && j==0)){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}

void pattern_5(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0 || i==n-1 || i==n/2 || (i>=n/2 && j==n-1) || (i<=n/2 && j==0)){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}

void pattern_6(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0 || i==n-1 || i==n/2 || j==0 || (i>=n/2 && j==n-1)){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}

void pattern_7(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0 || j==n-1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}

void pattern_8(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0 || i==n-1 || j==0 || j==n-1 || i==n/2){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}

void pattern_9(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0 || j==n-1 || i==n/2 || (i<=n/2 && j==0)){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}

void pattern_0(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0 || i==n-1 || j==0 || j==n-1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}


int main(){
    cout<<"Digit Patterns"<<endl;

    cout<<endl<<"1"<<endl;
    pattern_1();

    cout<<endl<<"2"<<endl;
    pattern_2();

    cout<<endl<<"3"<<endl;
    pattern_3();

    cout<<endl<<"4"<<endl;
    pattern_4();

    cout<<endl<<"5"<<endl;
    pattern_5();

    cout<<endl<<"6"<<endl;
    pattern_6();

    cout<<endl<<"7"<<endl;
    pattern_7();

    cout<<endl<<"8"<<endl;
    pattern_8();

    cout<<endl<<"9"<<endl;
    pattern_9();

    cout<<endl<<"0"<<endl;
    pattern_0();
}

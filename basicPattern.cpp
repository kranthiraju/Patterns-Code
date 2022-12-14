#include<bits/stdc++.h>
using namespace std;

int n=5;

void square_pattern(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void triangle_pattern(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        for(int j=0;j<i+1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void rhombus_pattern(){
    for(int i=0;i<n;i++){
        for(int j=n-i-1;j>0;j--){
            cout<<"  ";
        }
        for(int j=0;j<n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void kite_pattern(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        for(int j=0;j<i+1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=n;i>=0;i--){
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        for(int j=0;j<i+1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void hour_pattern(){
    for(int i=n-1;i>0;i--){
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        for(int j=0;j<i+1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        for(int j=0;j<i+1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void num_square_pattern(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<(n*i)+j+1<<" ";
        }
        cout<<endl;
    }
}

void num_triangle_pattern(){
    int a=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        for(int j=0;j<i+1;j++){
            cout<<a++<<" ";
        }
        cout<<endl;
    }
}

void num_kite_pattern(){
    int a=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        for(int j=0;j<i+1;j++){
            cout<<a++<<" ";
        }
        cout<<endl;
    }
    a--;
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        for(int j=0;j<i+1;j++){
            cout<<a--<<" ";
        }
        cout<<endl;
    }
}

void hallow_square_pattern(){
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

void hallow_triangle_pattern(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        for(int j=0;j<i+1;j++){
            if(j==0 || j==i || i==n-1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}

void hallow_rhombus_pattern(){
    for(int i=0;i<n;i++){
        for(int j=n-i-1;j>0;j--){
            cout<<"  ";
        }
        for(int j=0;j<n;j++){
            if(i==n-1 || i==0 || j==0 || j==n-1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}

void hallow_kite_pattern(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        for(int j=0;j<i+1;j++){
            if(j==0 || j==i){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    for(int i=n;i>=0;i--){
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        for(int j=0;j<i+1;j++){
            if(j==0 || j==i){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}

void hallow_hour_pattern(){
    for(int i=n-1;i>0;i--){
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        for(int j=0;j<i+1;j++){
            if(j==0 || j==i || i==n-1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        for(int j=0;j<i+1;j++){
            if(j==0 || j==i || i==n-1){
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
    cout<<"Basic Geometry Pattern"<<endl;

    cout<<endl<<"Square"<<endl;
    square_pattern();

    cout<<endl<<"Triangle"<<endl;
    triangle_pattern();

    cout<<endl<<"Rhombus"<<endl;
    rhombus_pattern();

    cout<<endl<<"Kite"<<endl;
    kite_pattern();

    cout<<endl<<"HourGlass"<<endl;
    hour_pattern();

    cout<<endl<<"Numbers Square"<<endl;
    num_square_pattern();

    cout<<endl<<"Numbers Triangle"<<endl;
    num_triangle_pattern();

    cout<<endl<<"Numbers Kite"<<endl;
    num_kite_pattern();

    cout<<endl<<"Hallow Square"<<endl;
    hallow_square_pattern();

    cout<<endl<<"Hallow Trinagle"<<endl;
    hallow_triangle_pattern();

    cout<<endl<<"Hallow Rhomobus"<<endl;
    hallow_rhombus_pattern();

    cout<<endl<<"Hallow Kite"<<endl;
    hallow_kite_pattern();

    cout<<endl<<"Hallow HourGlass"<<endl;
    hallow_hour_pattern();
}

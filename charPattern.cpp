#include<bits/stdc++.h>
using namespace std;

int n=5;

void A_pattern(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==2*((n/2)-j) || i==2*(j-(n/2)) || (i==n-3 && j>=1 && j<n-1)){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}

void B_pattern(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if((i==0 && j==n-1) || (i==n-1 && j==n-1)){
                cout<<"  ";
            }
            else if(i==0 || j==0 || i==n-1 || j==n-1 || i==n/2){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}

void C_pattern(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if((i==0 && j==0) || (i==n-1 && j==0)){
                cout<<"  ";
            }
            else if(i==0 || j==0 || i==n-1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}

void D_pattern(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if((i==0 && j==n-1) || (i==n-1 && j==n-1)){
                cout<<"  ";
            }
            else if(i==0 || i==n-1 || j==0 || j==n-1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}

void E_pattern(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0 || j==0 || i==n-1 || (i==n/2)){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}

void F_pattern(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0 || j==0 || (i==n/2)){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}

void G_pattern(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if((i==0 && j==0) || (i==n-1 && j==0)){
                cout<<"  ";
            }
            else if(i==0 || j==0 || i==n-1 || (i>=n/2 && j==n-1) || (i==n/2 && j>=n/2)){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}

void H_pattern(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j==0 || j==n-1 || i==n/2){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}

void I_pattern(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0 || (j==n/2) || i==n-1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}

void J_pattern(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==n-1 && j<=(n/2)){
                cout<<"* ";
            }
            else if(i==0 || (j==n/2)){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}

void K_pattern(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j==0 || (i<=n/2 && j==((n/2)-i)*2) || (i>n/2 && j==((i-(n/2))*2))){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}

void L_pattern(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j==0 || i==n-1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}

void M_pattern(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j==0 || j==n-1 || (i<=n/2 && (i==j || i==(n-j-1)))){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}

void N_pattern(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j==0 || j==n-1 || i==j){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}

void O_pattern(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if((i==0 && j==0) || (i==n-1 && j==n-1) || (i==0 && j==n-1) || (i==n-1 && j==0)){
                cout<<"  ";
            }
            else if(i==0 || i==n-1 || j==0 || j==n-1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}

void P_pattern(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if((i==0 && j==n-1) || (i==n/2 && j==n-1)){
                cout<<"  ";
            }
            else if(i==0 || j==0 || (i==n/2) || (i<=n/2 && j==n-1)){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}

void Q_pattern(){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if((i==0 && j==0) || (i==n-2 && j==n-2) || (i==0 && j==n-2) || (i==n-2 && j==0)){
                cout<<"  ";
            }
            else if(i==0 || i==n-2 || j==0 || j==n-2 || (i>=n/2 && i==j)){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        if(i==n-1){
            cout<<"* ";
        }
        else{
            cout<<"  ";
        }
    }
    cout<<endl;
}

void R_pattern(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if((i==0 && j==n-1) || (i==n/2 && j==n-1)){
                cout<<"  ";
            }
            else if(i==0 || j==0 || (i==n/2) || (i<=n/2 && j==n-1) || (i-(n/2)==j-1)){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}

void S_pattern(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if((i==0 && j==0) || (i==n/2 && j==0) || (i==n/2 && j==n-1) || (i==n-1 && j==n-1)){
                cout<<"  ";
            }
            else if(i==0 || i==n-1 || i==n/2 || (i<=n/2 && j==0) || (i>=n/2 && j==n-1)){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}

void T_pattern(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0 || (j==n/2)){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}

void U_pattern(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if((i==n-1 && j==0) || (i==n-1 && j==n-1)){
                cout<<"  ";
            }
            else if(j==0 || j==n-1 || i==n-1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}

void V_pattern(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j*2 || i==2*(n-j-1)){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}

void W_pattern(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j==0 || j==n-1 || (i>=n/2 && (i==j || i==(n-j-1)))){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}

void X_pattern(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(n-i-1==j || i==j){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}

void Y_pattern(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(((i==j || n-i-1==j) && i<=n/2) || (i>=n/2 && j==n/2)){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}

void Z_pattern(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0 || i==n-1 || n-i-1==j){
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
    cout<<endl<<"A"<<endl;
    A_pattern();

    cout<<endl<<"B"<<endl;
    B_pattern();

    cout<<endl<<"C"<<endl;
    C_pattern();

    cout<<endl<<"D"<<endl;
    D_pattern();

    cout<<endl<<"E"<<endl;
    E_pattern();

    cout<<endl<<"F"<<endl;
    F_pattern();

    cout<<endl<<"G"<<endl;
    G_pattern();

    cout<<endl<<"H"<<endl;
    H_pattern();

    cout<<endl<<"I"<<endl;
    I_pattern();

    cout<<endl<<"J"<<endl;
    J_pattern();

    cout<<endl<<"K"<<endl;
    K_pattern();

    cout<<endl<<"L"<<endl;
    L_pattern();

    cout<<endl<<"M"<<endl;
    M_pattern();

    cout<<endl<<"N"<<endl;
    N_pattern();

    cout<<endl<<"O"<<endl;
    O_pattern();

    cout<<endl<<"P"<<endl;
    P_pattern();

    cout<<endl<<"Q"<<endl;
    Q_pattern();

    cout<<endl<<"R"<<endl;
    R_pattern();

    cout<<endl<<"S"<<endl;
    S_pattern();

    cout<<endl<<"T"<<endl;
    T_pattern();

    cout<<endl<<"U"<<endl;
    U_pattern();

    cout<<endl<<"V"<<endl;
    V_pattern();

    cout<<endl<<"W"<<endl;
    W_pattern();

    cout<<endl<<"X"<<endl;
    X_pattern();

    cout<<endl<<"Y"<<endl;
    Y_pattern();

    cout<<endl<<"Z"<<endl;
    Z_pattern();
}

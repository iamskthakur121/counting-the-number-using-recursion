#include<iostream>
using namespace std;

void print(int n){
    if (n==0)
    {
       return ;

    }

    //cout<<n<<endl; // 5 4 3 2 1
    print(n-1);
    cout<<n<<endl; // 1 2 3 4 5

    
}

int main(){
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;

    print(n);
    return 0;

}
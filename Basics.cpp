#include<iostream>
using namespace std;

int main(){
    /*int a, b, c;
    cout<<"Enter the value of a\t";
    cin>>a;
    cout<<"Enter the value of b\t";
    cin>>b;
    cout<<"Enter the value of c\t";
    cin>>c;
    
    -------------------------------------------------------------------------------------------------------------------------------------------------------------
    
    if(a>b && a>c){
        cout<<"a is greater\n";
    }
    else if(b>c && b>a){
        cout<<"b is greater\n";
    }
    else{
        cout<<"c is greater\n";
    }

    -------------------------------------------------------------------------------------------------------------------------------------------------------------
    
    int n;
    cout<<"Enter the value of n\t";
    cin>>n;
    int i = 1, s = 0;
    while(i<=n){
        if(i%2==0){
            s = s + i;
        }
        i++;
    }
    cout<<s;
    
    -------------------------------------------------------------------------------------------------------------------------------------------------------------
*/

    int n, i = 2;
    cin >> n;
    while(i<n){
        if(n%i==0){
            cout<<n<<" is non-prime";
            break;
        }
        i++;
    }
    if(i==n){
        cout<<n<<" is prime";
    }
    return 0;
}

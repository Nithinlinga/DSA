#include<iostream>
using namespace std;
void printpattern1(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }

}
void printpattern2(int n){

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void printpattern3(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void printpattern4(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void printpattern5(int n){
    for(int i=0;i<n;i++){
        for(int j=n;j>i;j--){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void printpattern6(int n){
    for(int i=1;i<=n;i++){
        for(int k=1,j=n;j>=i;j--,k++){
            cout<<k<<" ";
        }
        cout<<endl;
    }
}
void printpattern7(int n){

    for(int i=0;i<n;i++){
             char c=65;
        for(int j=0 ;j<n;j++,c++){
            cout<<c<<" ";
        }
        cout<<endl;
    }
}
void printpattern8(int n){
    for(int i=0;i<n;i++){
        //space
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        //star
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        //space
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
    
}
void printpattern9(int n){

    for(int i=0;i<n;i++){
        //space
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        //star
        for(int j=0;j<2*n-(2*i+1);j++){
            cout<<"*";
        }
        //space
        for(int j=0;j<=i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
// void printpattern10(int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<(n/2)-i-1;j++){
//             cout<<" ";
//         }
//         for(int j=0;j<2*i+1;j++){
//             cout<<"*";
//         }
//         for(int j=0;j<(n/2)-1;j++){
//             cout<<" ";
//         }
//         cout<<endl;
//         // -----end of first pattern------       
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<=(n%i);j++){
//             cout<<" ";

//         }
//         for(int j=0;j<n-(2*i+1);j++){
//             cout<<"*";
//         }
//         for(int j=0;j<n%i;j++){
//             cout<<" ";
//         }
//         cout<<endl;
//     }
// }

void printpattern10(int n){
    for(int i=1;i<=2*n-1;i++){
        int stars=i;
        if(i>n){
            stars=2*n-i;
        }
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void printpattern11(int n){
    int start=1;
    for(int i=0;i<n;i++){
        if(i%2==0) start=1;
        else start=0;
        for(int j=0;j<=i;j++){
            cout<<start;
            start=1-start;
        }
        cout<<endl;
    }
}
void printpattern12(int n){
    int space=2*(n-1);
    for(int i=1;i<=n;i++){
        //number
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        //space 
        for(int j=0;j<space;j++){
            cout<<" ";
        }

        //number
        for(int j=i;j>0;j--){
            cout<<j;
        }
        cout<<endl;
        space-=2;
    }
}
void printpattern13(int n){
    int k=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
    }
}
void printpattern14(int n){
    for(int i=0;i<n;i++){
        char c=65;
        for(int j=0;j<=i;j++){
            cout<<c<<" ";
            c++;
        }
        cout<<endl;
    }
}
void printpattern15(int n){
    for(int i=0;i<n;i++){
        char c=65;
        for(int j=n;j>i;j--){
            cout<<c<<" ";
            c++;
        }
        cout<<endl;
    }
}
void printpattern16(int n){
    char c=65;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<c<<" ";
        }
        c++;
        cout<<endl;
    }
}
void printpattern17(int n){
    for(int i=0;i<n;i++){
        //space
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        //alphabets
        char c=65;
        int breakpoint=(2*i+1)/2;
        for(int j=0;j<2*i+1;j++){
            cout<<c<<" ";
            if(j<breakpoint) c++;
            else c--;

        }
        //space
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void printpattern18(int n){
    // for(int i=0;i<n;i++){

    //     for(char c=69-i;c<=69;c++){

    //         cout<<c<<" ";

    //     }
    //     cout<<endl;

        for(int i=0;i<n;i++){

        for(char c=67;c>67-i;c--){

            cout<<c<<" ";

        }
        cout<<endl;

}
}




int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        // printpattern1(n);
        // printpattern2(n);
        // printpattern3(n);
        // printpattern4(n);
        // printpattern5(n);
        // printpattern6(n);
        // printpattern7(n);
        // printpattern8(n);
        // printpattern9(n);
        // printpattern10(n);
        // printpattern11(n);
        // printpattern12(n);
        // printpattern13(n);
        // printpattern14(n);
        // printpattern15(n);
        // printpattern16(n);
        // printpattern17(n);
        printpattern18(n);
        
        
    }
    
}
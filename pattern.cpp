//1.squar print
/*
#include<iostream>
using namespace std;
int main(){
     //outer loop<--Row
for(int i =0; i<4;i=i+1){
    for(int j=0; j<4;j=j+1){
        //inner loop<--column
        cout<<" * ";
    }
    cout<<endl;
}
    return 0;
}
*/

//2.Rectangle
/*
#include<iostream>
using namespace std;
int main(){
    //outer loop <- row
    for(int i = 0; i<3;i++){
        //cout<<" * ";
    //inner loop <- column
    for(int j =0;j<5;j++){
        cout<<" * ";
    }
    cout<<endl;
    }
    return 0;
}
*/

//3.Rectangle
/*#include<iostream>
using namespace std;
int main(){
    for(int i =0;i<3;i++){
        for(int j =0; j<6;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}*/
//4. hollow rectangle
/*
#include<iostream>
using namespace std;
int main(){
    for(int i = 0;i<8; i++){
        for(int j = 0;j<6;j++){
            if(i ==0 || i==7){
                cout<<"* ";
            }
            else{
                if(j==0 || j==5){
                    cout<<"* ";
                }
                else{
                    cout<<"  ";
                }
            }
            
        }
        cout<<endl;
    }
    return 0;
}
*/

//5.Half pyramid
/*
#include<iostream>
using namespace std;
int main(){
    //int n;
    //cin>>n;
    for(int row = 0; row<10; row =row+1){
        for(int col =0; col<row+1; col = col+1){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
} 
*/

// 6.Inverted pyramid
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;
    for(int row = 0; row<n; row++){
        for(int col =0;col<n-row; col++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
*/
// 7. Numeric half pyramid
/*
#include<iostream>
using namespace std;
int main(){
    for(int row = 0; row<5; row++){
        for(int col =0; col<row+1; col++){
            cout<<col+1<<"   ";
        }
        cout<<endl;
    }
    return 0;
}
*/

// 8. Inverted numeric half pyramid
/*
#include<iostream>
using namespace std;
int main(){
    for(int row = 0; row<5;row++){
        for(int col=0; col<5-row; col++){
            cout<<col+1<<" ";
        }
        cout<<endl;
    }
    return 0;
}
*/

//<<<****pattern class-2 ******31/08/2023*****Lec.4******code*****>>>>>**

// 9.Full pyramid
/*
#include<iostream>
using namespace std;
int main(){
    for(int row=0; row<5; row++){
        for(int col =0; col<5-row-1; col++){
            cout<<" ";
        }
        for(int col =0; col<row+1; col++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
*/

// 10. Inverted full pyramid 
/*
#include<iostream>
using namespace std;
int main(){
    for(int row = 0; row<4; row++){
        for(int col=0;col<row;col++){
            cout<<" ";
        }
        for(int col=0;col<4-row;col++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}

// 11. Daimond pattern

/*
#include<iostream>
using namespace std;
int main(){
    for(int row=0; row<5; row++){
        for(int col =0; col<5-row-1; col++){
            cout<<" ";
        }
        for(int col =0; col<row+1; col++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int row = 0; row<5; row++){
        for(int col=0;col<row;col++){
            cout<<" ";
        }
        for(int col=0;col<5-row;col++){
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}
*/

//12. Hollow pyramid

/*
#include<iostream>
using namespace std;
int main(){
    for(int row=0;row<5;row++){
        for(int col=0;col<5-row-1;col++){
            cout<<" ";
        }
        for(int col=0;col<row+1;col++){
            if(col==0 || col==row+1-1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}
*/

// 13.hollow pyramid example 2

/*
#include<iostream>
using namespace std;
int main(){
    for(int row = 0; row<5;row++){
        for(int col=0; col<row;col++){
            cout<<" ";
        }
        for(int col =0;col<5-row;col++){
            if(col==0 || col==5-row-1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
           
        }
        cout<<endl;
    }
   return 0;
}
*/


//14.Hollow diamond pattern


/*
#include<iostream>
using namespace std;
int main(){
    for(int row=0;row<5;row++){
        for(int col=0;col<5-row-1;col++){
            cout<<" ";
        }
        for(int col=0;col<row+1;col++){
            if(col==0 || col==row+1-1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    for(int row = 0; row<5;row++){
        for(int col=0; col<row;col++){
            cout<<" ";
        }
        for(int col =0;col<5-row;col++){
            if(col==0 || col==5-row-1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
           
        }
        cout<<endl;
    }
    return 0;
}
*/

// 15.diffrence pattern practice

/*
#include<iostream>
using namespace std;
int main(){
    int n = 4;
    for(int row=0; row<n; row++){
        //Inverted pyramid 1
        
        for(int col=0; col<n-row; col++){
            cout<<"* ";
        }
        //full pyramid
        for(int col=0; col<2*row+1; col++){
            cout<<"  ";
        }
        //inverted pyramid 2
        for(int col=0; col<n-row; col++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int row=0; row<n; row++){
        //Inverted pyramid 1
        
        for(int col=0; col<row+1; col++){
            cout<<"* ";
        }
        //full pyramid
        for(int col=0; col<2*n-2*row-1; col++){
            cout<<"  ";
        }
        //inverted pyramid 2
        for(int col=0; col<row+1; col++){
            cout<<"* ";
        }
        cout<<endl;
    }
    
    return 0;
}
*/


   // 16.diffrence pattern practice 
/*
#include<iostream>
using namespace std;
int main(){
    int n = 4;
    for(int row=0;row<n;row++){
        for(int col=0;col<2*row+1;col++){
            if(col%2==0){
                cout<<row+1;
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    
    }
    int m=n-1;
    for(int row=0; row<m; row++){
        for(int col=0;col<2*m-2*row-1; col++){
            if(col%2==0){
                cout<< m-row;
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
    return 0;
}
*/

// 17.diffrence pattern practice 
/*
#include<iostream>
using namespace std;
int main(){
    int n=6;
    for(int row=0;row<n;row++){
        for(int col=0;col<n-row; col++){
            if(col==0 || col==n-row-1 || row==0){
                 cout<<"* ";
            }
            else{ 
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}
*/


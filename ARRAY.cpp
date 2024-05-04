#include<iostream>
using namespace std;
void printarray(int arr[],int size){
    
cout<<"printing the array"<<endl;
for (int i=0; i<size;i++){
    cout<< arr[i]<<" "; 
}   
cout<<"printing the array done"<<endl;

}


int main(){
    //deaclare
     int number[3]={5,7,11};

    //accesing the array
    cout<< "value at zero index"<<number[0]<<endl;
    
    cout<< "value at third index"<<number[3]<<endl;
    //initaising array
    int second[3]={5,7,11};
    cout<< "value at second index"<<second[2]<<endl;

    int third[15]={2,7};

    //printing the array
    //int n=15;
    //cout<<"ptinting the array"<<endl;
    //for (int i=0; i<n;i++){
     //   cout<< third[i]<<" "; 
     //  }   

    printarray(third,15); // use of function in array
        
    int fourth[10] ={1};
    int m=10;
    cout<<"printing the array"<<endl;
    for (int i=0; i<m;i++){
        cout<< fourth[i]<<" "; 
    }   




    int fifth[10] ={0};
    int x=10;
    cout<<"printing the array"<<endl;
    for(int i=x; i<=x;i++){
        cout<< fourth[i]<<" "<<endl;
        } 

        //array in string 

        
         
        char ch[5]={'a','b','c','d','p'};
        cout<<ch[3]<<endl;
        for(int i=0; i<5;i++){
            cout<< ch[i]<<" ";
            }
            double firstdouble[6];
            float firstfloat[7];
      



      
       

    return 0;
}
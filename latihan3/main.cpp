#include <iostream>
#include <cstdlib>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
    int data[3];
    int median,i;

   for(i=0;i<3;i++){
    cout<<"Masukan Data : "<<(i+1)<<"\n";
    cin>>data[i];
   }
    i=i-1;
    median=(i+1)/2;
    cout<<endl<<data[median]<<endl;

    return 0;
}

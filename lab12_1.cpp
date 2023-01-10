 #include <iostream>
#include<string>
#include<ctime>
#include<stdlib.h>

using namespace std;

int main(){
    string y;
    cout << "Press Enter 3 times to reveal your future.";
    cin.get();
    cin.get();
    cin.get();
    srand(time(0));
    int x = rand()%9;
    if(x==0) cout<< "A";
    else if(x==1)y="B+";
    else if(x==2)y="B" ;
    else if(x==3)y="C+" ;
    else if(x==4)y="C" ;
    else if(x==5)y="D+" ;
    else if(x==6)y="D" ;
    else if(x==7)y="F" ;
    else y="W" ;
    cout<<"You will get "<<y<<" in this 261102.";
}

#include<iostream>
using namespace std;
void towerofhanoi(int n, char aux_rod,char to_rod,char from_rod){
    if (n==0){
        return;
    }
    towerofhanoi(n-1,to_rod,aux_rod,from_rod);
    cout<<"move disk "<<n<<" from "<<from_rod<<" to "<<to_rod<<" using "<<aux_rod<<"\n";
    towerofhanoi(n-1,aux_rod,to_rod,from_rod);
}

int main()
{
    int n=3;
    char A;
    char B;
    char C;
    towerofhanoi(n,'B','C','A');
    return 0;
}
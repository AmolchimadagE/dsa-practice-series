#include<iostream>
using namespace std;

int main(){

    //variable initialization

    int num , reverse =0, rem;
    num=1234;
    cout<<"\nthe nuber is"<<num;
    //loop to find reverse number

    while(num!=0)
    {
        rem = num%10;
        reverse = reverse*10+rem;
        num /=10;

    };
    cout<<"\nreversed number:"<<reverse ;
    return 0;


}

//time complexity :o(n)
//space complexity : o(1)
//where n is number of digit in num

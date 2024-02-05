#include<iostream>
using namespace std;
int main(){
    int  num, reverse =0, rem, temp;
    num=12321;
    cout<<"\n the number is:"<<num;

    temp =num;

    //loop to find reverse number

    while(temp !=0){
        rem = temp % 10;
        reverse = reverse *10+rem;
        temp /=10;


    };
    if (num ==reverse)
    	cout << "\n The given number is a palindrome";

        else 
        cout<<num<<"is not a palindrom";

}
 // time complexity : o(n)
 //space complexity:o(1)
 // where n is the number of digit  in num

 

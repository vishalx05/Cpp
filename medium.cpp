/*
Take marks as input and print grade:

≥90 → A

≥70 → B

≥50 → C

else → Fail

Read N and print all even numbers from 1 to N

Find the largest of three numbers (without using max function)

*/

#include<iostream>
using namespace std;


int main()
{

    int n;
    cout<<"enter n";
    cin>>n;
    // for(int i=1;i<=n;i++){
    //     if(i%2==0) cout<<i<<"  ";
    // }


    int temp=n;

    int revnum=0;
    while(temp){
        revnum=revnum*10+n%10;
        n=n/10;
    }
    cout<<revnum;




































    // int marks;
    // cout<<"enter the marks "<<endl;
    // cin>>marks;
    // if(marks>=90) {
    //     cout<<"A";
    // }
    // else if(marks>=80){
    //     cout<<"B";
    // }

    // else if(marks>=70){
    //     cout<<"B";
    // }
    // else if(marks>=50){
    //     cout<<"C";
    // }
    // else {
    //     cout<<"Fail";
    //    }
}

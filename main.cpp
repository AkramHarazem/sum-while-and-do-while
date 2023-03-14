#include <iostream>

using namespace std;

int main()
{
    //task1
    int num, sum=0;
    while (sum<=100){
        cout<< "enter number: "<<endl;
        cin>>num;
        sum+=num;
    }
    cout<< "Sum is: "<<sum<<endl;

    // task2
    int num1,sum1=0;
    do {
       cout<< "enter number1: "<<endl;
       cin>>num1;
       sum1+=num1;
    }
    while (num1!=0);
    cout<< "Sum is: "<<sum1<<endl;

    //task 3
    int num2,sum2=0;
    do {
       cout<< "enter number2: "<<endl;
       cin>>num2;
       sum2+=num2;
    }
    while (num2!=0 && sum2<=100);
    cout<< "Sum is: "<<sum2<<endl;

    return 0;
}

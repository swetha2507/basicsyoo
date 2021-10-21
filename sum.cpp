//
// Created by SWETHA S on 21/10/21.
//

#include <iostream>
using namespace std;

int main() {
  int n,sum=0;
  cout<<"Enter the number of digits to find sum"<<endl;
  cin>>n;
  for(int i=1;i<=n;i++){
      sum+=i;
  }
  cout<<"Sum Of The Digits Are:"<<sum<<endl;
}

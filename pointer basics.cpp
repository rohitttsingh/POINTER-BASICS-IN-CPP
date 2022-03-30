#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
int arr[5]={1,2,3,4,5};
int *ptr, i;
//cout<<ptr; ptr=0
ptr=&arr[2];
*ptr = -1;
*(ptr+1) = 0;
*(ptr-1) = 1;
cout<<"\n Array is: ";
for(i=0;i<5;i++){

cout<< *(arr+i)<<" ";
//cout<< arr[i]<<" ";
}
//cout<<(arr); //GARBAGE VALUE
//cout<<*(arr); //first element
//cout<<*(arr+1); //second element

return 0;
}


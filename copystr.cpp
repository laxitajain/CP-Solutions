#include <iostream>
using namespace std;

int main()
{ char arr[20], arr1[20], i;
  cout<<"Enter the first string (string in which you wish to copy another string): ";
  cin>>arr;
  cout<<"Enter the second string (string you wish to copy): ";
  cin>>arr1;
  for(i=0;arr1[i]!='\0';i++)
  { arr[i]=arr1[i];}
  arr[i]='\0';
  cout<<"The copied string is "<<arr;
  
  return 0;
}
// Example program
#include <iostream>
#include <string>
using namespace std;

int main()
{
  string str, ans;
  cin>>str;
  int size = str.size();
  for(int i=0;i<size;i+=2){
      if(str[i] != str[i+1]){
          ans = ans + str[i] + str[i+1];
          
        }
          else continue;
  }
  cout<<ans;
}


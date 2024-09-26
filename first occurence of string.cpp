#include <iostream>
#include <Vector>
using namespace std;
int main()
{

 string haystack;
    string needle;
    cout<<"haystack: ";
    cin>>haystack;
    cout<<"needle: ";
    cin>>needle;

 string matchedStr = "";
       int index = -1;
       for(int i = 0;i<haystack.length()-1;i++){
        for(int j = i; j<=(needle.length()+i)-1;j++){
            matchedStr+=haystack[j];
        }
        if(matchedStr == needle){
            index = i;
            break;
        }  else{
            matchedStr = "";
        }
       }
       cout<<index;
       return 0;

}
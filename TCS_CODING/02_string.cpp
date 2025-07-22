#include<iostream>
#include<vector>
using namespace std;

string removeConsecutiveDuplicates(string input){
    if (input.empty()) return "";
     string reuslt;
     reuslt+=input[0];

     for(size_t i=1; i<input.length(); i++){
        if(input[i]!=input[i-1]){
            reuslt+=input[i];

        }
     }
     return reuslt;


}
int main()
{
    string userInput;
    cin>>userInput;

    string modefidString= removeConsecutiveDuplicates(userInput);
    cout<<modefidString<<endl;

    return 0;
}
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void string_to_lower(std::string& input) {
    
    for (char& symbol : input) {
        symbol = (char) std::tolower(symbol);
    }

}

void transfrom_string(std::string& input) {
    string_to_lower(input);
    //cout<<input<<endl;
    std::string result = "";
    
    for (char& symbol : input) {
        // cout<<symbol<<' '<<count(input.begin(), input.end(), symbol)<<endl;
        if (count(input.begin(), input.end(), symbol) == 1) 
            result += '(';
        else 
            result += ')';
    }
    
    cout<<"output: "<<result<<endl;
}


int main()
{
    // test1
    cout<<"test1"<<endl;
    std::string str1 = "din";
    cout<<"input: "<<str1<<endl;
    transfrom_string(str1);
    cout<<"correct output: ((("<<endl;
    cout<<endl;
    
    // test2
    cout<<"test2"<<endl;
    std::string str2 = "recede";
    cout<<"input: "<<str2<<endl;
    transfrom_string(str2);
    cout<<"correct output: ()()()"<<endl;
    cout<<endl;  
    
    // test3
    cout<<"test3"<<endl;
    std::string str3 = "Success";
    cout<<"input: "<<str3<<endl;
    transfrom_string(str3);
    cout<<"correct output: )())())"<<endl;
    cout<<endl;
          
    // test4
    cout<<"test4"<<endl;
    std::string str4 = "(( @";
    cout<<"input: "<<str4<<endl;
    transfrom_string(str4);
    cout<<"correct output: ))(("<<endl;
    cout<<endl;
    
    // own test
    cout<<"own test"<<endl;
    std::string str5 = "INDiVIDUAL QUalITIES";
    cout<<"input: "<<str5<<endl;
    transfrom_string(str5);
    
    
    return 0;
}
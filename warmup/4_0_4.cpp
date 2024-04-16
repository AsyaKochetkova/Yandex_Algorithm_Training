#include <iostream>
#include <string>
#include <map>

int main(){
    std::string first,second;
    std::map<char, int> list;
    std::cin >> first >> second;
    int leng;

    if (first.length() != second.length()){std::cout << "NO"; return 0;};

    for(char a: first){
        if(list.count(a)==0){list.insert({a,1});}
        else list[a]++;
    }

    for(char a:second){
        if(list.count(a)==0 || list[a]==0) { std::cout << "NO"; return 0;};
        list[a]--; 
    }

    std::cout << "YES";

}
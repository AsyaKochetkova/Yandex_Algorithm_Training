#include <iostream>
#include <vector>

int main(){
    int n,m,a,l,r;
    std::vector<int> arr;
    std::cin >> n >> m;

    for(int i=0; i<n;i++){
        std::cin >> a;
        arr.push_back(a);
    }

    for(int i=0; i<m; i++){
        std::cin >> l >> r;
        bool if_find = false;
        for(int j=l+1; j<=r; j++){
            if(arr[l] > arr[j]) {std::cout << arr[l] << "\n"; if_find = true; break;};
            if(arr[l]<arr[j]) {std::cout << arr[j] << "\n"; if_find = true; break;};
        } 
        if(!if_find) std::cout << "NOT FOUND\n";
    }

}
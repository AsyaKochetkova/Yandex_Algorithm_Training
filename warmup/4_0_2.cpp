#include <iostream>

int main(){
    int a,b,c,d, num, denum, max, min, rem;
    std::cin >> a >> b >> c >> d;
    num = a*d + c*b;
    denum = b*d;

    if(num > denum){min = denum; max = num;}
    else { min = num; max = denum;};
    rem = max%min;
    //алгоритм Евклида для num, denum
    //std::cout << num << " " << denum << "\n";

    while(rem != 0){
        max = min;
        min = rem;
        rem = max % min;
        //std::cout << rem << " " << max << " " << min << "\n";
    };



    std::cout << num/min << " " << denum/min;

}

#include <iostream>
#include <cmath>
#include <iomanip>

int main(){
    int ax,ay,bx,by;
    double dist,ar,br,res;

    std::cin >> ax >> ay >> bx >> by;
    ar = std::hypot(ax,ay);
    br = std::hypot(bx,by);
    //std::cout << ar << " " << br << "\n";

    if(ar < br){int cx=ax,cy=ay;ax = bx;ay = by; bx = cx;by = cy;};

    //std::cout << std::acos((ax*bx+ay*by)/(ar*br)) << "\n";
    res = std::acos((ax*bx+ay*by)/(ar*br))*br + ar-br;
    if(ar+br < res || ar==0 || br == 0) res = ar+br;

    std::cout << std::setprecision(8) << res;
        


}
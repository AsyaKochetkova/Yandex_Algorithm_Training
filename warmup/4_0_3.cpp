#include <iostream>
#include <cmath>
#include <iomanip>

int main(){
    long long int ax,ay,bx,by;
    long double dist,ar,br,res;

    std::cin >> ax >> ay >> bx >> by;
    ar = std::hypotl(ax,ay);
    br = std::hypotl(bx,by);
    

    if(ar < br){int cx=ax,cy=ay,cr = ar;ax = bx;ay = by; bx = cx;by = cy; ar = br; br = cr; };
    //std::cout << ar << " " << br << "\n";
    //std::cout << std::acos((ax*bx+ay*by)/(ar*br)) << "\n";
    
    if(ax*by == ay*bx && (ax*bx+ay*by) > 0) {res = ar-br;} //std::cout << "1\n";}
    else if(ax*by == ay*bx) {res = ar+br;}// std::cout << "2\n";}
    else res = std::acos((ax*bx+ay*by)/(ar*br))*br + ar-br;
    //std::cout << res << "\n";
    if(ar+br < res || ar==0 || br == 0) {res = ar+br;};

    std::cout << std::setprecision(8) << res << "\n";
    //std::cout << std::setprecision(8) << res << "\n";
        


}
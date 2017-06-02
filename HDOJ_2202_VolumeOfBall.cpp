/* @CopyRight:   Script by vimer(micro.script@hotmail.com). All rights reserved.
 * @Version:     1.0
 * @Date:        Tuesday, May 30, 2017
 * @Description: Volume of Ball (URL:http://acm.hdu.edu.cn/showproblem.php?pid=2002)
 * @Environment: Code::Blocks 16.01, GCC 4.9.
 */
#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    double radius = 0.0, volume = 0.0;
    const double PI = 3.1415927;
    while(cin >> radius){
        volume = (4.0 / 3.0) * PI * radius * radius * radius;
        cout << fixed << setprecision(3) << volume << endl;
    }
    return 0;
}

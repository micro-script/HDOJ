/* @CopyRight:   Script by vimer(micro.script@hotmail.com). All rights reserved.
*  @Version:     1.0
*  @Date:        Sunday, Jan 14, 2018
*  @Description: 1098 Ignatius's Puzzle (http://acm.hdu.edu.cn/showproblem.php?pid=1098)
*  @Environment: G++ 6.3.0
*/

#include <iostream>
using namespace std;
int main(){
	int k = 0, n = 0, x = 1;
	// Read each case.
	while(cin >> k){
		bool isfind = false;
		for(int a = 0; a < 66; ++ a){
			if((18 + a * k ) % 65 == 0){
				isfind = true;
				cout << a << endl;
			} 
		}
		if (!isfind) cout << "no" << endl; 

	} 
	return 0;
}
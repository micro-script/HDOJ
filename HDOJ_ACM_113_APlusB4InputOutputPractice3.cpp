/* @CopyRight:   Script by vimer(micro.script@hotmail.com). All rights reserved.
 * @Version:     1.0 .
 * @Date:        07/04/17 15:33
 * @Description: APlusB4InputOutputPractice3
 * @Environment: Dev-cpp5.4, (ISO C++98).
 */
#include<iostream>
int main(){
	using namespace std;
	int a = 0, b = 0;
	while(cin >> a >> b){
		if(a == 0 && b == 0)break;
		else cout << a + b << endl;
	} 
	return 0;
}

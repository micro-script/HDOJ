/* @CopyRight:   Script by vimer(micro.script@hotmail.com). All rights reserved.
 * @Version:     1.0 .
 * @Date:        07/04/17 15:25
 * @Description: A+B for Input-Output Practice (II)
 * @Environment: Dev-cpp5.4, (ISO C++98).
 */

#include<iostream>
int main(){
	using namespace std;
	int runtime = 0, a = 0, b = 0;
	cin >> runtime;
	for(int i = 0; i < runtime; ++i){
		cin >> a >> b;
		cout << a + b << endl;
	}
	return 0;
}

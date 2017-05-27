/* @CopyRight:   Script by vimer(micro.script@hotmail.com). All rights reserved.
 * @Version:     1.0 .
 * @Date:        07/04/17 15:48
 * @Description: A+B for Input-Output Practice (V)
 * @Environment: Dev-cpp5.4, (ISO C++98).
 */
#include<iostream>
using namespace std;
int main(){
	//Function deleration.
	void runcase();
	
	int runtime = 0;
	cin >> runtime;
	
	for(int i = 0; i < runtime; ++i){
		runcase();	
	}
	return 0;
}

void runcase(){
	int total = 0, sum = 0, reader = 0;
	cin >> total;
	for(int i = 0; i < total; ++i){
		cin >> reader;
		sum += reader;
	}
	cout << sum << endl;
}

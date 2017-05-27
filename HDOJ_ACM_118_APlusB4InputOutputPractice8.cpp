/* @CopyRight:   Script by vimer(micro.script@hotmail.com). All rights reserved.
 * @Version:     1.0 .
 * @Date:        07/04/17 16:06
 * @Description: A+B for Input-Output Practice (VIII)
 * @Environment: Dev-cpp5.4, (ISO C++98).
 */
#include<iostream>
using namespace std;
int main(){
	//Fucntion decleration.
	void runcase();
	int runtime = 0;
	cin >> runtime;
	for(int i = 0; i < runtime; ++i){
		runcase();
		if(i != runtime - 1) cout << endl;
	} 
	return 0;
}

void runcase(){
	int total = 0, reader = 0, sum = 0;
	cin >> total;
	for(int i = 0; i < total; ++i){
		cin >> reader;
		sum += reader; 
	} 
	cout << sum << endl;
}

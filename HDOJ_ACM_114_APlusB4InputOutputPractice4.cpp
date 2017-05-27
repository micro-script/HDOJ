/* @CopyRight:   Script by vimer(micro.script@hotmail.com). All rights reserved.
 * @Version:     1.0 .
 * @Date:        07/04/17 15:39
 * @Description: A+B for Input-Output Practice (IV)
 * @Environment: Dev-cpp5.4, (ISO C++98).
 */
#include<iostream>
using namespace std;
int main(){
	//Funcion deleration.
	bool runcase();
	while(runcase()); 
	return 0;
}

bool runcase(){
	int total = 0, sum = 0;
	cin >> total;
	if(total == 0) return false;
	else {
		int reader = 0;
		for(int i = 0; i < total; ++i){
			cin >> reader;
			sum += reader;
		}
		cout << sum << endl;
		return true;
	}
} 

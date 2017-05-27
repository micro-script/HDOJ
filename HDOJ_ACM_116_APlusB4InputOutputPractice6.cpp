/* @CopyRight:   Script by vimer(micro.script@hotmail.com). All rights reserved.
 * @Version:     1.0 .
 * @Date:        07/04/17 15:55
 * @Description: A+B for Input-Output Practice (VI)
 * @Environment: Dev-cpp5.4, (ISO C++98).
 */
 
 #include<iostream>
 using namespace std;
 int main(){
 	int total = 0, sum = 0, reader = 0;
 	while(cin >> total){
 		for(int i = 0; i < total; ++i) {
 			cin >> reader; 
 			sum += reader;
 		}
 		cout << sum << endl;
 		sum = 0;
 	}
 	return 0;
 }


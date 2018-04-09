/* @CopyRight:   Script by vimer(micro.script@hotmail.com). All rights reserved.
*  @Version:     1.0
*  @Date:        Monday, Apr 9, 2018
*  @Description: 1097 A hard puzzle (http://acm.hdu.edu.cn/showproblem.php?pid=1097)
*  @Environment: G++ 6.3.0
*/

/*------------TIME Limit Exceeded---------------
#include <iostream>
#define spc ' '
using namespace std;

int main(){
	long a = 0, b = 0 , lastDigit = 0;
	while(cin >> a >> b){
		lastDigit = a % 10;
		for(long i = 1; i < b; ++i){
			lastDigit *= a;
			lastDigit %= 10;
		}
		cout << lastDigit << endl;
	}
	return 0;
}
------------------------------------------------*/
#include <iostream>

using namespace std;

/*     p1 p2 p3 p4 ......
 *    -------------------
 * 0  {0}
 * 1  {1}
 * 2  {2, 4, 8, 6}
 * 3  {3, 9, 7, 1}
 * 4  {4, 6}
 * 5  {5}
 * 6  {6}
 * 7  {7, 9, 3, 1}
 * 8  {8, 4, 2, 6}
 * 9  {9 ,1}
 */
int main(){
	int conts [10][5] = {
		{1, 0, 0, 0, 0}, //0
 		{1, 1, 0, 0, 0},
 		{4, 2, 4, 8, 6},
 		{4, 3, 9, 7, 1},
 		{2, 4, 6, 0 ,0},
 		{1, 5, 0, 0, 0}, //5
 		{1, 6, 0, 0, 0},
 		{4, 7, 9, 3, 1},
 		{4, 8, 4, 2, 6},
 		{2, 9 ,1, 0, 0}
	};

	int a = 0, lastDigit  = 1;
	long b = 0;

	while(cin >> a >> b){
		if(b == 0){
			cout << lastDigit << endl;
			continue;
		}
		else{
			a %= 10;
			( b % conts[a][0] == 0 ) ?
				lastDigit = conts[a][conts[a][0]]: 
				lastDigit = conts[a][b % conts[a][0]];
				
			cout << lastDigit << endl;
		}
	}//while
	return 0;
}
/**
 * @CopyRight:   Script by vimer(micro.script@hotmail.com). All rights reserved.
 * @Version:     1.0
 * @Date:        Monday, Mar 26, 2018.
 * @Description: 1008 Elevator ( http://acm.hdu.edu.cn/showproblem.php?pid=1008 )
 * @Environment: G++ 6.3.0
 */

# include <iostream>
# include <vector>
# include <cmath>
using namespace std;


void read(vector<int> &step, const int &times){
	//step.reserve(times + 1);
	int reader = 0;
	for(int i = 0; i < times; ++i){
		cin >> reader;
		step.push_back(reader);
	}

}

int cal_sec(vector<int> &step, const int &times){
	const int UP = 6, DOWN = 4, STADY = 5;
	int seconds = 0, sub = 0;
	for(int i = 0; i < step.size() - 1; ++ i){
		sub = step[i + 1] - step [i];
		if(sub > 0)seconds += UP*abs(sub);
		else seconds += DOWN * abs(sub);
	}
	seconds += STADY * times;
	return seconds;
}

int main(){
	int times = 0;
	while(true){
		cin >> times;
		if(times == 0) break;
		else{
			vector<int> step;
			step.push_back(0);
			read(step, times);
			cout << cal_sec(step,times) << endl;
			step.clear();
		}
	}
	return 0;
}
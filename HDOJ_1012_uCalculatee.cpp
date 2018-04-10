/* @CopyRight:   Script by vimer(micro.script@hotmail.com). All rights reserved.
*  @Version:     1.0
*  @Date:        Tuesday, April 10, 2018
*  @Description: 1012 u Calculate e (http://acm.hdu.edu.cn/showproblem.php?pid=1012)
*  @Environment: G++ 6.3.0
*/

# include <iostream>
# include <iomanip>
# define spc ' '
using namespace std;

inline void print_table(){
	cout << 'n' << spc << 'e' << endl
		 << '-' << spc << "-----------" << endl;
}

inline void print_date(const int &n, const double &e){
	if(n > 2 ) cout << n << spc << fixed << setprecision(9)<< e << endl ;
	else cout << n << spc << setprecision(10)<< e << endl;
}

int main(){
	double sum = 1;
	print_table();
	print_date(0, 1);
	for(int i = 1; i < 10; ++ i){
		double fract = 0, deno = 1;

		for(int j = 1; j <=i ; ++j)deno *= j;
		fract = 1.0 / static_cast<double>(deno);
		sum += fract;
		print_date(i,sum);
	}
	return 0;
}

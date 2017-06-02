/* @CopyRight:   Script by vimer(micro.script@hotmail.com). All rights reserved.
 * @Version:     1.0
 * @Date:        Friday, June 2, 2017
 * @Description: Wow! Such Doge! (URL: http://acm.hdu.edu.cn/showproblem.php?pid=4847)
 * @Environment: Code::Blocks 16.01, GCC 4.9.
 */
#include<iostream>
#include<string>
#include<regex>
using namespace std;
int main(){
    const string REG_EXP_STR = "DOGE";
    const regex REGEX_EXP(REG_EXP_STR, regex::icase);
    string reader;
    int counter = 0;
    while(getline(cin, reader)){
        int match_counter = 0;
        for(sregex_iterator it(reader.begin(), reader.end(), REGEX_EXP), end_it; it != end_it; ++it)++match_counter;
        counter += match_counter;
    }
    cout << counter << endl;
    return 0;
}

/* @CopyRight:   Script by vimer(micro.script@hotmail.com). All rights reserved.
 * @Version:     1.0
 * @Date:        Saturday, June 3, 2017
 * @Description: Encoding (URL: http://acm.hdu.edu.cn/showproblem.php?pid=1020)
 * @Environment: Code::Blocks 16.01, GCC 4.9.
 */
#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main(){
    string encoding(const string &);
    int runcase = 0;
    string reader;
    for(cin >> runcase; runcase > 0; --runcase){
        cin >> reader;
        cout << encoding(reader) << endl;
    }
    return 0;
}
string encoding(const string& seq){
    string res;
    int counter = 1;
    ostringstream ostrstream(res);
    for(auto b = seq.cbegin(), e = seq.cend(); b != e; ++b){
        auto i = b + 1;
        for(; i != e; ++i){
            if(*i == *b)++counter;
            else break;
        }
        b = i - 1;
        if(counter > 1)ostrstream << counter << *b;
        else ostrstream << *b;

        if(i == e)break;
        counter = 1;
    }
    return ostrstream.str();
}

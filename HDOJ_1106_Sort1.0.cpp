
/* @CopyRight:   Script by vimer(micro.script@hotmail.com). All rights reserved.
 * @Version:     1.0
 * @Date:        Tuesday, May 30, 2017
 * @Description: Sort(URL: http://acm.hdu.edu.cn/showproblem.php?pid=1106)
 * @Environment: Code::Blocks 16.01, GCC 4.9.
 */
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<regex>
#define spc ' '

using namespace std;

int main(){
    void each_case(string &);
    string str;
    while(cin >> str)each_case(str);
    return 0;
}
void each_case(string &str){
    bool str_sort(string &, string &);
    regex SAP("[0-46-9]+");
    regex SUB_JUG("0+");
    regex SUB_GET("[1-46-9]+.+");
    vector<string> str_ctn;
    for(sregex_iterator it(str.begin(), str.end(),SAP), end_it; it != end_it; ++it){
        string sub_str = it->str();
        if(regex_match(sub_str,SUB_JUG)==true) str_ctn.push_back("0");
        else{
            smatch match_result;
            regex_search(sub_str,match_result,SUB_GET);
            str_ctn.push_back(match_result.str());
        }
    }
    sort(str_ctn.begin(), str_ctn.end(), str_sort);
    for(auto b = str_ctn.begin(), e = str_ctn.end(); b != e; ++b) {
        cout << *b;
        if(b != e -1)cout << spc;
    }
    cout << endl;
}
bool str_sort( string &str1, string &str2){
    if(str1.length() == str2.length()) return str1 < str2;
    else return str1.length() < str2.length();
}


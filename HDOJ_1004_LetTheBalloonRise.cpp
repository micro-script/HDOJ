/* @CopyRight:   Script by vimer(micro.script@hotmail.com). All rights reserved.
 * @Version:     1.0
 * @Date:        Friday, June 9, 2017
 * @Description: Let the Balloon Rise (URL:http://acm.hdu.edu.cn/showproblem.php?pid=1004)
 * @Environment: Code::Blocks 16.01, GCC 4.9.
 */
#include<iostream>
#include<string>
#include<algorithm>
#include<utility>

using namespace std;

int main(){
    void push(vector<pair<string, int> > &, const string &);
    bool color_sort(const pair<string,int> &, const pair<string,int> &);

    string color_reader;
    vector<pair<string,int> > color_ctn;

    int ctn_size = 0;
    while(cin >> ctn_size){
        if(0 == ctn_size)break;
        else{
            for(int i = 0; i < ctn_size; ++i){
                cin >> color_reader;
                push(color_ctn, color_reader);
            }
            sort(color_ctn.rbegin(), color_ctn.rend(), color_sort);
            cout << color_ctn.front().first << endl;
            color_ctn.clear();
        }
    }
    return 0;
}

void push(vector<pair<string, int> > &color_ctn, const string &color){
    bool not_find = true;
    for(auto b = color_ctn.begin(), e = color_ctn.end(); b != e; ++b){
        if(b->first == color){
            ++(b->second);
            not_find = false;
        }
    }
    if(not_find){
        pair<string,int> new_color(color,1);
        color_ctn.push_back(new_color);
    }
}
bool color_sort(const pair<string,int> &color_a, const pair<string,int> &color_b){
    return color_a.second < color_b.second;
}

/* @CopyRight:   Script by vimer(micro.script@hotmail.com). All rights reserved.
 * @Version:     1.0
 * @Date:        Friday, June 9, 2017
 * @Description: Statistics for Students Scores. (URL:http://acm.hdu.edu.cn/showproblem.php?pid=1235)
 * @Environment: Code::Blocks 16.01, GCC 4.9.
 */
#include<iostream>
using namespace std;
int main(){
    int array_size = 0, student_num = 0, search_score = 0;
    while(cin >> array_size){
        if(0 >= array_size)break;
        else{
            int *p_ctn = new int [array_size];
            for(int i = 0, *p_index = p_ctn; i < array_size; ++i)cin >> *p_index++;
            cin >> search_score;
            for(int i = 0, *p_index = p_ctn; i < array_size; ++i, ++p_index)if(*p_index == search_score)++student_num;
            cout << student_num << endl;
            student_num = 0;
            delete p_ctn;
        }
    }
    return 0;
}

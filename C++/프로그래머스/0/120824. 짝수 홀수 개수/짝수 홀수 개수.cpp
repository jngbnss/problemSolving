#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    int even = 0;
    for(auto  i:num_list){
        if(i%2==0) even++;
    }
    answer.push_back(even);
    answer.push_back(num_list.size()-even);
    return answer;
}
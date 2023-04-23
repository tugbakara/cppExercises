#include <bits/stdc++.h>
using namespace std;

void printVector(vector<int> v_)
{
    for_each(v_.begin(), v_.end(), [](int i) { std::cout<< i <<" ";});
}

int greaterThan(vector<int> v_)
{
    vector<int>::iterator it = find_if(v_.begin(), v_.end(), [](int i){return i>4;});
    return *it;
}

vector<int> sortVec(vector<int> v_)
{
    sort(v_.begin(), v_.end(), [](const int& a,const int& b){return a>b;});
    return v_;
}

int countVec(vector<int> v_)
{
    int i = count_if(v_.begin(), v_.end(), [](int a){return (a>=5);});
    return i;
}

vector<int> squareVec(vector<int> v_)
{
    vector<int> res;
    transform(v_.begin(), v_.end(), back_inserter(res), [](int a){ return a*a; });
    return res;
}

int main()
{
    vector<int> v {4,1,3,5,2,3,1,7};

    std::cout<<"The vector is: ";
    printVector(v);
    std::cout<<std::endl;

    int res_g = greaterThan(v);
    std::cout<<"First number from vector greater than 4 is: "<<res_g<<std::endl;

    std::cout<<"Sorted vector numbers are: ";
    vector<int> res_s = sortVec(v);
    printVector(res_s); 
    std::cout<<std::endl;

    int res_c = countVec(v);
    std::cout<<"Numbers of greater then or equal to 5: "<<res_c<<std::endl;

    std::cout<<"Square of each Vector elements: ";
    vector<int> res_sq = squareVec(res_s);
    printVector(res_sq);
    std::cout<<::std::endl;

}

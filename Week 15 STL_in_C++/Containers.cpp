//Vector    => Similer like array but Vector size is not 
// fixed Can be changed at Run Time(Dynamic/resize)

#include<iostream>
#include<vector>
using namespace std;

int main(){
    // vector<int> vec;    //0

    // cout<<vec.size()<<endl;     //Size of Vector

    // function of Vector
    // - size & capacity
    // - push_back & pop_back
    // - emplace_back
    // - at() or []
    // - front & 
    // - erase    - costly function   O(n)
    // vec.erase(start, end)
  
    // - insert    -  costly function O(n)
    // vec.insert(position, value)
  
    // - clear
    // vec.clear is clear all element
  
    // - empty

  

    //Push back - add element at last
    // vec.push_back(1);
    // vec.push_back(2);
    // vec.push_back(3);
    // vec.push_back(4);
    // vec.push_back(5);
    // vec.emplace_back(6);  //- Add element at last 
  
    // vec.pop_back();  //-Remove element from last

    
  
    // cout<<vec.capacity()<<endl;
    // cout<<vec.size()<<endl;

    // vector<int> vec = {1, 2, 3, 4, 5};
    vector<int> vec(10, -1);  //make a 10 element of -1 => Dynamic Programming - tabulation DP[][]

    vector<int> vec1(vec2);
  
    for(int val : vec){
      cout<<val<< " ";
    }
  
    cout<<endl;

    cout<<"Value at idx 2"<<vec[2] << " or " << vec.at(2)<<endl;
    cout<<"front"<<vec.front()<<endl;
    cout<<"back"<<vec.back()<<endl;



    ----------------------------xx Vector(Iterators) xx-----------------------
      
    



  
  
    return 0;
}
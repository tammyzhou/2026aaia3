//week01-3.cpp 學習計畫 Basic 第3題
//LeetCode 28. Find the Index of the First Occurrence in a String
//大海撈針(在一大堆草堆裡,找一根針)
class Solution {
public:
    int strStr(string haystack, string needle) {
        //所有題目都可以用for(迴圈)if(判斷)
        int N1=haystack.length(), N2=needle.length();
        for(int i=0; i<= N1-N2 ; i++){
            if ( haystack.substr(i,N2)==needle) return i;
        }
        return -1; //找不到
    }
};

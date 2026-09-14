class Solution {
public:
    int gcd(int n1,int n2){
        if(n2==0){
            return n1;
        }
        return gcd(n2,n1%n2);
    }
    string gcdOfStrings(string str1, string str2) {
        int n1=str1.length();
        int n2=str2.length();
        int n=gcd(n1,n2);
        string ans=str1.substr(0,n);
        //bool flag=true;
        if(str1+str2==str2+str1){
             return ans;
        }
        return "";
    }
};
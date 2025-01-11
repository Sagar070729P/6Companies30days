class Solution {
public:
    string convertToTitle(int columnNumber) {
        char alpha[26];
        string s="";
        alpha[0]='Z';
        for(int i=1;i<26;i++) alpha[i]=(char)64+i;
        while(columnNumber!=0){
            s+=alpha[columnNumber%26];
            if (columnNumber%26==0) columnNumber-=1;
            columnNumber/=26;
        }
        int i=0,j=s.size()-1;
        char temp;
        while(i<j){
            temp=s[i];
            s[i]=s[j];
            s[j]=temp;
            i++;
            j--;
        }
        return s;
    }
};
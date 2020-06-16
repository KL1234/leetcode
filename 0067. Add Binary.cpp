class Solution {
public:
    string addBinary(string a, string b) {
        string ans;
        int ia=a.size()-1,ib=b.size()-1,c=0;
        if(ia>ib) ans=a;
        else ans=b;
        for(c=ans.size()-1;c>=0 && ia>=0 && ib>=0;c--,ia--,ib--){
           ans[c]=(a[ia]-'0')+(b[ib]-'0')+'0'; 
        }
        for(c=ans.size()-1;c>=0;c--){
           if(ans[c]=='2'){
               if(c==0){
                   ans.erase(0, 1);
                   ans="10"+ans;
                   break;
               }
               ans[c]='0';
               ans[c-1]+=1;
           }
           if(ans[c]=='3'){
               if(c==0){
                   ans.erase(0, 1);
                   ans="11"+ans;
                   break;
               }
               ans[c]='1';
               ans[c-1]+=1;
           }
        }
        
        
        return ans;
    }
};
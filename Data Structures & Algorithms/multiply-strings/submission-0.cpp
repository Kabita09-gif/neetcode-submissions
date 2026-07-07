class Solution {
public:
    string multiply(string num1, string num2) {
        int n=num1.size();
        int m=num2.size();

        reverse(num1.begin(),num1.end());
        reverse(num2.begin(),num2.end());

        vector<int>arr(n+m+1,0);

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                arr[i+j]+=(num1[i]-'0')*(num2[j]-'0');
            }
        }
        reverse(arr.begin(),arr.end());

        for(int i=n+m;i>=1;i--){
            arr[i-1]+=arr[i]/10;
            arr[i]%=10;
        }

        int first=0;
        while(first<=n+m && arr[first]==0)  first++;
        if(first==n+m+1)  return "0";

        string ans="";
        while(first<n+m+1){
            ans+=to_string(arr[first]);
            first++;
        }
        return ans;
        
    }
};

1class Solution {
2public:
3    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
4        int n=boxTypes.size();
5        sort(boxTypes.begin(),boxTypes.end(),[](vector<int>& a,vector<int>& b){
6            return a[1]>b[1];
7        });
8        int sum=0;
9        for(int i=0;i<n;i++){
10            int take=min(truckSize,boxTypes[i][0]);
11            sum+=take*boxTypes[i][1];
12            truckSize-=take;
13
14            if(truckSize==0)
15            break;
16        }
17        return sum;
18    }
19};
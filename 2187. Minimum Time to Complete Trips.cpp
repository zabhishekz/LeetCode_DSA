class Solution {
public:
    long long minimumTime(vector<int>& time, int totalTrips) {
        long long lot = 1;
        long long hit = 1+1e14;
        long long currans = 0;
        long long finalans = 0;
        while(lot <= hit){
            currans = 0;
            long long mid = lot+ (hit-lot)/2;
            for(long long a: time){
                currans += mid/a;
            }
            if(currans >= totalTrips){
                finalans = mid;
                hit = mid-1;
            }
            else{
                lot = mid+1;
            }
        }
        return finalans;
    }
};
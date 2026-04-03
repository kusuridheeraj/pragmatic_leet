class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>>fleet;
        int fleets =0;double maxTime =0;
        for(int i=0;i<position.size();i++){
            fleet.emplace_back(position[i],speed[i]);
        }
        sort(fleet.rbegin(),fleet.rend());

        for(auto &car : fleet){
            double time = (double)(target - car.first)/car.second;
            if(time>maxTime){
                fleets++;
                maxTime = time;
            }
        }
        return fleets;
    }
};
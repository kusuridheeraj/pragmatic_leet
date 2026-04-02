class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int prevIndex = 0;
        int sz = temperatures.size();
        stack<int> st;
        vector<int> answer(sz, 0);
        for (int i = 0; i < sz; i++) {
            while (!st.empty() && (temperatures[i] > temperatures[st.top()])) {
                prevIndex = st.top();
                st.pop();
                answer[prevIndex] = i - prevIndex;
            }
            st.push(i);
        }

        return answer;
    }
};
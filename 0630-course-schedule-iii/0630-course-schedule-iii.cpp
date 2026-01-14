class Solution {
public:
    int scheduleCourse(vector<vector<int>>& courses) {
        sort(courses.begin(), courses.end(), [](auto &a, auto &b) {
            return a[1] < b[1];
        });

        priority_queue<int> maxHeap;
        int endDay = 0;

        for (auto &c : courses) {
            endDay += c[0];
            maxHeap.push(c[0]);

            if (endDay > c[1]) {
                endDay -= maxHeap.top(); 
                maxHeap.pop();
            }
        }
        return maxHeap.size();
    }
};
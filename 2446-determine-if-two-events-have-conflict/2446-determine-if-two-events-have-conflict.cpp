class Solution {
public:
    int toMinutes(const string& t) {
        int h = stoi(t.substr(0, 2));
        int m = stoi(t.substr(3, 2));
        return h * 60 + m;
    }

    bool overlap(int s1, int e1, int s2, int e2) {
        return max(s1, s2) <= min(e1, e2);
    }

    bool haveConflict(vector<string>& event1, vector<string>& event2) {
        int s1 = toMinutes(event1[0]);
        int e1 = toMinutes(event1[1]);
        int s2 = toMinutes(event2[0]);
        int e2 = toMinutes(event2[1]);

        vector<pair<int,int>> r1;
        if (e1 >= s1)
            r1.push_back({s1, e1});
        else {
            r1.push_back({s1, 1440});
            r1.push_back({0, e1});
        }

        vector<pair<int,int>> r2;
        if (e2 >= s2)
            r2.push_back({s2, e2});
        else {
            r2.push_back({s2, 1440});
            r2.push_back({0, e2});
        }

        for (auto &a : r1)
            for (auto &b : r2)
                if (overlap(a.first, a.second, b.first, b.second))
                    return true;

        return false;
    }
};

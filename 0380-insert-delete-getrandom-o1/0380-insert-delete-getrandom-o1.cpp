#include <unordered_set>
#include <vector>
#include <cstdlib>

class RandomizedSet {
public:
    std::unordered_set<int> s1;
    std::vector<int> values;

    RandomizedSet() {
        srand(time(NULL));
    }

    bool insert(int val) {
        if (s1.find(val) != s1.end()) {
            return false;
        } else {
            s1.insert(val);
            values.push_back(val);
        }

        return true;
    }

    bool remove(int val) {
        auto it = s1.find(val);
        if (it != s1.end()) {
            int indexToRemove = std::distance(values.begin(), std::find(values.begin(), values.end(), val));
            s1.erase(it);
            values[indexToRemove] = values.back();
            values.pop_back();
            return true;
        }
        return false;
    }

    int getRandom() {
        if (values.empty()) {
            // Handle case where set is empty
            // You might want to throw an exception or handle it in some way
            return -1;
        }

        int randomIndex = rand() % values.size();
        return values[randomIndex];
    }
};


/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
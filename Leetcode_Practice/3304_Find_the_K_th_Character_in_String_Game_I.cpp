class Solution {
public:
    char kthCharacter(int k) {

        string word = "a";
        while (word.length() < k) {
            string next = "";
            for (char c : word) {
                next += (c == 'z') ? 'a' : c + 1;
            }
            word += next;
        }
        return word[k - 1];
    }
};

// Or

class Solution {
public:
    string word = "a";
    char kthCharacter(int k) {
        getWord(k);
        cout << word;
        return word[k - 1];
    }
    char shift(char c) { return (c == 'z') ? 'a' : c + 1; }
    void getWord(int k) {
        if (k <= 1)
            return;
        else {
            int i = 0;
            string temp;

            while (word[i] != '\0') {
                temp.append(1, shift(word[i]));
                i++;
                k--;
            }
            word.append(temp);
            getWord(k);
        }
    }
};
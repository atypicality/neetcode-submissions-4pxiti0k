class Node {
    public:
    char val;
    std::unordered_map<char, Node*> next;
    bool isEnd = false;

    Node()
    {
    }

    Node(char value)
    {
        val = value;
    }
};

class PrefixTree {
public:
    Node* head;

    PrefixTree() {
        head = new Node();    
    }
    
    void insert(string word) {
        Node* itr = head;
        for(int i = 0; i < word.size(); ++i)
        {
            if(itr == nullptr || itr->next[word[i]] == nullptr)
            {
                itr->next[word[i]] = new Node(word[i]);
                itr = itr->next[word[i]];
            } else {
                itr = itr->next[word[i]];
            }
        }
        itr->isEnd = true;
    }
    
    bool search(string word) {
        Node* itr = head;
        for(int i = 0; i < word.size(); ++i)
        {
            if(itr->next[word[i]] == nullptr)
            {
                return false;
            } else {
                itr = itr->next[word[i]];
            }
        }
        if(itr->isEnd == true) return true;
        return false;
    }
    
    bool startsWith(string prefix) {
        Node* itr = head;
        for(int i = 0; i < prefix.size(); ++i)
        {
            if(itr->next[prefix[i]] == nullptr)
            {
                return false;
            } else {
                itr = itr->next[prefix[i]];
            }
        }
        return true;
    }
};


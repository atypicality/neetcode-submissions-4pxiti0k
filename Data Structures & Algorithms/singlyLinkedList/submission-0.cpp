class Node {
    public:
    int val;
    Node* next;

    Node(int Aval)
    {
        next = nullptr;
        val = Aval;
    }
};

class LinkedList {
public:
    Node* head;

    LinkedList() {
        head = nullptr;
    }

    int get(int index) {
        Node* itr = head;
        for(int i = 0; i < index && itr!=nullptr; ++i)
        {
            itr = itr->next;
        }
        if(itr==nullptr) return -1;
        return itr->val;
    }

    void insertHead(int val) {
        if(head == nullptr)
        {
            head =  new Node(val);
            return;
        }
        Node *a = new Node(val);
        a->next = head;
        head = a;
    }
    
    void insertTail(int val) {
        if(head == nullptr)
        {
            head = new Node(val);
            return;
        }
        Node* itr = head;
        while(itr->next!=nullptr)
        {
            itr = itr->next;
        }
        Node *a = new Node(val);
        itr->next = a;
    }

    bool remove(int index) {
        if(head == nullptr) return false;
        if(index == 0)
        {
            Node* itr = head;
            head = head->next;
            delete itr;
            return true;
        }
        Node* itr = head;
        for(int i = 0; i < index-1 && itr!=nullptr; i++)
        {
            itr = itr->next;
        }
        if(itr == nullptr || itr->next==nullptr) return false;
        if(itr->next->next==nullptr)
        {
            Node* temp = itr->next;
            delete temp;
            itr->next = nullptr;
        }
        else {
            Node* temp = itr->next;
            itr->next = itr->next->next;
            delete temp;
        }
        return true;
    }

    vector<int> getValues() {
        std::vector<int> ans;
        Node* itr = head;
        while(itr!=nullptr)
        {
            ans.push_back(itr->val);
            itr = itr->next;
        }
        return ans;
    }
};

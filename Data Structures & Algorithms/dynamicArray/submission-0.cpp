class DynamicArray {
public:
    int* arr;
    int cap;
    int size;

    DynamicArray(int capacity) {
        arr = new int[capacity];
        cap = capacity;
        size = 0;
    }

    int get(int i) {
        return *(arr+i);
    }

    void set(int i, int n) {
        *(arr+i) = n;
    }

    void pushback(int n) {
        if(size==cap)
        {
            resize();
            *(arr+size) = n;
        }
        else
        {
            *(arr+size) = n;
        }
        size++;
    }

    int popback() {
        size--;
        int last = *(arr+size);
        return last;
    }

    void resize() {
        int* temp = new int[cap * 2];
        int* itr = arr;
        for(int i = 0; i < cap; ++i)
        {
            *(temp+i) = *(arr+i);
        }
        cap = cap * 2;
        delete[] arr;
        arr = temp;
    }

    int getSize() {
        return size;
    }

    int getCapacity() {
        return cap;
    }
};

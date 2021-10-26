class PeekingIterator : public Iterator {
public:
	PeekingIterator(const vector<int>& nums) : Iterator(nums) {
	    // Initialize any member here.
	    // **DO NOT** save a copy of nums and manipulate it directly.
	    // You should only use the Iterator interface methods.
	    
	}
	
    // Returns the next element in the iteration without advancing the iterator.
	int peek() {
        Iterator it(*this);// copy the current list
        return it.next();// operation on copy list
	}
	
	// hasNext() and next() should behave the same as in the Iterator interface.
	// Override them if needed.
	int next() {
	    return Iterator :: next();//using next function of iterator class 
	}
	
	bool hasNext() const {
	    return Iterator :: hasNext();//usiing hasNext function of iterator class
	}
};

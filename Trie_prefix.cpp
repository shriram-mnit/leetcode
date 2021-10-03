class Trienode{
public:
    bool word;
    Trienode* children[26];
    Trienode(): word ( false ){
        memset( children, 0 , sizeof(children) );
    }
};

class Trie {
public:
    /** Initialize your data structure here. */
    Trie() {
        root = new Trienode();
    }
    
    /** Inserts a word into the trie. */
    void insert(string s) {
        Trienode* node = root;
        for( int i = 0 ; i < s.size(); i++ ){
            //node = 
            if( node->children[s[i]-'a'] == NULL ){
                node->children[s[i]-'a'] = new Trienode();
            }
            node = node->children[s[i]-'a'];
        }
        // the node we are at right now is a leaf 
        node->word = true;
    }
    
    /** Returns if the word is in the trie. */
    bool search(string s) {
        Trienode* node = leaf( s );
        return node!=NULL && node->word == true;
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        Trienode*  node = leaf( prefix );
        if( node != NULL ){
            return true;
        }
        return false;
    }
    
    private:
    Trienode* root;
    Trienode* leaf( string prefix ){
        Trienode* node = root;
        for( int i = 0 ; i < prefix.size() && node ; i++ ){
            node = node->children[prefix[i]-'a'];
        }
        
        return node;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */

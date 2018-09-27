#ifndef _TREE_H_
#define _TREE_H_

class Tree {
    public:
        void Seed() { number_trees_ += 1; };

        int get_number_trees() { return number_trees_; }

//    private:
        static int number_trees_;
};

#endif // _TREE_H_

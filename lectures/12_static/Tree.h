#ifndef _TREE_H_
#define _TREE_H_

class Tree {
    public:

        void Seed() { number_seeds_ += 1; };

        int get_number_seeds() { return number_seeds_; }

    private:
        static int number_seeds_;
};

#endif // _TREE_H_

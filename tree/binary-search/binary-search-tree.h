
/*
 * @file binary-search-tree.h 
 *  
 * @author Akagi201 
 * @date 2014/02/17
 *  
 * binary search tree header file 
 *
 */

#ifndef BINARY_SEARCH_TREE_H_
#define BINARY_SEARCH_TREE_H_

/*
 * @struct stnode
 *  
 * @brief definition of binary search tree 
 *  
 * using pointer 
 *  
 * @author Akagi201 
 * @date 2014/02/17
 */
typedef int T;
struct stnode{
    T data;
    struct stnode *left;
    struct stnode *right;
};

void make_tree(struct stnode **tree);

void insert(T const element);

void find(T const element);

void erase(T const element);

void in_order(struct stnode *tree);

#endif

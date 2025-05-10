// bst.hpp
#ifndef BST_HPP
#define BST_HPP

namespace collections {

    template<typename T>
    class BST {
        struct Node {
            T value;
            Node *left, *right;
            Node(const T& v) : value(v), left(nullptr), right(nullptr) {}
        } *root;

        void insert(Node*& node, const T& val) {
            if (!node) node = new Node(val);
            else if (val < node->value) insert(node->left, val);
            else insert(node->right, val);
        }

        void inorder(Node* node, void (*visit)(T)) const {
            if (!node) return;
            inorder(node->left, visit);
            visit(node->value);
            inorder(node->right, visit);
        }

    public:
        BST() : root(nullptr) {}
        void insert(const T& val) { insert(root, val); }
        void inorder(void (*visit)(T)) const { inorder(root, visit); }
    };

} // namespace collections

#endif
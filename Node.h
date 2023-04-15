//
// Created by apple on 26.03.23.
//

#ifndef TEMPLATETASK_NODE_H
#define TEMPLATETASK_NODE_H

template<typename K, typename V>
class Node {
private:
    K _key;
    V _value;
public:
    V getValue() const {
        return _value;
    }

    void setValue(V value) {
        _value = value;
    }

    K getKey() const {
        return _key;
    }

    Node(K key, V value) : _key(key), _value(value) {}
};


#endif //TEMPLATETASK_NODE_H

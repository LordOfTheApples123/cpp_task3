//
// Created by apple on 26.03.23.
//

#ifndef TEMPLATETASK_ASSARRAY_H
#define TEMPLATETASK_ASSARRAY_H
#include <vector>
#include "Node.h"
#include <iostream>

using namespace std;

template<typename K, typename V>
class AssArray {
private:
    vector<Node<K,V>*> _vector;
public:
    explicit AssArray()= default;

    virtual ~AssArray() {
        _vector.clear();
        _vector.shrink_to_fit();
    }

    V get(K key);

    V remove(K key){
        V result;
        int index = -1;
        for(auto it = _vector.begin(); it !=_vector.end(); ++it){
            if(it->getKey() == key){

                result = it->getValue();

                _vector.erase(it);
                break;
            }
        }
        return result;
    }

    void put(K key, V value){
        _vector.emplace_back(new Node<K,V>(key, value));
    }

    void print(){
        for(Node<K,V> node: _vector){
            std::cout<<"key: "<<node.getKey() <<"node: " << node.getValue();
        }
    }
};

template<typename K, typename V>
V AssArray<K, V>::get(K key) {
//    return _vector[0]->getValue();
        V result;
    for(auto it = _vector.begin(); it != _vector.end(); it++){
        if(it->getKey() == key){
            result = *(it)->getValue();
            break;
        }
    }
    return result;
}


#endif //TEMPLATETASK_ASSARRAY_H

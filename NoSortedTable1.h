#pragma once
#include <iostream>
#include <vector>
using namespace std;
    
template <typename Tkey, typename TValue>
class NoSortedTable1
{
    
    

public:
    struct TTableRec {
        Tkey key;
        TValue value;
    };
    vector <TTableRec> data{};
    
    NoSortedTable1() =default;
    size_t size() const noexcept { return data.size(); }
    TValue& operator[](size_t pos) { return data[pos].value; }//?
    void Delete(Tkey key) {
        for (auto& elem : data) {
            if (elem.key == key) {
                elem.key = data[data.size() - 1].key;
                elem.value = data[data.size() - 1].value;
                data.pop_back();
                return;
            }
        }
    }
    TValue* Find(Tkey key) {
        for (auto& val : data)
            if (val.key == key)
                return &val.value;
        return nullptr;
    }
    void Insert(Tkey key, TValue value) {
        if (Find(key))
            return;
        data.push_back({ key,value });
    }
    string* GiveTable() {
        string arr[data.size()];
        int i=0;
        for (auto& elem : data) {
            arr[i]=elem.key+elem.value.GetInfix();
            i++;
        }
        return arr;
    }
    void Print() {
        for (auto& elem : data) {
            cout<<elem.key<<"  ";
            elem.value.Print();
            cout<<endl;
        }
    }

};

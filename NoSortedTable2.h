#pragma once
#include "f_list.h"
using namespace std;
template <typename Tkey, typename TValue>
class NoSortedTable2
{
    struct TTableRec {
        Tkey key;
        TValue value;
    };
    f_list <TTableRec> data();

public:
    NoSortedTable2() = default;
    size_t size() const noexcept { return data.size(); }
    TValue& operator[](size_t pos) {
        int i=0;
        for (auto& val : data)
            if(i==pos)
                return val.value;
    }//?
    void Delete(Tkey key) {
        TValue& before=&data.value;
        for (auto& val : data)
            if (val.key == key) {
                if(&val.value==before)
                    data.pop_front;
                data.erase_after(before);
                before=&val.value;
                return;
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
        
        for (auto& val : data)
        data.push_back({ key,value });
    }
    string* GiveTable() {
        string arr[data.size()];
        int i = 0;
        for (auto& elem : data) {
            arr[i] = elem.key + elem.value.GetInfix();
            i++;
        }
        return arr;
    }
    void Print() {
        for (auto& elem : data) {
            cout << elem.key << "  ";
            elem.value.Print();
            cout << endl;
        }
    }

};

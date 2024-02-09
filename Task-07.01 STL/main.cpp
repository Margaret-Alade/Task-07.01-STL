//
//  main.cpp
//  Task-07.01 STL
//
//  Created by Маргарет  on 07.02.2024.
//

#include <iostream>
#include <set>
#include <map>

int main(int argc, const char * argv[]) {
    std::cout << "[IN]: ";
    std::string str;
    std::cin >> str;
    std::cout << "[OUT]: " << "\n";
    std::multiset <char> m_set_ch;
    std::set <char> set_ch;
    std::multimap <int, char, std::greater <int>> m_map;
    for (int i = 0; i < str.size(); i ++) {
        m_set_ch.insert(str[i]);
        set_ch.insert(str[i]);
    }
    
    for (const auto &elem : m_set_ch) {
        if (set_ch.find(elem) != set_ch.end()) {
            int num = static_cast<int>(m_set_ch.count(elem));
            m_map.insert (std::make_pair (num, elem));
            set_ch.erase(elem);
        }
    }
    for (const auto &[a,b] : m_map) {
        std::cout << b << ": " << a << "\n";
    }
    return 0;
}

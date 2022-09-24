//
// Created by 2hu0 on 2022/9/24.
//
#pragma once

#include <string>
#include "json.h"

using namespace std;
namespace xiaolu {
    namespace json {
        class Parser {
        public:
            Parser();

            void load(const string &str);

            Json parse();

        private:
            string m_str;
            int m_idx;
        private:
            void skip_white_spaces();
            char get_next_token();
            Json parse_null();

            Json parse_bool();

            Json parse_number();

            string parse_string();

            Json parse_array();

            Json parse_object();

            bool in_range(int x, int lower, int upper)
            {
                return (x >= lower && x <= upper);
            }
        };
    }
}

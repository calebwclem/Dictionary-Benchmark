#pragma once
#include <vector>
#include "Dictionary.hpp"
class SortedVectorDict : public Dictionary {

    public:
        void insert(int) override;
        [[nodiscard]]bool lookup(int) const override;
        void remove(int) override;

    private:
        std::vector<int> data;
        int binSearch(int) const;
};
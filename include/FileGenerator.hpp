#ifndef FILEGENERATOR_HPP
#define FILEGENERATOR_HPP

#include "json.hpp"

class FileGenerator {
    public:
        void generateDotFile(const nlohmann::json& classData);
        void generateImageFromDot();
};

#endif
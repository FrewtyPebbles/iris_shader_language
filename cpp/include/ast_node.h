#pragma once
#include <string>
#include <vector>
#include <sstream>

using std::vector;

using std::string;

string compile_type_name(string type_name) {

}

string compile_descriptor(string type_name) {

}

class ASTNode {
public:
    ASTNode() {};
    virtual string compile() = 0;
};

class Declaration : protected ASTNode {
public:
    Declaration() {}
    string compile() override {
        std::stringstream ss;
        for (const string& descriptor : descriptors) {
            ss << compile_descriptor(descriptor) << " ";
        }
        ss << compile_type_name(type_name) << " " << name;
        return ss.str();
    }
    string type_name;
    string name;
    vector<string> descriptors;
};

class Statement : protected ASTNode {
public:
    Statement() {};
    string compile() override {
        std::stringstream ss;
        return ss.str();
    }
};

class FunctionDefinition : protected ASTNode {
public:
    FunctionDefinition() {};
    string compile() override {
        std::stringstream ss;
        ss << compile_type_name(type_name) << " " << name << "(";
        size_t i = 0;
        for (Declaration& arg : arguments) {
            ss << arg.compile();
            if (i < arguments.size()-1)
                ss << ",";
            ++i;
        }
        ss << "){";
        for (Statement& statement : body) {
            ss << statement.compile();
        }
        ss << "}";
        return ss.str();
    };
    
    string name;
    string type_name;
    vector<Declaration> arguments;
    vector<Statement> body;
};
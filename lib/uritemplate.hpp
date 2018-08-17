#ifndef URITEMPLATECPP_H
#define URITEMPLATECPP_H

#include <string>
#include <vector>
#include <map>

namespace uritemplatecpp{

enum VarSpecType {
    Raw = 0,
    Prefixed,
    Exploded
};

struct VarSpec {
    std::string name;
    VarSpecType var_type;
};

enum Operator{
    Null,
    Plus,
    Dot,
    Slash,
    Semi,
    Question,
    Ampersand,
    Hash
};

struct TemplateComponent{
    std::string literal;
    std::vector< std::pair< Operator, std::vector<VarSpec> > > varList;
};

class TemplateVar{
private:
    std::string scalar;
    std::vector<std::string> list;
    std::vector< std::pair< std::string, std::string > > associativeArray;
};

class UriTemplate{
public:
	UriTemplate(std::string Template){
	};

	std::string expand(std::map<std::string,std::string> vars){
		return std::string();
	}
private:
    std::vector<TemplateComponent> components;
    std::map<std::string,TemplateVar> vars;
};

}//uritemplatecpp end 
#endif //URITEMPLATECPP_H end
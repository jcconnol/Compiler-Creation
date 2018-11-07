
#include <iostream>
#include <vector>

using namespace std;

namespace detail 
{
    class Line : string
    { 
        friend istream & operator>>(std::istream & is, Line & line)
        {   
            return getline(is, line);
        }
    };
}

template<class OutIt>
void read_lines(istream& is, OutIt dest)
{
    //typedef istream_iterator<detail::Line> InIt;
    //copy(InIt(is), InIt(), dest);
}
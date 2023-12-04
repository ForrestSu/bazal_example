
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>

using namespace std;

class Status {
private:
    int code;
    std::string msg;
};

Status callRet() {
}

int main() {
    std::cout << "hello world" << std::endl;
    callRet();
    return 0;
}

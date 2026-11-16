#include <iostream>
#include <stack>
using namespace std;

stack<int> sim;
stack<int> minel;

void push(int x){
    sim.push(x);
    if (minel.empty() || x <= minel.top())
        minel.push(x);
}
void pop() {
    if (sim.top() == minel.top())
        minel.pop();
    sim.pop();
}
bool empty(){
    return sim.empty();
}
int getmin(){
    return minel.top();
}
int main(){
    push(5);
    push(2);
    push(3);
    cout << getmin() << "\n";
    cout << (empty() ? "yes" : "no");
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
struct Node {
char c;
double f;
Node *l, *r;
Node(char c, double f) {
l = r = nullptr;
this->c = c;
this->f = f;
}
};
struct cmp {
bool operator()(Node* a, Node* b) {
return a->f > b->f;
}
};
void buildCodes(Node* root, string code, unordered_map<char, string>& codes) {
if (!root) return;
if (!root->l && !root->r) codes[root->c] = code;
buildCodes(root->l, code + "0", codes);
buildCodes(root->r, code + "1", codes);
}
void HuffmanCode(vector<pair<char, double>>& freq) {
priority_queue<Node*, vector<Node*>, cmp> q;
for (auto& f : freq) {
q.push(new Node(f.first, f.second));
}
while (q.size() > 1) {
Node* l = q.top(); q.pop();
Node* r = q.top(); q.pop();
Node* newNode = new Node('#', l->f + r->f);
newNode->l = l;
newNode->r = r;
q.push(newNode);
}
unordered_map<char, string> codes;
buildCodes(q.top(), "", codes);
cout << "Character Codes: \n";
for (auto& p : codes) {
cout << p.first << ": " << p.second << "\n";
}
}
int main() {
vector<pair<char, double>> freq = {{'a', 0.14}, {'g', 0.06}, {'h', 0.10}, {'i', 0.17},
{'l', 0.07}, {'m', 0.11}, {'o', 0.10}, {'r', 0.08}, {'t', 0.17}};
HuffmanCode(freq);
return 0;
}
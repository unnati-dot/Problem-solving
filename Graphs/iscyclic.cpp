int getImportance(vector<Employee*> employees, int id) {
    unordered_map<int, Employee*>u;
    for (auto e : employees) u[e->id] = e;
    queue<Employee*>q; q.push(u[id]);
    int ans = u[id]->importance;
    while (!q.empty()) {
        auto p = q.front(); q.pop();
        for (auto c : p->subordinates)
            ans += u[c]->importance, q.push(u[c]);
    }
    return ans;
}
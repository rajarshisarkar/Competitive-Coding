#include <iostream>
#include <vector>
using namespace std;
#define M 1 //male
#define F (-1) //female
#define U 0 //not marked
#define PB push_back
vector<int> adj[21000];
short int g[21000]; //gender or color
 
bool DFS(int r){
    bool res = true;
    for(int i = 0; i < adj[r].size(); i++){        
        int v = adj[r][i];          
        if(g[v] == g[r]) return false; // for same sex
        if(g[v] == U){
            g[v] = -g[r]; // marking opposite sex
            res = res & DFS(v);
        }
    }
    return res;
}
 
int main(void){
   
    int t = 0; cin >> t;
    for(int tt = 1; tt <= t; tt++){
   
        int n, m; scanf("%d%d",&n,&m);
        for(int i = 0; i < n; i++){
            g[i] = U;
            adj[i].clear();
        }
       
        int x, y;
        for( int i = 0; i < m; i++){
           
            scanf("%d%d",&x,&y);
            adj[x].PB(y); adj[y].PB(x);
        }    
   
        printf("Scenario #%d:\n",tt);
       
        bool result = true;
        for(int i = 0; i < n; i++){
            if(g[i] == U){
                g[i] = M;
                result = result & DFS(i);
            }
        }
       
        if(result)
            printf("No suspicious bugs found!\n");
        else
            printf("Suspicious bugs found!\n");
    }
 
    return 0;
}

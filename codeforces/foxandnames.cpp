// Adjacency List Using Vector
vector<vector<int> >g(n);
g[0].push_back(3);
g[1].push_back(5);
cout<<g[0][0]<<endl;
cout<<g[1][0]<<endl;

int n;
cin>>n;
vector<string> vals(n);
while(n--){
	string s;
	cin>>s;
	vals.push_back(s);
}
vector<vector<int> > adj(n);
int flag =1;
for (int i = 1; i < n; ++i)
{
	// created the Graph with edges
	string s1 = vals[i-1];
	string s2 = vals[i];
	for (int j = 0; j < s1.size(); ++j)
	{
		if(j>s2.size()){
			flag=0;
			break;
		}else if(s1[j]!=s2[j]){
			adj[s1[j]-'a'].push_back(s2[j]-'a');
			break;
		}
	}
}

// topo sort on DAg
for (int i = 0; i < 26; ++i)
{
	if(!vis[i]){
		set<int> st;
			dfs(i, st);
	}
}

void dfs(int node, set<int> &st){
	vis[node]=1;
	st.insert(node);

	for(auto it:adj[node]){
		if(st.count(it!=0)){
			flag=0;
			return;
		}
		if(!vis[it])
			dfs(it, st);
	}
	stack.insert(node);
}
if(flag==0)cout<<"not possible"
	else{
		// print the stack 
	}

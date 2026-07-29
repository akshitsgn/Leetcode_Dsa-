class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        queue<pair<int,int>>q;
        q.push({sr,sc});
        if(image[sr][sc]==color){
            return image ;
        }
        int ch = image[sr][sc];
        image[sr][sc]=color;
        int row[] = {-1,1,0,0};
        int col[] = {0,0,-1,1};
        while(!q.empty()){
            int x = q.front().first;
            int y = q.front().second;
            q.pop();
           for(int i=0;i<4;i++){
            if(x+row[i]<image.size() && y+col[i]<image[0].size() && image[x+row[i]][y+col[i]]==ch){
                q.push({x+row[i],y+col[i]});
                image[x+row[i]][y+col[i]] = color;
            }
           }
        }


        return image ;
       
    }
};
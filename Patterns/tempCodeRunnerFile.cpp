int row=3;
      int col=5;

      vector<vector<int> >arr(row, vector<int>(col, 1));
      for(int i=0; i<arr.size();i++){
        for(int j=0; j<arr[i].size(); j++){
          cout<<arr[i][j]<<" ";
        }
        cout<<endl;
      }
      return 0;
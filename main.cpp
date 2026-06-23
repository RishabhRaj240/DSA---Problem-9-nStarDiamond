void nStarDiamond(int n) {
    for (int i = 1; i <= n; i++) {
	    // Spaces
		  for (int j = 1; j <= n-i; j++) {
			  cout << " ";
		  }
		  // Stars
		  for (int j = 0; j < 2*i-1; j++) {
			  cout << "*";
		  }
		  // Spaces
		  for (int j = 1; j <= n-i; j++) {
			  cout << " ";
		  }
		  cout << endl;
    }
	  for (int k = 1; k <= n; k++) {
	    // Spaces
		  for (int l = 1; l < k; l++) {
			  cout << " ";
		  }
		  // Stars
		  for (int l = 0; l < 2*n-(2*k-1); l++) {
			  cout << "*";
		  }
		  // Spaces
		  for (int l = 1; l < k; l++) {
			  cout << " ";
		  }
		  cout << endl;
    }
}

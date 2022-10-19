void countApplesAndOranges(int& s, int& t, int& a, int& b, vector<int>& apples, vector<int>& oranges) {
int applecount =0 , orangecount=0;

for (int& apple_dist : apples ){
    if(apple_dist + a>= s && apple_dist +a <=t)
    applecount++;
}
for (int& orange_dist : oranges){
    if(orange_dist +b<=t && orange_dist +b>=s)
    orangecount++;
}
cout<< applecount<< "\n" <<orangecount<<endl;

}

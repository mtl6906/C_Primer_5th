double calc(double);
int count(const string&,char);
int sum(vector<int>::iterator,vector<int>::iterator,int);
vector<int> vec(10);

int main()
{
        calc(23.4,55.1);        //      不合法，参数数量不匹配
        count("abcda",'a');
        calc(66);
        sum(vec.begin(),vec.end(),3.8);
}

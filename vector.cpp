//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//int main()
//{
//	//vector<int>arr未给定大小空间，故不能使用下标进行赋值操作，只能push_back不断扩容
//	vector<int>arr(10);//这样定义容器，会初始化容器且全为零，可以使用下标使用赋值操作且容器大小固定。除非使用resize()函数或者push_back或者pop_back
//	for (int i = 0; i < 9; i++)
//		arr[i]=(i + 9);
//	//arr.erase(arr.begin());删去第一个元素
//	//arr.erase(arr.begin() + 2);删去第三个元素
//	//arr.erase(arr.begin() + 2,arr.end());删去第三个到最后
//	//arr.erase(arr.begin() + 1, arr.end() - 5);删去下标1-4的元素
//	//arr.insert(arr.begin() + 1, 999);在下标为1前面插入一个值
//	/*vector<int>::iterator result = find(arr.begin(), arr.end(), 8);查找数组元素是否存在
//	if (result == arr.end())
//		cout << "no" << endl;
//	else
//		cout << "yes" << endl;*/
//	/*vector<int>::iterator it = lower_bound(arr.begin(), arr.end(), 10);
//	int pos = it - arr.begin();
//	for (int i = 0; i < arr.size(); i++)
//		cout << arr[i] << endl;
//	cout << pos << endl;*/
//	return 0;
//}
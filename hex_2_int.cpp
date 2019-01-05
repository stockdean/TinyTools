# include <iostream>
# include <bitset>
using namespace std;
int main()
{
	
	cout << "xx的8进制:" << std::oct << 36 << endl;
    cout << "xx的10进制" << std::dec << 0x157 << endl;
    cout << "xx的16进制:" << std::hex << 36 << endl;
    cout << "xx的2进制: " << bitset<8>(36) << endl;


}

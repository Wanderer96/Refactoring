///������ ���� � ������
class A
{
public:	
	void shuffle();
	int x;
};

class B :
	public A
{
public:......
};
class C :
	public A
{
public:......
};
/// ����� ���� � ������
class A
{
public:......
};
class B :
	public A
{
public:
	void shuffle();
};
class C :
	public A
{
public:
	int x;
};
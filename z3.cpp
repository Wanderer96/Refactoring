///������ ���� � ������
class A
{
public:	........
};

class B :
	public A
{
public:
	void shuffle();
	int x;
};
class C :
	public A
{
public:
	void shuffle();
	int x;
};
/// ����� ���� � ������
class A
{
public:
	void shuffle();
	int x;
};
class B :
	public A
{
public:
};
class C :
	public A
{
public:
};
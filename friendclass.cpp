
class ClassOne
{
	friend class OtherClass;
	        private:
	int topSecret;

};
class OtherClass
{
	public:
		void change(ClassOne co);

};

void OtherClass::change(ClassOne co)
{
	co.topSecret++;
}
int main()
{
}

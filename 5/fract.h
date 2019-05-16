class Fractions
{

private:
	int chislitel;
	int znaminatel;

public:
	Fractions();
	Fractions(int, int);
	Fractions(const Fractions&);

	~Fractions() {}

	void SetFraction();
	void GetFraction() { std::cout << chislitel << '/' << znaminatel << std::endl; }

	Fractions operator+(const Fractions&);
	Fractions operator-(const Fractions&);
	Fractions operator*(const Fractions&);
	bool operator==(const Fractions&);
};

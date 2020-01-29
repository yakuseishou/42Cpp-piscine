#include <string>
#include <iostream>
#include <random>

// struct Lata {
// 	int n;
// 	std::string s2;
// 	std::string  s1;
// };

struct Data {
	std::string s1;
	int n;
	std::string s2;
};

char    *RandyCharStringGen() {
    char*    s = new char [9];
    std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<> uid(1, 100);
    static const char random[] = "1234567890ABCDEFGHIJKLMNOPQRSTWXYZabcdefghijklmnopqrstwxyz";

	for (int i = 0; i < 8; i++) {
		s[i] = random[uid(gen) % (sizeof(random) -1)];
	}
    s[8] = '\0';
    return (s);
}

void  *serialize(void) {

	// Data *data = new Data();
    char    *data = new char[22];
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<> uid(1, 9999);

	char* s1 = RandyCharStringGen();
	char* s2 = RandyCharStringGen();

    int     n = uid(gen);
	// data->s1.assign(s1);
	// data->n = n;
	// data->s2.assign(s2);
	std::cout << "s1: " << s1 << std::endl;
	std::cout << "n: " << n << std::endl;
	std::cout << "s2: " << s2 << std::endl;

    *reinterpret_cast <unsigned long *> (&(data[0])) = *reinterpret_cast <unsigned long *> (s1);
	*reinterpret_cast <int *> (&(data[9])) = n;
	*reinterpret_cast <unsigned long *> (&data[13])  = *reinterpret_cast <unsigned long *> (s2);

	return (data);

	// return (reinterpret_cast<void *>(data));
}

Data *deserialize(void *raw) {
	Data * data = new Data;

	char	s1[9];
	int		n;
	char	s2[9];

	*reinterpret_cast <unsigned long *>(&s1[0]) = *reinterpret_cast <unsigned long *> (&reinterpret_cast <char*> (raw)[0]);
	n = *(reinterpret_cast <int *> (&reinterpret_cast <char*> (raw)[9]));
	*reinterpret_cast <unsigned long *>(&s2[0]) = *reinterpret_cast <unsigned long *> (&reinterpret_cast <char*> (raw)[13]);

	data->s1 = std::string(s1);
	data->n = n;
	data->s2 = std::string(s2);

	return (data);
	// return (reinterpret_cast<Data *> (raw));
}

// Lata *detry(void *row) {

// 	return (reinterpret_cast<Lata *> (row));
// }
int main(void)
{
	void *serializeData = serialize();
	Data *data = deserialize(serializeData);

	std::cout << "----------------------------------------------" << std::endl;

	std::cout << "s1: " << data->s1 << std::endl;
	std::cout << "n: " << data->n << std::endl;
	std::cout << "s2: " << data->s2 << std::endl;
	
	// Lata *lata = reinterpret_cast<Lata *>(deserialize(serializeData));

	// std::cout << "----------------------------------------------" << std::endl;

	// std::cout << "s1: " << lata->s1 << std::endl;
	// std::cout << "s2: " << lata->s2 << std::endl;
	// std::cout << "n: " << lata->n << std::endl;
	return 0;
}
#include <cstring>

template <class T>
T* remove_range(T* array, unsigned int array_len, unsigned int from, unsigned int count){
	T* answer_array = new T[array_len - count];
	std::memcpy(answer_array, array, from);
	std::memcpy(answer_array + from, array + from + count, array_len - from - count);
	return answer_array;
}

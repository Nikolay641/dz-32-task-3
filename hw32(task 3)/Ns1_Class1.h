#pragma once
#include <iostream>

namespace ns1 {
	class Class1 {
	public:
		void show() {
			using std::cout;
			cout << "Class1(ns1)\n";
		}
	};
}
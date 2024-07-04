#pragma once
#include <iostream>

namespace ns1 {
	class Class2 {
	public:
		void show() {
			using std::cout;
			cout << "Class2(ns1)\n";
		}
	};
}
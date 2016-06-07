#include <string>
#include <iostream>
#include "levenshtein.h"

int main (int argc, char *argv[]) {
	int k = 1;

	if (argc > 1)
		k = stoi(argv[1]);

	cout << "Generation of the automaton dula " << std::to_string(k) << endl;
	Automaton * aut = dula(k);
	cout << aut->states.size() << " states generated" << endl;

	saveAutomaton (aut, "dula" + std::to_string(k) + ".fsm");
	graphVizOutput (aut, "dula" + std::to_string(k) + ".dot");

	delete aut;

	return 0;
}
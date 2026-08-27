#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

vector<string> Tokenizer(const vector<string>& lines);
class Node
{
public:
    string data;
    Node *Next;
    Node(string Code)
    {
        data = Code;
        Next = NULL;
    }
};
class Actio_List
{
    public:
    string Identifier_type;
    string Identifier;
    string Value_var;

    Actio_List(string indentifier_tp, string indentifiernm,string val) {
        Identifier_type = indentifier_tp;
        Identifier = indentifiernm;
        Value_var = val;
    }
};
class classified_actions_list
{
    Actio_List Act;
};

class classisfier
{
public:
    void classifier(const vector<string>& tokens);
    void IntClass();
    void CharClass();
    void FloatClass();
    void LongClass();
    void DoubleClass();
    void stringClass();
};
void classisfier::classifier(const vector<string>& tokens)
{
    vector<Actio_List> variables;
    for (size_t i = 0; i + 2 < tokens.size(); i += 3)
    {
        if (tokens[i] == "INT" || tokens[i] == "int")
        {
            string identifier = tokens[i + 1];
            string value = tokens[i + 2];
            variables.emplace_back("INT", identifier, value);
        }
        else if (tokens[i] == "FLOAT" || tokens[i] == "float")
        {
            string identifier = tokens[i + 1];
            string value = tokens[i + 2];
            variables.emplace_back("FLOAT", identifier, value);
        }
        else if (tokens[i] == "CHAR" || tokens[i] == "char")
        {
            string identifier = tokens[i + 1];
            string value = tokens[i + 2];
            variables.emplace_back("CHAR", identifier, value);
        }
    }
    for (Actio_List s : variables)
    {
        cout << endl << s.Identifier_type;
        cout << endl << s.Identifier;
        cout << endl << s.Value_var;
    }
    
}
void IntClass()
{
}
void FloatClass()
{
}
void LongClass()
{
}
void DoubleClass()
{
}
void stringClass()
{
}

void CharClass()
{
}

vector<string> Tokenizer(const vector<string>& lines)
{
    vector<string> tokens;
    for (const string& line : lines)
    {
        istringstream input(line);
        string token;
        while (input >> token)
        {
            tokens.push_back(token);
        }
    }
    return tokens;
}
int main()
{
    // Code Saving Linked List:
    Node *Inputs_head = nullptr;
    Node *Inputs_Tail = nullptr;

    string input;
    cout << endl
         << "Kripya Code Pradan Karen.." << endl;

    while (true)
    {
        cout << ">>";
        getline(cin, input);

        if (input == "END")
            break;

        Node *newLine = new Node(input);

        if (Inputs_head == nullptr)
        {
            Inputs_head = newLine;
            Inputs_Tail = newLine;
        }
        else
        {
            Inputs_Tail->Next = newLine;
        }
    }
    vector<string> source_lines;
    while(Inputs_head != nullptr) {
        source_lines.push_back(Inputs_head->data);
        Inputs_head = Inputs_head->Next;
    }
    vector<string> tokens = Tokenizer(source_lines);
    classisfier classifier_instance;
    classifier_instance.classifier(tokens);
    
    // cout << "\n---- Source Code ----\n";
    // Node *current = Inputs_head;
    // while (current != nullptr)
    // {
    //     cout << current->data << "\n";
    //     Tokenizer(current->data);
    //     current = current->Next;
    // }
}

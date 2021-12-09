#include "std_lib_facilities.h"
constexpr char number='8';
                                



class Token{
public:
    char kind;        
    double value;    
    Token(char ch)   
        :kind(ch), value(0) { }
    Token(char ch, double value)    
        :kind(ch), value(value) { }
};



class Token_stream {
public:
    Token_stream();   
    Token get();     
    void putback(Token t);   
private:
    bool full;       
    Token buffer;    
};




Token_stream::Token_stream()
    :full(false), buffer(0) 
{
}

void Token_stream::putback(Token t)
{
    if (full) error("the buffer is full");
    buffer = t;      
    full = true;     
}


Token Token_stream::get()
{
    if (full) {      
        full = false;
        return buffer;
    }

    char ch;
    cin >> ch;   

    switch (ch) {
    case '=':    
    case 'x':   
    case '(': case ')': case '+': case '-': case '*': case '/':
        return Token(ch);       
    case '.':
    case '0': case '1': case '2': case '3': case '4':
    case '5': case '6': case '7': case '8': case '9':
    {
        cin.putback(ch);   
        double value=0;
        cin >> value;          
        return Token(number, value);
    }
    default:
        error("Bad token");
        return 0;
    }
}
Token_stream ts;     
double expression();  

double primary()
{
    Token t = ts.get();
    switch (t.kind) {
    case '(':  
    {
        double N = expression();
        t = ts.get();
        if (t.kind != ')') error("')' expected");
            return N;
    }
    case number:          
        return t.value; 
    default:
        error("primary expected");
        return 0;
    }
}




double term()
{
    double left = primary();
    Token t = ts.get();       

    while (true) {
        switch (t.kind) {
        case '*':
            left *= primary();
            t = ts.get();
            break;
        case '/':
        {
            double N = primary();
            if (N == 0) error("divide by zero");
            left /= N;
            t = ts.get();
            break;
        }
        case '%':
        {
            double N=primary();
            if (N==0) error ("%: cant be used with 0");
            left=fmod(left, N);
            t=ts.get();
        }
        default:
            ts.putback(t);     
            return left;
        }
    }
}
double expression()
{
    double left = term();    
    Token t = ts.get();     

    while (true) {
        switch (t.kind) {
        case '+':
            left += term(); 
            t = ts.get();
            break;
        case '-':
            left -= term();  
            t = ts.get();
            break;
        default:
            ts.putback(t);    
            return left;
        }
    }
}

int main()

	try
	{
	    cout << "This is my trusty calculator." << endl << "Enter expressions using floating-point numbers." << endl << "The operators you can use in this program: + - * / = ( )" << endl<< "If you want to print out the result, use '=' symbol."<<endl;
	    	 
	    double value=0;
	    while (cin) {
		Token t = ts.get();

		if (t.kind == 'x') break; 
		if (t.kind == '=')       
		    cout << "=" << value << '\value';
		else
		    ts.putback(t);
		value = expression();
	    }
	    keep_window_open();
	}
	catch (exception& e) {
	    cerr << "error: " << e.what() << '\value';
	    keep_window_open();
	    return 1;
	}
	catch (...) {
	    cerr << "Oops: what did you do?";
	    keep_window_open();
	    return 2;
	}
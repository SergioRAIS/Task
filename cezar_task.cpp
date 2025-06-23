#include<iostream>


std::string encrypt_caesar(std::string text, int code){
int codeS = 0;
char y;
std::string textVars;
for(int i = 0; i <= text.length(); i++){
                                        if(text[i] >= 65 && text[i] <= 90){
                                    y = text[i];
                    codeS = ((y - 65) + code) % 26;
                    y = 0;
                    codeS += 65;
                    y = codeS;
                                    textVars += y;
                                    y = 0;
                                    codeS = 0;
                                    }
                if(text[i] < 65 || text[i] > 90 && text[i] < 97 || text[i] > 122){
                    textVars += text[i];
                }
                                    if(text[i] >= 97 && text[i] <= 122){
                                               y = text[i];
                    codeS = ((y - 97) + code) % 26;
                    y = 0;
                    codeS += 97;
                    y = codeS;
                                    textVars += y;
                                    y = 0;
                                    codeS = 0;
                                    }
                                    
    }
    text = textVars;
return text;
}


int main(){

std::string text;
int code = 0;

std::cout << "Input text: ";
std::getline(std::cin, text);
std::cout << "Input text: ";
std::cin >> code;

std::cout << encrypt_caesar(text, code);
    
}
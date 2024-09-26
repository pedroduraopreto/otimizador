#include <iostream>
#include <cstdlib>  
#include <string>

void verificarSistema() {
    std::cout << "Verificando arquivos do sistema...\n";
    system("sfc /scannow");
    std::cout << "Verifica��o conclu�da. Pressione qualquer tecla para continuar...\n";
    std::cin.ignore();  
    std::cin.get();     
}

int main() {
    int choice;

    while (true) {
        std::cout << "===============================\n";
        std::cout << "   Otimizador de Sistema\n";
        std::cout << "===============================\n";
        std::cout << "Escolha uma op��o:\n";
        std::cout << "1. Verificar e corrigir arquivos do sistema\n";
        std::cout << "2. Sair\n";
        std::cout << "Digite sua op��o (1-2): ";
        std::cin >> choice;

        switch (choice) {
        case 1:
            verificarSistema();
            break;
        case 2:
            return 0;
        default:
            std::cout << "Op��o inv�lida! Tente novamente.\n";
        }
    }

    return 0;
}

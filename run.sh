#!/bin/bash

CHAVE=1

while [ $CHAVE != 0 ]
do
    echo 'Escolha uma opção: '
    echo '(1) Fatorial iterativo (2) Fatorial recursivo (3) Sair'
    read OPCAO
    case $OPCAO in
        1)
            cd ./fatorial_iterativo
            make
            make run
            make clean
            cd ..
            ;;
        2)
            cd ./fatorial_recursivo
            make
            make run
            make clean
            cd ..
            ;;
        3)
            echo Saindo...
            CHAVE=0
            ;;
        *)
            echo Por favor, digite um opção válida.
            ;;
    esac
done

# Identificador-de-Monstros
Atividade forum tematico da graduacao

Este projeto implementa um sistema interativo para identificar e classificar monstros fictícios com base em suas características físicas (cabeça, olhos, nariz, boca e orelha).
O programa guia o usuário através de menus para coletar as características e, em seguida, identifica o tipo de monstro usando um catálogo pré-definido e regras de classificação específicas.

Objetivo do Projeto:
A atividade proposta tinha dois objetivos principais:
1. Criação de Monstros: Definir um catálogo de tipos de monstros (Franken, Happy, Zombos, Wackus, Vegitas, Spritem) a partir de um conjunto fixo de características.
2. Elaboração do Algoritmo: Desenvolver um algoritmo em C interativo que permita ao usuário reconstruir e classificar um monstro desconhecido com base nas suas características de catálogo.
   
O catálogo de monstros é baseado na combinação de um Formato de Cabeça e um Tipo de Rosto.
Foi disponibilziado 3 monstros para o catálogo:
Franken Wackus, Zombos vegitas e Happy Spritem.

A partir da decomposição dos 3 monstros base, criamos um total de 6 tipos de monstros, combinações de 3 cabeças e 3 rostos, separando os monstros em seus componentes básicos, formato da cabeca e tipo de rosto.

1. Formatos de Cabeça (Classificação Primária)
Tipo - Característica
Franken	- Quadrada
Happy	- Redonda
Zombos- Cranial

2. Tipos de Rosto (Classificação Secundária)
Tipo	- Olhos  - Nariz	- Boca/Dentes -	Orelhas
Wackus -	Redondos grandes e estrábicos	- Pequeno e a rredondado - Dentes de coelho	- Parafusos
Vegitas -	Redondos grandes -	Apenas buracos -	Dentes podres -	Sem orelhas
Spritem	- Redondos felizes - Pequeno - Sem dentes -	Orelhas normais

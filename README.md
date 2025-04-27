🃏 Super Trunfo

Este projeto é uma versão em C do clássico Super Trunfo. Ele foi desenvolvido com fins educacionais, explorando desde os fundamentos da linguagem C até a lógica de comparação e cálculo de atributos.

🎯 Objetivo
Simular uma disputa entre duas cartas de estados que o usuário digitará, onde atributos como população, PIB, área e pontos turísticos são usados para determinar a carta vencedora.

O projeto é dividido em 3 níveis, representando a evolução do aprendizado:

🧩 Níveis do Projeto
🔹 Nível 1 — Básico
📌 Registro e exibição das cartas

Neste nível, o foco está na entrada e saída de dados. O usuário pode registrar:

Nome do Estado

Código da carta

Cidade representada

População

Área (em km²)

PIB (em bilhões de reais)

Número de pontos turísticos

🧠 Ainda não há cálculos nem comparações entre as cartas.

🔸 Nível 2 — Intermediário
📌 Adição de cálculos básicos e avançados

Além do registro, esse nível calcula:

Densidade populacional (população / área)

PIB per capita (PIB * 10⁹ / população)

Esses dados são apenas exibidos, sem ainda declarar uma carta como vencedora.

🔺 Nível 3 — Mestre
📌 Comparações e definição da carta vencedora

Neste estágio, o jogo se aproxima do Super Trunfo original, com:

Cálculo do inverso da densidade (área / população)

Criação do Super Poder da carta:

super_poder = população + área + PIB + pontos turísticos + PIB per capita + inverso da densidade

Comparações entre os atributos de ambas as cartas

Exibição direta de qual carta vence em cada critério

🧠 Foco em lógica de decisão, cálculo composto e análise simples de resultados.

🛠️ Tecnologias Utilizadas
Linguagem C

Terminal para entrada e saída de dados

Bibliotecas padrão: stdio.h, strings.h


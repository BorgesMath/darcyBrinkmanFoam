# darcyBrinkmanFoam

## Application
`darcyBrinkmanFoam`

## Group
`grpIncompressible PorousMedia Solvers`

## Description
`darcyBrinkmanFoam` é um solver **transiente** para escoamento **incompressível, laminar** de fluidos Newtonianos através de **meios porosos**.



O solver utiliza o algoritmo **PISO** para resolver a equação de Darcy–Brinkman.

---

## 🔹 Equações Governantes

### Continuidade

![MOMENTUM-DARCY](Equacoes/CONTINUIDADE.svg)

### Quantidade de Movimento

![MOMENTUM-DARCY](Equacoes/MOMENTUM-DARCY.svg)


## 🔹 Notação

| Símbolo   | Significado                        |
|-----------|------------------------------------|
| $\vec{U}$ | Velocidade                         |
| $p$       | Pressão cinemática, $p/\rho$       |
| $\nu$     | Viscosidade cinemática             |
| $K$       | Permeabilidade do meio poroso      |

---


## Resultado

## 🚀 Como compilar

Dentro da pasta do solver:
```bash
wmake


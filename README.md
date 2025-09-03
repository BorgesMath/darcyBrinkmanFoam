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
![continuidade](https://latex.codecogs.com/svg.latex?\nabla\cdot\vec{U}=0)

### Quantidade de Movimento
![momento](https://latex.codecogs.com/svg.latex?\frac{\partial\vec{U}}{\partial t}
+\nabla\cdot(\vec{U}\vec{U})
-\nabla\cdot(\nu\nabla\vec{U})
+\frac{\nu}{K}\vec{U}
=-\nabla p)

---

## 🔹 Notação

| Símbolo   | Significado                        |
|-----------|------------------------------------|
| $\vec{U}$ | Velocidade                         |
| $p$       | Pressão cinemática, $p/\rho$       |
| $\nu$     | Viscosidade cinemática             |
| $K$       | Permeabilidade do meio poroso      |

---

## 🔹 Campos necessários

| Campo  | Descrição                              |
|--------|----------------------------------------|
| `U`    | Velocidade \([m/s]\)                   |
| `p`    | Pressão cinemática, \(p/\rho\) \([m^2/s^2]\) |

---

## 🚀 Como compilar

Dentro da pasta do solver:
```bash
wmake


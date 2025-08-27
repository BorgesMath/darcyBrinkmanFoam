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
\[
\nabla \cdot \vec{U} = 0
\]

### Quantidade de Movimento
\[
\frac{\partial \vec{U}}{\partial t}
+ \nabla \cdot \left( \vec{U} \vec{U} \right)
- \nabla \cdot \left(\nu \nabla \vec{U} \right)
+ \frac{\nu}{K} \vec{U}
= - \nabla p
\]

---

## 🔹 Notação

| Símbolo   | Significado                        |
|-----------|------------------------------------|
| \(\vec{U}\) | Velocidade                        |
| \(p\)       | Pressão                           |
| \(\nu\)     | Viscosidade cinemática            |
| \(K\)       | Permeabilidade do meio poroso     |

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
